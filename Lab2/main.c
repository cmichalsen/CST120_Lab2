#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	// PART 1
		DDRB = (1 << DDB5);	//	OUTPUT
		
		while(1)
		{
			PORTB = (1 << DDB5);	//	HIGH PIN 13
			_delay_ms(500);
			PORTB = 0;	// ALL OFF
			_delay_ms(500);
		}
	
	// PART 2
		//DDRB = 0b00110000;	//	SETS BITS 4,5 TO OUPUT
		//
		//while(1)
		//{
			//PORTB = 0b00110000;	//	SETS BITS 4,5 TO HIGH
			//_delay_ms(500);
			//PORTB = 0b00000000;	// ALL OFF
			//_delay_ms(500);
		//}
	
	// PART 3
		//DDRB = 0b00110000;	//	SETS BITS 4,5 TO OUPUT
		//
		//while(1)
		//{
			//PORTB = 0b00110000;	//	SETS BITS 4,5 TO HIGH
			//_delay_ms(500);
			//PORTB = 0b00000000;	// ALL OFF
			//_delay_ms(500);
			//PORTB = 0b00010000;	//	SET BIT 4 TO HIGH
			//_delay_ms(500);
			//PORTB = 0b00000000;	// ALL OFF
			//_delay_ms(500);			
		//}
	
}