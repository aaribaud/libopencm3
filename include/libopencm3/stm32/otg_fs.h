/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2010 Gareth McMullin <gareth@blacksphere.co.nz>
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

/*
 * This file covers definitions for the USB OTG FS peripheral.
 * This is the USB core included in the F105, F107, F2, F4 devices
 */

#ifndef LIBOPENCM3_OTG_FS_H
#define LIBOPENCM3_OTG_FS_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/stm32/memorymap.h>
#include <libopencm3/usb/driver/dwc_otg.h>

#define usb_driver_otgfs usb_driver_stm32f107

/***********************************************************************/

/* Core Global Control and Status Registers */
#define OTG_FS_GOTGCTL			DWC_OTG_GOTGCTL(USB_OTG_FS_BASE)
#define OTG_FS_GOTGINT			DWC_OTG_GOTGINT(USB_OTG_FS_BASE)
#define OTG_FS_GAHBCFG			DWC_OTG_GAHBCFG(USB_OTG_FS_BASE)
#define OTG_FS_GUSBCFG			DWC_OTG_GUSBCFG(USB_OTG_FS_BASE)
#define OTG_FS_GRSTCTL			DWC_OTG_GRSTCTL(USB_OTG_FS_BASE)
#define OTG_FS_GINTSTS			DWC_OTG_GINTSTS(USB_OTG_FS_BASE)
#define OTG_FS_GINTMSK			DWC_OTG_GINTMSK(USB_OTG_FS_BASE)
#define OTG_FS_GRXSTSR			DWC_OTG_GRXSTSR(USB_OTG_FS_BASE)
#define OTG_FS_GRXSTSP			DWC_OTG_GRXSTSP(USB_OTG_FS_BASE)
#define OTG_FS_GRXFSIZ			DWC_OTG_GRXFSIZ(USB_OTG_FS_BASE)
#define OTG_FS_GNPTXFSIZ		DWC_OTG_GNPTXFSIZ(USB_OTG_FS_BASE)
#define OTG_FS_GNPTXSTS			DWC_OTG_GNPTXSTS(USB_OTG_FS_BASE)
#define OTG_FS_GCCFG			DWC_OTG_GCCFG(USB_OTG_FS_BASE)
#define OTG_FS_CID				DWC_OTG_CID(USB_OTG_FS_BASE)
#define OTG_FS_HPTXFSIZ			DWC_OTG_HPTXFSIZ(USB_OTG_FS_BASE)
#define OTG_FS_DIEPTXF(x)		DWC_OTG_DIEPxTXF(USB_OTG_FS_BASE, x)


/* Host-mode Control and Status Registers */
#define OTG_FS_HCFG				DWC_OTG_HCFG(USB_OTG_FS_BASE)
#define OTG_FS_HFIR				DWC_OTG_HFIR(USB_OTG_FS_BASE)
#define OTG_FS_HFNUM			DWC_OTG_HFNUM(USB_OTG_FS_BASE)
#define OTG_FS_HPTXSTS			DWC_OTG_HPTXSTS(USB_OTG_FS_BASE)
#define OTG_FS_HAINT			DWC_OTG_HAINT(USB_OTG_FS_BASE)
#define OTG_FS_HAINTMSK			DWC_OTG_HAINTMSK(USB_OTG_FS_BASE)
#define OTG_FS_HPRT				DWC_OTG_HPRT(USB_OTG_FS_BASE)
#define OTG_FS_HCCHAR(x)		DWC_OTG_HCxCHAR(USB_OTG_FS_BASE, x)
#define OTG_FS_HCINT(x)			DWC_OTG_HCxINT(USB_OTG_FS_BASE, x)
#define OTG_FS_HCINTMSK(x)		DWC_OTG_HCxINTMSK(USB_OTG_FS_BASE, x)
#define OTG_FS_HCTSIZ(x)		DWC_OTG_HCxTSIZ(USB_OTG_FS_BASE, x)

/* Device-mode Control and Status Registers */
#define OTG_FS_DCFG				DWC_OTG_DCFG(USB_OTG_FS_BASE)
#define OTG_FS_DCTL				DWC_OTG_DCTL(USB_OTG_FS_BASE)
#define OTG_FS_DSTS				DWC_OTG_DSTS(USB_OTG_FS_BASE)
#define OTG_FS_DIEPMSK			DWC_OTG_DIEPMSK(USB_OTG_FS_BASE)
#define OTG_FS_DOEPMSK			DWC_OTG_DOEPMSK(USB_OTG_FS_BASE)
#define OTG_FS_DAINT			DWC_OTG_DAINT(USB_OTG_FS_BASE)
#define OTG_FS_DAINTMSK			DWC_OTG_DAINTMSK(USB_OTG_FS_BASE)
#define OTG_FS_DVBUSDIS			DWC_OTG_DVBUSDIS(USB_OTG_FS_BASE)
#define OTG_FS_DVBUSPULSE		DWC_OTG_DVBUSPULSE(USB_OTG_FS_BASE)
#define OTG_FS_DIEPEMPMSK		DWC_OTG_DIEPEMPMSK(USB_OTG_FS_BASE)
#define OTG_FS_DIEPCTL0			DWC_OTG_DIEPCTL0(USB_OTG_FS_BASE)
#define OTG_FS_DIEPCTL(x)		DWC_OTG_DIEPCTL(USB_OTG_FS_BASE, x)
#define OTG_FS_DOEPCTL0			DWC_OTG_DOEPCTL0(USB_OTG_FS_BASE)
#define OTG_FS_DOEPCTL(x)		DWC_OTG_DOEPCTL(USB_OTG_FS_BASE, x)
#define OTG_FS_DIEPINT(x)		DWC_OTG_DIEPINT(USB_OTG_FS_BASE, x)
#define OTG_FS_DOEPINT(x)		DWC_OTG_DOEPINT(USB_OTG_FS_BASE, x)
#define OTG_FS_DIEPTSIZ0		DWC_OTG_DIEPTSIZ0(USB_OTG_FS_BASE)
#define OTG_FS_DOEPTSIZ0		DWC_OTG_DOEPTSIZ0(USB_OTG_FS_BASE)
#define OTG_FS_DIEPTSIZ(x)		DWC_OTG_DIEPTSIZ(USB_OTG_FS_BASE, x)
#define OTG_FS_DTXFSTS(x)		DWC_OTG_DTXFSTS(USB_OTG_FS_BASE, x)
#define OTG_FS_DOEPTSIZ(x)		DWC_OTG_DOEPTSIZ(USB_OTG_FS_BASE, x)

/* Power and clock gating control and status register */
#define OTG_FS_PCGCCTL			DWC_OTG_PCGCCTL(USB_OTG_FS_BASE)

/* Data FIFO */
#define OTG_FS_FIFO(x)			DWC_OTG_FS_FIFO(USB_OTG_FS_BASE, x)


#endif
