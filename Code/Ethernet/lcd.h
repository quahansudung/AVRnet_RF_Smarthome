#define LCD_DATA_PORT		PORTD
#define LCD_DATA_DDR		DDRD
#define LCD_D7				PD7
#define LCD_D6				PD6
#define LCD_D5				PD5
#define LCD_D4				PD4
#define LCD_CONTROL_PORT	PORTB
#define	LCD_CONTROL_DDR		DDRB
#define LCD_RS_PIN			PB0
#define LCD_RW_PIN			PB1
#define LCD_EN_PIN			PB2

#define SET_FUNCTION	0x28	// 8bits, 2lines
#define DISPLAY_ON		0x0C
#define DISPLAY_CLR		0x01
#define ENTRY_MODE		0x06	// Entry = increase
#define RETURN_HOME		0x02
#define CURSOR_BACK		0x10
#define SET_DDRAM		0x80
#define WRITE_DATA		1
#define WRITE_COMMAND	0
#define LCD_EN			0x80
#define LCD_LINE_TWO	0x40
//********************************************************************************************
//
// Prototype function
//
//********************************************************************************************
extern void lcd_init(void);
extern void lcd_gotoxy(unsigned char x,unsigned char y);
extern void lcd_putc(unsigned char c);
extern void lcd_print( unsigned char * ptr );
extern void lcd_print_p( PGM_P ptr );
