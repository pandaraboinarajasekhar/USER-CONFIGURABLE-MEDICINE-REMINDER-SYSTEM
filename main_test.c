#include <lpc21xx.h>
#include "delay.h"
#include "lcd_defines.h"
#include "KPM_DEFINES.h"
#include "rtc.h"
#include "interr1.h"
#include "menu.h"
#include "medicine_.h"
 
/* -------------------- Switch Definitions -------------------- */
#define SW1 (1<<30)
#define SW2 (1<<31)
 
/* -------------------- Day Definitions -------------------- */
#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
 
#define LED (1<<24)
 
/* -------------------- Global Variables -------------------- */
s32 hour, min, sec;
s32 date, month, year;
s32 day, i;
u32 dly=0; 
volatile u8 f1 = 0;
volatile u8 f2 = 0;
 
//s32 buzz = 0;
void buzz(void)
{
  IOSET0=1<<5;
  }  
 
/* ============================================================
                       MAIN FUNCTION
============================================================ */
int main()
{
    /* Configure buzzer pin as output */
    IODIR0 |=1<<5;
 
    /* Initialize LCD */
    InitLCD();
 
    /* Initialize Keypad */
    InitKPM();
 
RTC_Init();
 
    /* Set Initial RTC Time (HH,MM,SS) */
    SetRTCTimeInfo(11, 42, 45);
 
    /* Set Initial RTC Date (DD,MM,YYYY) */
    SetRTCDateInfo(10, 3, 2026);
 
    /* Set Day (SUN–SAT) */
    SetRTCDay(2);
 
    /* Enable External Interrupts */
    Eint0();   // Switch 1
    Eint1();   // Switch 2
 
CmdLCD(0x80);
    StrLCD("    Medicine   ");
 
    CmdLCD(0xC0);
    StrLCD("Reminder System");
 
    delay_s(2);
CmdLCD(0x01);
    /* -------------------- Main Loop -------------------- */
    while(1)
    {
        
 
        /* ----------- Enter Menu if SW1 pressed ----------- */
        if(f1 == 1)
        {
            menu();
            f1 = 0;
        }
 
        /* ----------- Stop Buzzer if SW2 pressed ----------- */
        else if(f2 == 1)
        {
            IOCLR0 = (1<<5);
            f2 = 0;
        }
 
        else
        {
            /* ----------- Display Time ----------- */
            GetRTCTimeInfo(&hour, &min, &sec);
            DisplayRTCTime(hour, min, sec);
 
            /* ----------- Display Date ----------- */
            GetRTCDateInfo(&date, &month, &year);
            DisplayRTCDate(date, month, year);
 
            /* ----------- Display Day ----------- */
            GetRTCDay(&day);
            DisplayRTCDay(day);
 
            /* ----------- Check Medicine Schedule ----------- */
             //checkmedicene();
 
            if(checkmedicene()==1)
            {
			  
			   buzz();
                CmdLCD(0x01);
 
                CmdLCD(0x80);
			//	IOSET0 = (1<<4);
                StrLCD("TAKE MEDICINE");
 			    //IOSET0 = (1<<4);
                CmdLCD(0xC0);
                StrLCD("PRESS SW2");
 
                //IOCLR0 = (1<<4);
 
                /* Wait for0 user acknowledgement */
                while(1)
                {  dly++;
				    delay_s(1);
                    if(f2 == 1)
                    {
                        IOCLR0 = (1<<5);
                        f2 = 0;
						  CmdLCD(0x01);
                CmdLCD(0x80);
                StrLCD("MEDICINE");
 

                CmdLCD(0xC0);
                StrLCD("TAKEN");
 
                delay_s(1);
 
                CmdLCD(0x01);
                CmdLCD(0x80);
                StrLCD("HAVE A NICE");
 
                CmdLCD(0xC0);
                StrLCD("DAY");
 
                delay_s(1);
                CmdLCD(0x01);							  
                        break;
                    }
					 else if(dly==60)
					 {
					IOCLR0=1<<5;
					CmdLCD(0x01);
					StrLCD("med not taken");
					delay_ms(500);
					CmdLCD(0x01);
					break;
					}
                }
            }
        }
    }
}
