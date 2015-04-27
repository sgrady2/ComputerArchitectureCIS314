#include <stdio.h>



unsigned replace_byte (unsigned x, int i, unsigned char b)
{
	/*

	 */
	
	x = x & ~((0xFF) << (i << 3));
	/*First im using the AND operator with the original string (0x1234567 and 0xFF as a mask with a bitewise left shift
	  shift using the value computed by i << 3. In the case where i = 2, 2<<3 = 16 because 2^1 << 3 = 2^4 = 16
	  so then ~(255<<16) = 0xFF0001 & 0x12345678 = '0x12005678' which removes the 2nd index from our original value x
	  This is because bitwise left shifting by 16 essentially moves the zeroes to the 2nd bit position where 

	  The ~ operator essentially makes a value for us to use the AND bitwise operation with which leaves 1's in the least significant byte 
	  or where we consider our i=0 starting location
	*/
	x = x|(b << (i << 3));
	return x;
	/*
	Next I used the OR bitwise operation to replace the i-th(where i=2) value of the unsigned integer 0x12005678
	So the result is 0x12005678& when i=2 because again I did a bitwise left shift of 3 so it moves to the {3,2,1,0} 2 position
	where 2<<3= 16 and b<<16 moves the char b 2 positions to the left
	*/
}
int main()
{
	printf("Original %x\n", 0x12345678);
	printf("%x\n",replace_byte(0x12345678, 0, 0xAB));
	printf("%x\n",replace_byte(0x12345678, 1, 0xAB));
	printf("%x\n",replace_byte(0x12345678, 2, 0xAB));
	printf("%x\n",replace_byte(0x12345678, 3, 0xAB));
}
