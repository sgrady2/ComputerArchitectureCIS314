#include <stdio.h>
/* Return 1 when any odd bit of x equals 1; 0 otherwise.
   Assume w=32. */

int any_odd_one(unsigned x)
{

	x = x&0xAAAAAAAA;/*masking to keep only the odd bits of x because 0xAAAAAAAA is essentially 1010 1010 1010 1010 1010 1010 1010 1010 and will keep all odd bits of info*/
	//this will return a 0 if all the odd bits are zero and something else if its odd bits are one, so...
	if (x!=0)
		return 1;
	else
		return 0;

}
int main()
{
	unsigned z = 0x14;
	unsigned x = 26;
	unsigned y = 26;
	//
	printf("input:26 output:%d\n", any_odd_one(x));
	/*any_odd_one(y);*/
	printf("input:0x14 output:%d\n", any_odd_one(z));

}