/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC12F1840
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "stdlib.h"

/*
                         Main application
 */

void Ausgabe (int y){
        
        LED1_6_SetLow();
        LED2_5_SetLow();
        LED3_4_SetLow();
        LED7_SetLow();
        
        switch(y){
            case 1: 
//                LED1_6_SetLow();
//                LED2_5_SetLow();
//                LED3_4_SetLow();
                LED7_SetHigh();
                break;
            case 2: 
//                LED1_6_SetLow();
                LED2_5_SetHigh();
//                LED3_4_SetLow();
//                LED7_SetLow();
                break;
            case 3:
//                LED1_6_SetLow();
                LED2_5_SetHigh();
//                LED3_4_SetLow();
                LED7_SetHigh();
                break; 
            case 4:
                LED1_6_SetHigh();
//                LED2_5_SetLow();
                LED3_4_SetHigh();
//                LED7_SetLow();
                break;
                
            case 5: 
                LED1_6_SetHigh();
//                LED2_5_SetLow();
                LED3_4_SetHigh();
                LED7_SetHigh();
                break;          
            case 6: 
                LED1_6_SetHigh();
                LED2_5_SetHigh();
                LED3_4_SetHigh();
//                LED7_SetLow();
                break;
        }
        return;
    }
    
    int Wurfzahl (int y){
        int zufallszahl;
        srand(y);
        zufallszahl = rand() % 6 + 1;
        
        return zufallszahl;
    }

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();
    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();
    
    uint8_t x = 6;
    
    int counter, wurf = 0;
    

    while (1)
    {
        if (RA0 != 0 && wurf != 1){
            x = Wurfzahl(wurf);
            counter = 0;
            Ausgabe(x);
        }
        
        if (counter >= 15000){
            
            LED1_6_SetLow();
            LED2_5_SetLow();
            LED3_4_SetLow();
            LED7_SetLow();
            
            SLEEP();
            
            counter = 0;
            wurf = 0;
            
            Ausgabe(x);
            
            __delay_ms(800);
        }
        else{
            __delay_ms(1);
            counter = counter + 1;
            wurf = wurf + 1;        
        }
   
    } 
    return;
}
/**
 End of File
*/