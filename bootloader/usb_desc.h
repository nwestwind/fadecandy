/* Teensyduino Core Library
 * http://www.pjrc.com/teensy/
 * Copyright (c) 2013 PJRC.COM, LLC.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * 1. The above copyright notice and this permission notice shall be 
 * included in all copies or substantial portions of the Software.
 *
 * 2. If the Software is incorporated into a build system that allows 
 * selection among a list of target devices, then similar target
 * devices manufactured by PJRC.COM must be included in the list of
 * target devices and selectable in the same manner.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _usb_desc_h_
#define _usb_desc_h_

#include <stdint.h>
#include <stddef.h>

#define NUM_USB_BUFFERS           8
#define VENDOR_ID                 0x1d50    // OpenMoko
#define PRODUCT_ID                0x607a    // Assigned to Fadecandy project
#define DEVICE_VER                0x0100    // Bootloader version
#define DEVICE_CLASS              0xfe      // Application specific
#define DEVICE_SUBCLASS			  0x01      // Device Firmware Update
#define MANUFACTURER_NAME         {'s','c','a','n','l','i','m','e'}
#define MANUFACTURER_NAME_LEN     8
#define PRODUCT_NAME              {'F','a','d','e','c','a','n','d','y',' ','B','o','o','t','l','o','a','d','e','r'}
#define PRODUCT_NAME_LEN          20
#define EP0_SIZE                  64
#define NUM_INTERFACE             1
#define DFU_INTERFACE             0
#define DFU_INTERFACE_PROTOCOL	  0x02		// DFU Mode
#define DFU_DETACH_TIMEOUT		  10000		// 10 second timer
#define DFU_TRANSFER_SIZE		  1024		// Equal to flash erase block size
#define CONFIG_DESC_SIZE          (9+9+7)

typedef struct {
    uint16_t  wValue;
    uint16_t  wIndex;
    const uint8_t *addr;
    uint16_t  length;
} usb_descriptor_list_t;

extern const usb_descriptor_list_t usb_descriptor_list[];

#endif
