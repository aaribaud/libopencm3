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

#ifndef LIBOPENCM3_OTG_HS_H
#define LIBOPENCM3_OTG_HS_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/stm32/memorymap.h>
#include <libopencm3/usb/driver/dwc_otg.h>

/* USB Stack driver */
#define usb_driver_otghs usb_driver_stm32f207

/***********************************************************************/

/* Core Global Control and Status Registers */
#define OTG_HS_GOTGCTL			DWC_OTG_GOTGCTL(USB_OTG_HS_BASE)
#define OTG_HS_GOTGINT			DWC_OTG_GOTGINT(USB_OTG_HS_BASE)
#define OTG_HS_GAHBCFG			DWC_OTG_GAHBCFG(USB_OTG_HS_BASE)
#define OTG_HS_GUSBCFG			DWC_OTG_GUSBCFG(USB_OTG_HS_BASE)
#define OTG_HS_GRSTCTL			DWC_OTG_GRSTCTL(USB_OTG_HS_BASE)
#define OTG_HS_GINTSTS			DWC_OTG_GINTSTS(USB_OTG_HS_BASE)
#define OTG_HS_GINTMSK			DWC_OTG_GINTMSK(USB_OTG_HS_BASE)
#define OTG_HS_GRXSTSR			DWC_OTG_GRXSTSR(USB_OTG_HS_BASE)
#define OTG_HS_GRXSTSP			DWC_OTG_GRXSTSP(USB_OTG_HS_BASE)
#define OTG_HS_GRXFSIZ			DWC_OTG_GRXFSIZ(USB_OTG_HS_BASE)
#define OTG_HS_GNPTXFSIZ		DWC_OTG_GNPTXFSIZ(USB_OTG_HS_BASE)
#define OTG_HS_GNPTXSTS			DWC_OTG_GNPTXSTS(USB_OTG_HS_BASE)
#define OTG_HS_GCCFG			DWC_OTG_GCCFG(USB_OTG_HS_BASE)
#define OTG_HS_CID				DWC_OTG_CID(USB_OTG_HS_BASE)
#define OTG_HS_HPTXFSIZ			DWC_OTG_HPTXFSIZ(USB_OTG_HS_BASE)
#define OTG_HS_DIEPTXF(x)		DWC_OTG_DIEPTXF(USB_OTG_HS_BASE, x)

/* Host-mode Control and Status Registers */
#define OTG_HS_HCFG				DWC_OTG_HCFG(USB_OTG_HS_BASE)
#define OTG_HS_HFIR				DWC_OTG_HFIR(USB_OTG_HS_BASE)
#define OTG_HS_HFNUM			DWC_OTG_HFNUM(USB_OTG_HS_BASE)
#define OTG_HS_HPTXSTS			DWC_OTG_HPTXSTS(USB_OTG_HS_BASE)
#define OTG_HS_HAINT			DWC_OTG_HAINT(USB_OTG_HS_BASE)
#define OTG_HS_HAINTMSK			DWC_OTG_HAINTMSK(USB_OTG_HS_BASE)
#define OTG_HS_HPRT				DWC_OTG_HPRT(USB_OTG_HS_BASE)
#define OTG_HS_HCCHAR(x)		DWC_OTG_HCCHAR(USB_OTG_HS_BASE, x)
#define OTG_HS_HCSPLT(x) 		DWC_OTG_HCSPLT(USB_OTG_HS_BASE, x)
#define OTG_HS_HCINT(x)			DWC_OTG_HCINT(USB_OTG_HS_BASE, x)
#define OTG_HS_HCINTMSK(x)		DWC_OTG_HCxINTMSK(USB_OTG_HS_BASE, x)
#define OTG_HS_HCTSIZ(x)		DWC_OTG_HCxTSIZ(USB_OTG_HS_BASE, x)
#define OTG_HS_HCDMA(x)			OTG_HS_HCxDMA(USB_OTG_HS_BASE, x)

