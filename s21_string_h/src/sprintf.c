#include "s21_string.h"
#include <stdarg.h>
/*
1) We taking format string and parcing it to know how many variables we have to
write in destination string
	or maybe do it like in real-time
	parsing & writing format to dest, met an '%', going into switch to check what is it

	it's not that easy as i thought........
*/

int s21_sprintf(char *dest, const char *format, ...) {
  // returning num of symbols written in destination string or -1 due to error
  int to_return = 0; 
	va_list parameters; // list of parameters from (...)
	va_start(parameters, format);
	while(*format != '\0'){
		if(*format == '%') {
			format++;
			switch(*format) {
				case 'd':
				// printing our variable into dest 
				break;
				case 'c':
				break;
				// etc...
			}

		}
		format++;
	}
	
  return to_return;
}