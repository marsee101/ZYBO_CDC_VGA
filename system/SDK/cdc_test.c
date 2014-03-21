/*
 * cdc_test.c
 *
 *  Created on: 2014/03/05
 *      Author: Masaaki
 */

#include "xparameters.h"

//#define HORIZONTAL_PIXELS	640		// VGA
//#define VERTICAL_LINES		480		// VGA
//#define HORIZONTAL_PIXELS	800		// SVGA
//#define VERTICAL_LINES		600		// SVGA
//#define HORIZONTAL_PIXELS	1024	// XGA
//#define VERTICAL_LINES		768		// XGA
//#define HORIZONTAL_PIXELS	1280	// SXGA
//#define VERTICAL_LINES		1024	// SXGA
#define HORIZONTAL_PIXELS	1920	// HD
#define VERTICAL_LINES		1080	// HD

#define MEMORY_LIMIT ((HORIZONTAL_PIXELS/8)*(VERTICAL_LINES/8))

int main()
{
    int *cdc_addr = (int *)XPAR_CDC_VGA_AXI_SLAVE_0_S_AXI_RNG00_BASEADDR;
    int i, charval;

    for (i=0; i<MEMORY_LIMIT; i++)
    	*(volatile unsigned int *)(cdc_addr++) = 0;

    cdc_addr = (int *)XPAR_CDC_VGA_AXI_SLAVE_0_S_AXI_RNG00_BASEADDR;

    for (i=0, charval=0xe041; i<MEMORY_LIMIT; i++){
    //for (i=0, charval=0xffc1; i<MEMORY_LIMIT; i++){
        *(volatile unsigned int *)(cdc_addr++) = charval++;
    }

    return 0;
}