/* Device-mode Control and Status Registers */
#define OTG_HS_DCFG				DWC_OTG_DCFG(USB_OTG_HS_BASE)
#define OTG_HS_DCTL				DWC_OTG_DCTL(USB_OTG_HS_BASE)
#define OTG_HS_DSTS				DWC_OTG_DSTS(USB_OTG_HS_BASE)
#define OTG_HS_DIEPMSK			DWC_OTG_DIEPMSK(USB_OTG_HS_BASE)
#define OTG_HS_DOEPMSK			DWC_OTG_DOEPMSK(USB_OTG_HS_BASE)
#define OTG_HS_DAINT			DWC_OTG_DAINT(USB_OTG_HS_BASE)
#define OTG_HS_DAINTMSK			DWC_OTG_DAINTMSK(USB_OTG_HS_BASE)
#define OTG_HS_DVBUSDIS			DWC_OTG_DVBUSDIS(USB_OTG_HS_BASE)
#define OTG_HS_DVBUSPULSE		DWC_OTG_DVBUSPULSE(USB_OTG_HS_BASE)
#define OTG_HS_DIEPEMPMSK		DWC_OTG_DIEPEMPMSK(USB_OTG_HS_BASE)
#define OTG_HS_DIEPCTL0			DWC_OTG_DIEPCTL0(USB_OTG_HS_BASE)
#define OTG_HS_DIEPCTL(x)		DWC_OTG_DIEPCTL(USB_OTG_HS_BASE, x)
#define OTG_HS_DOEPCTL0			DWC_OTG_DOEPCTL0(USB_OTG_HS_BASE)
#define OTG_HS_DOEPCTL(x)		DWC_OTG_DOEPCTL(USB_OTG_HS_BASE, x)
#define OTG_HS_DIEPINT(x)		DWC_OTG_DIEPINT(USB_OTG_HS_BASE, x)
#define OTG_HS_DOEPINT(x)		DWC_OTG_DOEPINT(USB_OTG_HS_BASE, x)
#define OTG_HS_DIEPTSIZ0		DWC_OTG_DIEPTSIZ0(USB_OTG_HS_BASE)
#define OTG_HS_DOEPTSIZ0		DWC_OTG_DOEPTSIZ0(USB_OTG_HS_BASE)
#define OTG_HS_DIEPTSIZ(x)		DWC_OTG_DIEPTSIZ(USB_OTG_HS_BASE, x)
#define OTG_HS_DTXFSTS(x)		DWC_OTG_DIEPxTXFSTS(USB_OTG_HS_BASE, x)
#define OTG_HS_DOEPTSIZ(x)		DWC_OTG_DOEPxTSIZ(USB_OTG_HS_BASE, x)
#define OTG_HS_DEACHHINT		DWC_OTG_DEACHHINT(USB_OTG_HS_BASE)
#define OTG_HS_DEACHHINTMSK		DWC_OTG_DEACHHINTMSK(USB_OTG_HS_BASE)
#define OTG_HS_DIEPEACHMSK		DWC_OTG_DIEPEACHMSK1(USB_OTG_HS_BASE)
#define OTG_HS_DOEPEACHMSK		DWC_OTG_DOEPEACHMSK1(USB_OTG_HS_BASE)
#define OTG_HS_DIEPDMA(x)		DWC_OTG_DIEPDMA(USB_OTG_HS_BASE, x)
#define OTG_HS_DOEPDMA(x)		DWC_OTG_DOEPDMA(USB_OTG_HS_BASE, x)

/* Power and clock gating control and status register */
#define OTG_HS_PCGCCTL			DWC_OTG_PCGCCTL(USB_OTG_HS_BASE)

/* Data FIFO */
#define OTG_HS_FIFO(x)			DWC_OTG_FIFO(USB_OTG_HS_BASE, x)

#endif
