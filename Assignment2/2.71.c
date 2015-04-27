/* Declaration of data type where 4 bytes are packed
   into an unsigned */
#include <stdio.h>


typedef unsigned packed_t;


/* Extract byte from word.  Return as signed integer */
//int xbyte(packed_t word, int bytenum);
//That is, the function will extract the designated byte and sign extend it to be a 32-bit int.
//Your predecessor (who was fired for incompetence) wrote the following code:
/* Failed attempt at xbyte */


int xbyte(packed_t word, int bytenum)
{
    return (word >> (bytenum << 3)) & 0xFF;
}


//A). This code is wrong because it returns the unsigned value where it should return a negative signed integer if there is a 1 in the 
// most significant digits place. So 0x000000FF should return the value -1 for the 0th position because 1111 1111 = -1
// However it returns the value 255 which is 2^8-1 which is an unsigned representation of the value
//This algorithm will always return a positive value because im dealing with 32 bit unsigned values so 0xFF 
//in memory looks like 00000000 00000000 00000000 11111111 which will be read as a positive integer value
//So I need to do some bitwise shifts to move my 1 to the most significant digit when representing a two's compliment
//signed integer value


// The correct code should look like this

int xbyte_correct(packed_t word, int bytenum)
{
    signed int signed_shift = word << ((3-bytenum) << 3);
    return (signed_shift >> 24);
}
//The above code works because i declared signed_extract as an integer after doing a logical left shift to account for the
//32-bit integer (the max shift is (3-0)<<3 which is 24 and correct for a 32 bit number. Then I use an arithmatic right shift to return a signed integer of the
//desired byte with a 1 being in the most significant digits position
//
int main(){
	unsigned x = 0x000000FF;
	printf("Output %d\n",xbyte(x, 0));
	printf("Output %d\n",xbyte_correct(x, 0));
}

