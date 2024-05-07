#include "to_bin.h"

#include <stdlib.h>
#include <stdint.h>
#include <string.h>



char* to_binary_string_byte(void* byte)
{
	const uint8_t mask = 1;
	uint8_t * temp = (uint8_t*) byte;
	
	char * bits = malloc(9 * sizeof(char));
	bits[8] = '\0';

	for (int i = 0; i < 8; i++) 
        bits[7-i] = ((*temp) & (mask << i)) == 0 ? '0' : '1';
	
	return bits;
}


char* to_binary_string(void* data, unsigned int length, bool sep, bool rev)
{
	const unsigned int out_size = (8 * length + 1) * sizeof(char) + (sep ? length : 0);
	
	char * bits = malloc(out_size);
	bits[8 * length] = '\0';

	for (int i = 0; i < length; i++) { 
        char * str = to_binary_string_byte(data + i);
		if (!rev) {
			if (sep) {
				memcpy(&(bits[9 * i]), str, strlen(str));			
				bits[9 * i + 8] = '|';
			} else
				memcpy(&(bits[8 * i]), str, strlen(str));
		} else {
			if (sep) {
				memcpy(&(bits[out_size - 9 * (i+1) - 1]), str, strlen(str));			
				bits[9 * i + 8] = '|';
			} else {
				memcpy(&(bits[out_size - 8 * (i+1) - 1]), str, strlen(str));
			}
		}
		free(str);
	}
	
	return bits;
}

char* int_to_bin(int n)
{ return to_binary_string(&n, sizeof(int), 0, 1); }

char* u_int_to_bin(unsigned int n)
{ return to_binary_string(&n, sizeof(unsigned int), 0, 1); }

char* long_to_bin(long n)
{ return to_binary_string(&n, sizeof(long), 0, 1); }

char* u_long_to_bin(unsigned long n)
{ return to_binary_string(&n, sizeof(unsigned long), 0, 1);}

char* long_long_to_bin(long long n)
{ return to_binary_string(&n, sizeof(long long), 0, 1);} 

char* u_long_long_to_bin(unsigned long long n)
{ return to_binary_string(&n, sizeof(unsigned long long), 0, 1);} 


char* float_to_bin(float f)
{ return to_binary_string(&f, sizeof(float), 0, 1); }

char* double_to_bin(double d)
{ return to_binary_string(&d, sizeof(double), 0, 1); }
