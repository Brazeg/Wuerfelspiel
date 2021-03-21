/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC12F1840
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Taster aliases
#define Taster_TRIS                 TRISAbits.TRISA0
#define Taster_LAT                  LATAbits.LATA0
#define Taster_PORT                 PORTAbits.RA0
#define Taster_WPU                  WPUAbits.WPUA0
#define Taster_ANS                  ANSELAbits.ANSA0
#define Taster_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define Taster_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define Taster_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define Taster_GetValue()           PORTAbits.RA0
#define Taster_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define Taster_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define Taster_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define Taster_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define Taster_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define Taster_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED7 aliases
#define LED7_TRIS                 TRISAbits.TRISA1
#define LED7_LAT                  LATAbits.LATA1
#define LED7_PORT                 PORTAbits.RA1
#define LED7_WPU                  WPUAbits.WPUA1
#define LED7_ANS                  ANSELAbits.ANSA1
#define LED7_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED7_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED7_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED7_GetValue()           PORTAbits.RA1
#define LED7_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED7_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED7_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED7_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED7_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED7_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED3_4 aliases
#define LED3_4_TRIS                 TRISAbits.TRISA2
#define LED3_4_LAT                  LATAbits.LATA2
#define LED3_4_PORT                 PORTAbits.RA2
#define LED3_4_WPU                  WPUAbits.WPUA2
#define LED3_4_ANS                  ANSELAbits.ANSA2
#define LED3_4_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED3_4_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED3_4_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED3_4_GetValue()           PORTAbits.RA2
#define LED3_4_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED3_4_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED3_4_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED3_4_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED3_4_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED3_4_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED2_5 aliases
#define LED2_5_TRIS                 TRISAbits.TRISA4
#define LED2_5_LAT                  LATAbits.LATA4
#define LED2_5_PORT                 PORTAbits.RA4
#define LED2_5_WPU                  WPUAbits.WPUA4
#define LED2_5_ANS                  ANSELAbits.ANSA4
#define LED2_5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED2_5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED2_5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED2_5_GetValue()           PORTAbits.RA4
#define LED2_5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED2_5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED2_5_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED2_5_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED2_5_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED2_5_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED1_6 aliases
#define LED1_6_TRIS                 TRISAbits.TRISA5
#define LED1_6_LAT                  LATAbits.LATA5
#define LED1_6_PORT                 PORTAbits.RA5
#define LED1_6_WPU                  WPUAbits.WPUA5
#define LED1_6_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED1_6_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED1_6_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED1_6_GetValue()           PORTAbits.RA5
#define LED1_6_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED1_6_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED1_6_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED1_6_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF0 pin functionality
 * @Example
    IOCAF0_ISR();
 */
void IOCAF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_InterruptHandler);

*/
extern void (*IOCAF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);

*/
void IOCAF0_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/