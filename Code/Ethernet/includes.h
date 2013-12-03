#include <avr/io.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include <avr/eeprom.h>
#include <avr/wdt.h>

// struct.h MUST be include first
#include "struct.h"
#include "enc28j60.h"
#include "ethernet.h"
#include "ip.h"
#include "tcp.h"
#include "arp.h"
#include "http.h"
#include "lcd.h"
#include "menu.h"
#include "adc.h"

// define I/O interface

#define LED_PIN1_DDR			DDC7
#define LED_PIN1				PC7

#define LED_PIN2_DDR			DDC6
#define LED_PIN2				PC6


#define LED_PIN3_DDR			DDC5
#define LED_PIN3				PC5


#define LED_PIN4_DDR			DDC4
#define LED_PIN4				PC4


#define LED_PIN5_DDR			DDC3
#define LED_PIN5				PC3


#define LED_PIN6_DDR			DDC2
#define LED_PIN6				PC2


#define LED_PORT				PORTC
#define LED_DDR					DDRC

#define LOW(uint) (uint&0xFF)
#define HIGH(uint) ((uint>>8)&0xFF)

#define MAX_RXTX_BUFFER		1518

// Added in V1.1
// *** Note ****
// uncomment below to remove bootloader support
//#define REMOVE_BOOTLOADER_SUPPORT 1
// End added in V1.1

// global variables
extern MAC_ADDR avr_mac;
extern IP_ADDR avr_ip;

//extern MAC_ADDR client_mac;
//extern IP_ADDR client_ip;

extern MAC_ADDR server_mac;
extern IP_ADDR server_ip;

extern BYTE generic_buf[];
extern BYTE ee_avr_ip[];
extern BYTE ee_server_ip[];
//********************************************************************************************
//
// Prototype function from main.c
//
//********************************************************************************************
extern void initial_system( void );

