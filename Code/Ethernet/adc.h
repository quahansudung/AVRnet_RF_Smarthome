#define ASCII_DEGREE		0xdf
#define ADC_TEMP_CHANNEL	1
#define ADC_TEMP_BUFFER		8

extern BYTE adc_read_temp ( void );
extern WORD adc_read ( BYTE channel );
extern void adc_init ( void );
