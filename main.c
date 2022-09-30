#define F_CPU 16000000UL
#include "avr/io.h"
#include <util/delay.h>
void init()
{
	DDRB =0x00; //Port B input
  DDRC =0xFF; //Port C Output
	PORTB=0x01;
	PORTC=0x00;
}
int main(void)
{
	PORTB=0x00;
	void init();
	while(1)
	{
			if(PINB & (1 << PINB4))
			{
				PORTC |= 0b00000001;
				_delay_ms(100);
				PORTC |= 0b00000010;
				_delay_ms(100);
				PORTC |= 0b00000100;
				_delay_ms(100);
				PORTC |= 0b00001000;
				_delay_ms(100);
				PORTC |= 0b00010000;
				_delay_ms(100);
				PORTC |= 0b00100000;
				_delay_ms(100);
				PORTC = 0x00;
				_delay_ms(100);
			}
			else
			{
				PORTC |= 0b00000001;
				_delay_ms(100);
				PORTC |= 0b00000100;
				_delay_ms(100);
				PORTC |= 0b00010000;
				_delay_ms(100);
				PORTC = 0x00;
				_delay_ms(100);
			}
	}
	return 0;
 }
