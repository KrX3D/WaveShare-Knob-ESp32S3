#pragma once
#include "esphome/core/helpers.h"

#include <cinttypes>

namespace esphome {
namespace ili9xxx {

// clang-format off
static const uint8_t PROGMEM INITCMD_M5STACK[] = {
  0xEF, 3, 0x03, 0x80, 0x02,
  0xCF, 3, 0x00, 0xC1, 0x30,
  0xED, 4, 0x64, 0x03, 0x12, 0x81,
  0xE8, 3, 0x85, 0x00, 0x78,
  0xCB, 5, 0x39, 0x2C, 0x00, 0x34, 0x02,
  0xF7, 1, 0x20,
  0xEA, 2, 0x00, 0x00,
  ILI9XXX_PWCTR1  , 1, 0x23,             // Power control VRH[5:0]
  ILI9XXX_PWCTR2  , 1, 0x10,             // Power control SAP[2:0];BT[3:0]
  ILI9XXX_VMCTR1  , 2, 0x3e, 0x28,       // VCM control
  ILI9XXX_VMCTR2  , 1, 0x86,             // VCM control2
  ILI9XXX_MADCTL  , 1, MADCTL_BGR,       // Memory Access Control
  ILI9XXX_VSCRSADD, 1, 0x00,             // Vertical scroll zero
  ILI9XXX_PIXFMT  , 1, 0x55,
  ILI9XXX_FRMCTR1 , 2, 0x00, 0x13,
  ILI9XXX_DFUNCTR , 3, 0x08, 0x82, 0x27, // Display Function Control
  0xF2, 1, 0x00,                         // 3Gamma Function Disable
  ILI9XXX_GAMMASET , 1, 0x01,             // Gamma curve selected
  ILI9XXX_GMCTRP1 , 15, 0x0F, 0x31, 0x2B, 0x0C, 0x0E, 0x08, // Set Gamma
                        0x4E, 0xF1, 0x37, 0x07, 0x10, 0x03,
                        0x0E, 0x09, 0x00,
  ILI9XXX_GMCTRN1 , 15, 0x00, 0x0E, 0x14, 0x03, 0x11, 0x07, // Set Gamma
                        0x31, 0xC1, 0x48, 0x08, 0x0F, 0x0C,
                        0x31, 0x36, 0x0F,
  ILI9XXX_SLPOUT  , 0x80,                // Exit Sleep
  ILI9XXX_DISPON  , 0x80,                // Display on
  0x00                                   // End of list
};

static const uint8_t PROGMEM INITCMD_M5CORE[] = {
  ILI9XXX_SETEXTC, 3, 0xFF,0x93,0x42,   // Turn on the external command
  ILI9XXX_PWCTR1 , 2, 0x12, 0x12,
  ILI9XXX_PWCTR2 , 1, 0x03,
  ILI9XXX_VMCTR1 , 1, 0xF2,
  ILI9XXX_IFMODE , 1, 0xE0,
  0xF6           , 3, 0x01, 0x00, 0x00,
  ILI9XXX_GMCTRP1,15, 0x00,0x0C,0x11,0x04,0x11,0x08,0x37,0x89,0x4C,0x06,0x0C,0x0A,0x2E,0x34,0x0F,
  ILI9XXX_GMCTRN1,15, 0x00,0x0B,0x11,0x05,0x13,0x09,0x33,0x67,0x48,0x07,0x0E,0x0B,0x2E,0x33,0x0F,
  ILI9XXX_DFUNCTR, 4, 0x08,0x82,0x1D,0x04,
  ILI9XXX_IDMOFF , 0,
  ILI9XXX_DISPON , 0x80,                // Display on
  ILI9XXX_SLPOUT , 0x80,                // Exit Sleep

  0x00                                   // End of list
};



static const uint8_t PROGMEM INITCMD_ILI9341[] = {
  0xEF, 3, 0x03, 0x80, 0x02,
  0xCF, 3, 0x00, 0xC1, 0x30,
  0xED, 4, 0x64, 0x03, 0x12, 0x81,
  0xE8, 3, 0x85, 0x00, 0x78,
  0xCB, 5, 0x39, 0x2C, 0x00, 0x34, 0x02,
  0xF7, 1, 0x20,
  0xEA, 2, 0x00, 0x00,
  ILI9XXX_PWCTR1  , 1, 0x23,             // Power control VRH[5:0]
  ILI9XXX_PWCTR2  , 1, 0x10,             // Power control SAP[2:0];BT[3:0]
  ILI9XXX_VMCTR1  , 2, 0x3e, 0x28,       // VCM control
  ILI9XXX_VMCTR2  , 1, 0x86,             // VCM control2
  ILI9XXX_MADCTL  , 1, 0x48,             // Memory Access Control
  ILI9XXX_VSCRSADD, 1, 0x00,             // Vertical scroll zero
  ILI9XXX_PIXFMT  , 1, 0x55,
  ILI9XXX_FRMCTR1 , 2, 0x00, 0x18,
  ILI9XXX_DFUNCTR , 3, 0x08, 0x82, 0x27, // Display Function Control
  0xF2, 1, 0x00,                         // 3Gamma Function Disable
  ILI9XXX_GAMMASET , 1, 0x01,             // Gamma curve selected
  ILI9XXX_GMCTRP1 , 15, 0x0F, 0x31, 0x2B, 0x0C, 0x0E, 0x08, // Set Gamma
                        0x4E, 0xF1, 0x37, 0x07, 0x10, 0x03,
                        0x0E, 0x09, 0x00,
  ILI9XXX_GMCTRN1 , 15, 0x00, 0x0E, 0x14, 0x03, 0x11, 0x07, // Set Gamma
                        0x31, 0xC1, 0x48, 0x08, 0x0F, 0x0C,
                        0x31, 0x36, 0x0F,
  ILI9XXX_SLPOUT  , 0x80,                // Exit Sleep
  ILI9XXX_DISPON  , 0x80,                // Display on
  0x00                                   // End of list
};

static const uint8_t PROGMEM INITCMD_ILI9481[] = {
  ILI9XXX_SLPOUT ,  0x80,    // Exit sleep mode
  ILI9XXX_PWSET  , 3, 0x07, 0x41, 0x1D,
  ILI9XXX_VMCTR  , 3, 0x00, 0x1C, 0x1F,
  ILI9XXX_PWSETN , 2, 0x01, 0x11,
  ILI9XXX_PWCTR1 , 5, 0x10, 0x3B, 0x00, 0x02, 0x11,
  ILI9XXX_VMCTR1 , 1, 0x03,
  ILI9XXX_IFCTR  , 1, 0x83,
  ILI9XXX_GMCTR  ,12, 0x00, 0x26, 0x21, 0x00, 0x00, 0x1F, 0x65, 0x23, 0x77, 0x00, 0x0F, 0x00,
  ILI9XXX_IFMODE , 1, 0x00,  // CommandAccessProtect
  ILI9XXX_PTLAR , 4, 0, 0, 1, 0xDF,
  0xE4        , 1, 0xA0,
  ILI9XXX_MADCTL  , 1, MADCTL_MV | MADCTL_BGR,       // Memory Access Control
  ILI9XXX_CSCON , 1, 0x01,
  ILI9XXX_PIXFMT, 1, 0x55,  // 16 bit mode
  ILI9XXX_DISPON, 0x80,     // Set display on
  0x00 // end
};

static const uint8_t PROGMEM INITCMD_ILI9481_18[] = {
    ILI9XXX_SLPOUT ,  0x80,    // Exit sleep mode
    ILI9XXX_PWSET  , 3, 0x07, 0x41, 0x1D,
    ILI9XXX_VMCTR  , 3, 0x00, 0x1C, 0x1F,
    ILI9XXX_PWSETN , 2, 0x01, 0x11,
    ILI9XXX_PWCTR1 , 5, 0x10, 0x3B, 0x00, 0x02, 0x11,
    ILI9XXX_VMCTR1 , 1, 0x03,
    ILI9XXX_IFCTR  , 1, 0x83,
    ILI9XXX_GMCTR  ,12, 0x00, 0x26, 0x21, 0x00, 0x00, 0x1F, 0x65, 0x23, 0x77, 0x00, 0x0F, 0x00,
    ILI9XXX_IFMODE , 1, 0x00,  // CommandAccessProtect
    ILI9XXX_PTLAR , 4, 0, 0, 1, 0xDF,
    0xE4        , 1, 0xA0,
    ILI9XXX_MADCTL  , 1, MADCTL_MX| MADCTL_BGR,       // Memory Access Control
    ILI9XXX_CSCON , 1, 0x01,
    ILI9XXX_PIXFMT, 1, 0x66,  // 18 bit mode
    ILI9XXX_DISPON, 0x80,     // Set display on
    0x00 // end
};

static const uint8_t PROGMEM INITCMD_ILI9486[] = {
  ILI9XXX_SLPOUT, 0x80,
  ILI9XXX_PIXFMT, 1, 0x55,
  ILI9XXX_PWCTR3, 1, 0x44,
  ILI9XXX_VMCTR1, 4, 0x00, 0x00, 0x00, 0x00,
  ILI9XXX_GMCTRP1, 15, 0x0f,0x1f,0x1c,0x0c,0x0f,0x08,0x48,0x98,0x37,0x0a,0x13,0x04,0x11,0x0d,0x00,
  ILI9XXX_GMCTRN1, 15, 0x0f,0x32,0x2e,0x0b,0x0d,0x05,0x47,0x75,0x37,0x06,0x10,0x03,0x24,0x20,0x00,
  ILI9XXX_INVOFF, 0x80,
  ILI9XXX_MADCTL, 1, 0x48,
  ILI9XXX_DISPON, 0x80,

  // ILI9XXX_MADCTL, 1, MADCTL_BGR | MADCTL_MV, //hardware rotation
  0x00                                   // End of list
};


static const uint8_t INITCMD_ILI9488[] = {
  ILI9XXX_GMCTRP1,15, 0x0f, 0x24, 0x1c, 0x0a, 0x0f, 0x08, 0x43, 0x88, 0x32, 0x0f, 0x10, 0x06, 0x0f, 0x07, 0x00,
  ILI9XXX_GMCTRN1,15, 0x0F, 0x38, 0x30, 0x09, 0x0f, 0x0f, 0x4e, 0x77, 0x3c, 0x07, 0x10, 0x05, 0x23, 0x1b, 0x00,

  ILI9XXX_PWCTR1,  2, 0x17, 0x15,  // VRH1 VRH2
  ILI9XXX_PWCTR2,  1, 0x41,  // VGH, VGL
  ILI9XXX_VMCTR1,  3, 0x00, 0x12, 0x80,    // nVM VCM_REG VCM_REG_EN

  ILI9XXX_IFMODE,  1, 0x00,
  ILI9XXX_FRMCTR1, 1, 0xA0,  // Frame rate = 60Hz
  ILI9XXX_INVCTR,  1, 0x02,  // Display Inversion Control = 2dot

  0xE9, 1, 0x00,   // Set Image Functio. Disable 24 bit data

  ILI9XXX_ADJCTL3, 4, 0xA9, 0x51, 0x2C, 0x82,  // Adjust Control 3
  ILI9XXX_PIXFMT, 1, 0x66,   //ILI9488 only supports 18-bit pixel format in 4/3 wire SPI mode
  ILI9XXX_SLPOUT,  0x80,    // Exit sleep mode
  ILI9XXX_DISPON,  0x80,    // Set display on
  0x00 // end
};

static const uint8_t INITCMD_WAVESHARE_RES_3_5[] = {
    ILI9XXX_PWCTR3, 1, 0x33,
    ILI9XXX_VMCTR1, 3, 0x00, 0x1e, 0x80,
    ILI9XXX_FRMCTR1, 1, 0xA0,
    ILI9XXX_GMCTRP1, 15, 0x0, 0x13, 0x18, 0x04, 0x0F, 0x06, 0x3a, 0x56, 0x4d, 0x03, 0x0a, 0x06, 0x30, 0x3e, 0x0f,
    ILI9XXX_GMCTRN1, 15, 0x0, 0x13, 0x18, 0x01, 0x11, 0x06, 0x38, 0x34, 0x4d, 0x06, 0x0d, 0x0b, 0x31, 0x37, 0x0f,
    ILI9XXX_PIXFMT, 1, 0x55,
    ILI9XXX_SLPOUT, 0x80,   // slpout, delay
    ILI9XXX_DISPON, 0,
    0x00                                   // End of list
};

static const uint8_t PROGMEM INITCMD_ILI9488_A[] = {
  ILI9XXX_GMCTRP1,15, 0x00, 0x03, 0x09, 0x08, 0x16, 0x0A, 0x3F, 0x78, 0x4C, 0x09, 0x0A, 0x08, 0x16, 0x1A, 0x0F,
  ILI9XXX_GMCTRN1,15, 0x00, 0x16, 0x19, 0x03, 0x0F, 0x05, 0x32, 0x45, 0x46, 0x04, 0x0E, 0x0D, 0x35, 0x37, 0x0F,

  ILI9XXX_PWCTR1,  2, 0x17, 0x15,  // VRH1 VRH2
  ILI9XXX_PWCTR2,  1, 0x41,  // VGH, VGL
  ILI9XXX_VMCTR1,  3, 0x00, 0x12, 0x80,    // nVM VCM_REG VCM_REG_EN

  ILI9XXX_IFMODE,  1, 0x00,
  ILI9XXX_FRMCTR1, 1, 0xA0,  // Frame rate = 60Hz
  ILI9XXX_INVCTR,  1, 0x02,  // Display Inversion Control = 2dot

  ILI9XXX_DFUNCTR, 2, 0x02, 0x02, // Nomal scan

  0xE9, 1, 0x00,   // Set Image Functio. Disable 24 bit data

  ILI9XXX_ADJCTL3, 4, 0xA9, 0x51, 0x2C, 0x82,  // Adjust Control 3

  ILI9XXX_MADCTL,  1, 0x28,
  //ILI9XXX_PIXFMT,  1, 0x55,  // Interface Pixel Format = 16bit
  ILI9XXX_PIXFMT, 1, 0x66,   //ILI9488 only supports 18-bit pixel format in 4/3 wire SPI mode



  // 5 frames
  //ILI9XXX_ETMOD,   1, 0xC6,  //


  ILI9XXX_SLPOUT,  0x80,    // Exit sleep mode
  ILI9XXX_DISPON,  0x80,    // Set display on
  0x00 // end
};

static const uint8_t PROGMEM INITCMD_ST77916[] = {
  ILI9XXX_SWRESET, 0x80,         // Soft reset, then delay 150 ms
  ILI9XXX_CSCON, 1, 0xC3,              // ?? Unlock Manufacturer
  ILI9XXX_CSCON, 1, 0x96,
  ILI9XXX_VMCTR1, 1, 0x1C,              //VCOM  Control 1 [1C]
  ILI9XXX_MADCTL, 1, 0x48,              //Memory Access [00]
  ILI9XXX_PIXFMT, 1, 0x55,              //565
  ILI9XXX_IFMODE, 1, 0x80,              //Interface     [00]
  ILI9XXX_INVCTR, 1, 0x01,              //Inversion Control [01]
  ILI9XXX_DFUNCTR, 3, 0x80, 0x01, 0x68,  // SS=1, NL=360 (0x0168)
  ILI9XXX_ETMOD, 1, 0xC6,              //Entry Mode      [06]

  ILI9XXX_CSCON, 1, 0x69,              //?? lock manufacturer commands
  ILI9XXX_CSCON, 1, 0x3C,              //
  ILI9XXX_SLPOUT, 0x80, // Exit Sleep, then delay 150 ms
  ILI9XXX_DISPON, 0x80, // Main screen turn on, delay 150 ms
  0x00                                   // End of list
};

static const uint8_t PROGMEM INITCMD_ST7796[] = {
  // This ST7796S initilization routine was copied from https://github.com/prenticedavid/Adafruit_ST7796S_kbv/blob/master/Adafruit_ST7796S_kbv.cpp
  ILI9XXX_SWRESET, 0x80,         // Soft reset, then delay 150 ms
  ILI9XXX_CSCON, 1, 0xC3,              // ?? Unlock Manufacturer
  ILI9XXX_CSCON, 1, 0x96,
  ILI9XXX_VMCTR1, 1, 0x1C,              //VCOM  Control 1 [1C]
  ILI9XXX_MADCTL, 1, 0x48,              //Memory Access [00]
  ILI9XXX_PIXFMT, 1, 0x55,              //565
  ILI9XXX_IFMODE, 1, 0x80,              //Interface     [00]
  ILI9XXX_INVCTR, 1, 0x01,              //Inversion Control [01]
  ILI9XXX_DFUNCTR, 3, 0x80, 0x02, 0x3B,  // Display Function Control [80 02 3B] .kbv SS=1, NL=480
  ILI9XXX_ETMOD, 1, 0xC6,              //Entry Mode      [06]

  ILI9XXX_CSCON, 1, 0x69,              //?? lock manufacturer commands
  ILI9XXX_CSCON, 1, 0x3C,              //
  ILI9XXX_SLPOUT, 0x80, // Exit Sleep, then delay 150 ms
  ILI9XXX_DISPON, 0x80, // Main screen turn on, delay 150 ms
  0x00                                   // End of list
};

static const uint8_t PROGMEM INITCMD_S3BOX[] = {
  0xEF, 3, 0x03, 0x80, 0x02,
  0xCF, 3, 0x00, 0xC1, 0x30,
  0xED, 4, 0x64, 0x03, 0x12, 0x81,
  0xE8, 3, 0x85, 0x00, 0x78,
  0xCB, 5, 0x39, 0x2C, 0x00, 0x34, 0x02,
  0xF7, 1, 0x20,
  0xEA, 2, 0x00, 0x00,
  ILI9XXX_PWCTR1  , 1, 0x23,             // Power control VRH[5:0]
  ILI9XXX_PWCTR2  , 1, 0x10,             // Power control SAP[2:0];BT[3:0]
  ILI9XXX_VMCTR1  , 2, 0x3e, 0x28,       // VCM control
  ILI9XXX_VMCTR2  , 1, 0x86,             // VCM control2
  ILI9XXX_MADCTL  , 1, 0xC8,             // Memory Access Control
  ILI9XXX_VSCRSADD, 1, 0x00,             // Vertical scroll zero
  ILI9XXX_PIXFMT  , 1, 0x55,
  ILI9XXX_FRMCTR1 , 2, 0x00, 0x18,
  ILI9XXX_DFUNCTR , 3, 0x08, 0x82, 0x27, // Display Function Control
  0xF2, 1, 0x00,                         // 3Gamma Function Disable
  ILI9XXX_GAMMASET , 1, 0x01,             // Gamma curve selected
  ILI9XXX_GMCTRP1 , 15, 0x0F, 0x31, 0x2B, 0x0C, 0x0E, 0x08, // Set Gamma
                        0x4E, 0xF1, 0x37, 0x07, 0x10, 0x03,
                        0x0E, 0x09, 0x00,
  ILI9XXX_GMCTRN1 , 15, 0x00, 0x0E, 0x14, 0x03, 0x11, 0x07, // Set Gamma
                        0x31, 0xC1, 0x48, 0x08, 0x0F, 0x0C,
                        0x31, 0x36, 0x0F,
  ILI9XXX_SLPOUT  , 0x80,                // Exit Sleep
  ILI9XXX_DISPON  , 0x80,                // Display on
  0x00                                   // End of list
};

static const uint8_t PROGMEM INITCMD_S3BOXLITE[] = {
  0xEF, 3, 0x03, 0x80, 0x02,
  0xCF, 3, 0x00, 0xC1, 0x30,
  0xED, 4, 0x64, 0x03, 0x12, 0x81,
  0xE8, 3, 0x85, 0x00, 0x78,
  0xCB, 5, 0x39, 0x2C, 0x00, 0x34, 0x02,
  0xF7, 1, 0x20,
  0xEA, 2, 0x00, 0x00,
  ILI9XXX_PWCTR1  , 1, 0x23,             // Power control VRH[5:0]
  ILI9XXX_PWCTR2  , 1, 0x10,             // Power control SAP[2:0];BT[3:0]
  ILI9XXX_VMCTR1  , 2, 0x3e, 0x28,       // VCM control
  ILI9XXX_VMCTR2  , 1, 0x86,             // VCM control2
  ILI9XXX_MADCTL  , 1, 0x40,             // Memory Access Control
  ILI9XXX_VSCRSADD, 1, 0x00,             // Vertical scroll zero
  ILI9XXX_PIXFMT  , 1, 0x55,
  ILI9XXX_FRMCTR1 , 2, 0x00, 0x18,
  ILI9XXX_DFUNCTR , 3, 0x08, 0x82, 0x27, // Display Function Control
  0xF2, 1, 0x00,                         // 3Gamma Function Disable
  ILI9XXX_GAMMASET , 1, 0x01,             // Gamma curve selected
  ILI9XXX_GMCTRP1 , 14, 0xF0, 0x09, 0x0B, 0x06, 0x04, 0x15, // Set Gamma
                        0x2F, 0x54, 0x42, 0x3C, 0x17, 0x14,
                        0x18, 0x1B,
  ILI9XXX_GMCTRN1 , 14, 0xE0, 0x09, 0x0B, 0x06, 0x04, 0x03, // Set Gamma
                        0x2B, 0x43, 0x42, 0x3B, 0x16, 0x14,
                        0x17, 0x1B,
  ILI9XXX_SLPOUT  , 0x80,                // Exit Sleep
  ILI9XXX_DISPON  , 0x80,                // Display on
  0x00                                   // End of list
};

static const uint8_t PROGMEM INITCMD_ST7789V[] = {
  ILI9XXX_SLPOUT  , 0x80,                // Exit Sleep
  ILI9XXX_DISPON  , 0x80,                // Display on
  ILI9XXX_MADCTL  , 1, 0x08,             // Memory Access Control, BGR
  ILI9XXX_DFUNCTR, 2, 0x0A, 0x82,
  ILI9XXX_PIXFMT  , 1, 0x55,
  ILI9XXX_FRMCTR2, 5, 0x0C, 0x0C, 0x00, 0x33, 0x33,
  ILI9XXX_ETMOD, 1, 0x35, 0xBB, 1, 0x28,
  ILI9XXX_PWCTR1  , 1, 0x0C,             // Power control VRH[5:0]
  ILI9XXX_PWCTR3  , 2, 0x01, 0xFF,
  ILI9XXX_PWCTR4  , 1, 0x10,
  ILI9XXX_PWCTR5  , 1, 0x20,
  ILI9XXX_IFCTR  , 1, 0x0F,
  ILI9XXX_PWSET, 2, 0xA4, 0xA1,
  ILI9XXX_GMCTRP1 , 14,
  0xd0, 0x00, 0x02, 0x07, 0x0a,
  0x28, 0x32, 0x44, 0x42, 0x06, 0x0e,
  0x12, 0x14, 0x17,
  ILI9XXX_GMCTRN1 , 14,
  0xd0, 0x00, 0x02, 0x07, 0x0a,
  0x28, 0x31, 0x54, 0x47,
  0x0e, 0x1c, 0x17, 0x1b,
  0x1e,
  ILI9XXX_DISPON  , 0x80,                // Display on
  0x00                                   // End of list
};

static const uint8_t PROGMEM INITCMD_GC9A01A[] = {
  0xEF, 0,
  0xEB, 1, 0x14, // ?
  0xFE, 0,
  0xEF, 0,
  0xEB, 1, 0x14, // ?
  0x84, 1, 0x40, // ?
  0x85, 1, 0xFF, // ?
  0x86, 1, 0xFF, // ?
  0x87, 1, 0xFF, // ?
  0x88, 1, 0x0A, // ?
  0x89, 1, 0x21, // ?
  0x8A, 1, 0x00, // ?
  0x8B, 1, 0x80, // ?
  0x8C, 1, 0x01, // ?
  0x8D, 1, 0x01, // ?
  0x8E, 1, 0xFF, // ?
  0x8F, 1, 0xFF, // ?
  0xB6, 2, 0x00, 0x00, // ?
  0x90, 4, 0x08, 0x08, 0x08, 0x08, // ?
  ILI9XXX_PIXFMT  , 1, 0x05,
  ILI9XXX_MADCTL  , 1, MADCTL_MX| MADCTL_BGR,       // Memory Access Control
  0xBD, 1, 0x06, // ?
  0xBC, 1, 0x00, // ?
  0xFF, 3, 0x60, 0x01, 0x04, // ?
  0xC3, 1, 0x13,
  0xC4, 1, 0x13,
  0xF9, 1, 0x22,
  0xBE, 1, 0x11, // ?
  0xE1, 2, 0x10, 0x0E, // ?
  0xDF, 3, 0x21, 0x0c, 0x02, // ?
  0xF0, 6, 0x45, 0x09, 0x08, 0x08, 0x26, 0x2A,
  0xF1, 6, 0x43, 0x70, 0x72, 0x36, 0x37, 0x6F,
  0xF2, 6, 0x45, 0x09, 0x08, 0x08, 0x26, 0x2A,
  0xF3, 6, 0x43, 0x70, 0x72, 0x36, 0x37, 0x6F,
  0xED, 2, 0x1B, 0x0B, // ?
  0xAE, 1, 0x77, // ?
  0xCD, 1, 0x63, // ?
  0xE8, 1, 0x34,
  0x62, 12, 0x18, 0x0D, 0x71, 0xED, 0x70, 0x70, // ?
            0x18, 0x0F, 0x71, 0xEF, 0x70, 0x70,
  0x63, 12, 0x18, 0x11, 0x71, 0xF1, 0x70, 0x70, // ?
            0x18, 0x13, 0x71, 0xF3, 0x70, 0x70,
  0x64, 7, 0x28, 0x29, 0xF1, 0x01, 0xF1, 0x00, 0x07, // ?
  0x66, 10, 0x3C, 0x00, 0xCD, 0x67, 0x45, 0x45, 0x10, 0x00, 0x00, 0x00, // ?
  0x67, 10, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x01, 0x54, 0x10, 0x32, 0x98, // ?
  0x74, 7, 0x10, 0x85, 0x80, 0x00, 0x00, 0x4E, 0x00, // ?
  0x98, 2, 0x3e, 0x07, // ?
  0x35, 0,
  ILI9XXX_SLPOUT  , 0x80,                // Exit Sleep
  ILI9XXX_DISPON  , 0x80,                // Display on
  0x00                  // End of list
};

static const uint8_t PROGMEM INITCMD_GC9D01N[] = {
  // Enable Inter_command
  0xFE, 0,          // Inter Register Enable 1 (FEh)
  0xEF, 0,          // Inter Register Enable 2 (EFh)
  // Inter_command is now enabled
  0x80, 1, 0xFF,
  0x81, 1, 0xFF,
  0x82, 1, 0xFF,
  0x83, 1, 0xFF,
  0x84, 1, 0xFF,
  0x85, 1, 0xFF,
  0x86, 1, 0xFF,
  0x87, 1, 0xFF,
  0x88, 1, 0xFF,
  0x89, 1, 0xFF,
  0x8A, 1, 0xFF,
  0x8B, 1, 0xFF,
  0x8C, 1, 0xFF,
  0x8D, 1, 0xFF,
  0x8E, 1, 0xFF,
  0x8F, 1, 0xFF,
  0x3A, 1, 0x05,    // COLMOD: Pixel Format Set (3Ah) MCU interface, 16 bits / pixel
  0xEC, 1, 0x01,    // Inversion (ECh) DINV=1+2H1V column for Dual Gate (BFh=0)
                    // According to datasheet Inversion (ECh) value 0x01 isn't valid, but Lilygo uses it everywhere
  0x74, 7, 0x02, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x98, 1, 0x3e,
  0x99, 1, 0x3e,
  0xB5, 2, 0x0D, 0x0D,    // Blanking Porch Control (B5h) VFP=14 VBP=14 HBP=Off
  0x60, 4, 0x38, 0x0F, 0x79, 0x67,
  0x61, 4, 0x38, 0x11, 0x79, 0x67,
  0x64, 6, 0x38, 0x17, 0x71, 0x5F, 0x79, 0x67,
  0x65, 6, 0x38, 0x13, 0x71, 0x5B, 0x79, 0x67,
  0x6A, 2, 0x00, 0x00,
  0x6C, 7, 0x22, 0x02, 0x22, 0x02, 0x22, 0x22, 0x50,
  0x6E, 32, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x0F, 0x0F,
            0x0D, 0x0D, 0x0B, 0x0B, 0x09, 0x09, 0x00, 0x00,
            0x00, 0x00, 0x0A, 0x0A, 0x0C, 0x0C, 0x0E, 0x0E,
            0x10, 0x10, 0x00, 0x00, 0x02, 0x02, 0x04, 0x04,
  0xBF, 1, 0x01,    // Dual-Single gate select (BFh) 01h = dual gate mode
  0xF9, 1, 0x40,
  0x9B, 5, 0x3B, 0x93, 0x33, 0x7F, 0x00,
  0x7E, 1, 0x30,
  0x70, 6, 0x0D, 0x02, 0x08, 0x0D, 0x02, 0x08,
  0x71, 3, 0x0D, 0x02, 0x08,
  0x91, 2, 0x0E, 0x09,
  // Set VREG1A, VREG1B, VREG2A, VREG2B voltage
  // According to datasheet set either 0xC3/0xC4 or 0xC9 only, but Lilygo sets both of them
  0xC3, 5, 0x19, 0xC4, 0x19, 0xC9, 0x3C,
  0xF0, 6, 0x53, 0x15, 0x0A, 0x04, 0x00, 0x3E,    // SET_GAMMA1 (F0h)
  0xF1, 6, 0x56, 0xA8, 0x7F, 0x33, 0x34, 0x5F,    // SET_GAMMA2 (F1h)
  0xF2, 6, 0x53, 0x15, 0x0A, 0x04, 0x00, 0x3A,    // SET_GAMMA3 (F2h)
  0xF3, 6, 0x52, 0xA4, 0x7F, 0x33, 0x34, 0xDF,    // SET_GAMMA4 (F3h)
  ILI9XXX_SLPOUT, 0,      // Sleep Out Mode (11h)
  ILI9XXX_DELAY(10),
  ILI9XXX_DISPON, 0,      // Display ON (29h)
  ILI9XXX_DELAY(20),
  0x00                    // End of list
};

static const uint8_t PROGMEM INITCMD_ST7735[] = {
    ILI9XXX_SWRESET, 0,         // Soft reset, then delay 10ms
    ILI9XXX_DELAY(10),
    ILI9XXX_SLPOUT  , 0,                // Exit Sleep, delay
    ILI9XXX_DELAY(10),
    ILI9XXX_PIXFMT  , 1, 0x05,
    ILI9XXX_FRMCTR1, 3, //  4: Frame rate control, 3 args + delay:
    0x01, 0x2C, 0x2D,             //     Rate = fosc/(1x2+40) * (LINE+2C+2D)
    ILI9XXX_FRMCTR2, 3,              //  4: Framerate ctrl - idle mode, 3 args:
    0x01, 0x2C, 0x2D,             //     Rate = fosc/(1x2+40) * (LINE+2C+2D)
    ILI9XXX_FRMCTR3, 6,              //  5: Framerate - partial mode, 6 args:
    0x01, 0x2C, 0x2D,             //     Dot inversion mode
    0x01, 0x2C, 0x2D,             //     Line inversion mode

    ILI9XXX_INVCTR, 1,              //  7: Display inversion control, 1 arg:
    0x7,                          //     Line inversion
    ILI9XXX_PWCTR1,  3,              //  7: Power control, 3 args, no delay:
    0xA2,
    0x02,                         //     -4.6V
    0x84,                         //     AUTO mode
    ILI9XXX_PWCTR2,  1,              //  8: Power control, 1 arg, no delay:
    0xC5,                         //     VGH25=2.4C VGSEL=-10 VGH=3 * AVDD
    ILI9XXX_PWCTR3,  2,              //  9: Power control, 2 args, no delay:
    0x0A,                         //     Opamp current small
    0x00,                         //     Boost frequency
    ILI9XXX_PWCTR4,  2,              // 10: Power control, 2 args, no delay:
    0x8A,                         //     BCLK/2,
    0x2A,                         //     opamp current small & medium low
    ILI9XXX_PWCTR5,  2,              // 11: Power control, 2 args, no delay:
    0x8A, 0xEE,

    ILI9XXX_VMCTR1, 1, // 11: Power control, 2 args + delay:
    0x0E,
    ILI9XXX_GMCTRP1, 16,              // 13: Gamma Adjustments (pos. polarity), 16 args + delay:
    0x02, 0x1c, 0x07, 0x12,       //     (Not entirely necessary, but provides
    0x37, 0x32, 0x29, 0x2d,       //      accurate colors)
    0x29, 0x25, 0x2B, 0x39,
    0x00, 0x01, 0x03, 0x10,
    ILI9XXX_GMCTRN1, 16, // 14: Gamma Adjustments (neg. polarity), 16 args + delay:
    0x03, 0x1d, 0x07, 0x06,       //     (Not entirely necessary, but provides
    0x2E, 0x2C, 0x29, 0x2D,       //      accurate colors)
    0x2E, 0x2E, 0x37, 0x3F,
    0x00, 0x00, 0x02, 0x10,
    ILI9XXX_MADCTL  , 1, 0x00,             // Memory Access Control, BGR
    ILI9XXX_NORON  , 0,
    ILI9XXX_DELAY(10),
    ILI9XXX_DISPON  , 0,                // Display on
    ILI9XXX_DELAY(10),
    00,   // endo of list
};

// clang-format on
}  // namespace ili9xxx
}  // namespace esphome
