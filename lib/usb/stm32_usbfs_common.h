/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2010 Gareth McMullin <gareth@blacksphere.co.nz>
 * Copyright (C) 2015 Robin Kreis <r.kreis@uni-bremen.de>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef STM32_USBFS_COMMON_H
#define STM32_USBFS_COMMON_H

#include <libopencm3/stm32/usb.h>
#include <libopencm3/usb/usbd.h>

#define USBD_PM_TOP 0x40

void stm32_usbfs_set_address(usbd_device *dev, uint8_t addr);
void stm32_usbfs_set_ep_rx_bufsize(usbd_device *dev, uint8_t ep, uint32_t size);

void stm32_usbfs_ep_setup(usbd_device *usbd_dev, uint8_t addr,
		uint8_t type, uint16_t max_size,
		void (*callback) (usbd_device *usbd_dev,
		uint8_t ep));

void stm32_usbfs_endpoints_reset(usbd_device *usbd_dev);
void stm32_usbfs_ep_stall_set(usbd_device *usbd_dev, uint8_t addr, uint8_t stall);
uint8_t stm32_usbfs_ep_stall_get(usbd_device *usbd_dev, uint8_t addr);
void stm32_usbfs_ep_nak_set(usbd_device *usbd_dev, uint8_t addr, uint8_t nak);
uint16_t stm32_usbfs_ep_write_packet(usbd_device *usbd_dev, uint8_t addr, const void *buf, uint16_t len);
uint16_t stm32_usbfs_ep_read_packet(usbd_device *usbd_dev, uint8_t addr, void *buf, uint16_t len);
void stm32_usbfs_poll(usbd_device *usbd_dev);
void stm32_usbfs_register_sof_callback(usbd_device *dev);

/* These must be implemented by the device specific driver */

/**
 * Copy a data buffer to packet memory.
 *
 * @param vPM Destination pointer into packet memory.
 * @param buf Source pointer to data buffer.
 * @param len Number of bytes to copy.
 */
void stm32_usbfs_copy_from_pm(void *buf, const volatile void *vPM, uint16_t len);

/**
 * Copy a data buffer from packet memory.
 *
 * @param buf Source pointer to data buffer.
 * @param vPM Destination pointer into packet memory.
 * @param len Number of bytes to copy.
 */
void stm32_usbfs_copy_to_pm(volatile void *vPM, const void *buf, uint16_t len);

extern uint8_t stm32_usbfs_force_nak[8];
extern struct _usbd_device stm32_usbfs_dev;

#endif
