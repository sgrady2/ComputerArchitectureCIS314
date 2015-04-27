#include <stdio.h>


void bitwise(unsigned int x, unsigned int y){
	

	x = x&0xFF;/*This step-- 0x89ABCDEF&0x000000FF = 0x000000EF*/
	y = y&~0xFF;/*This step -- 0x76543210 & 0xFFFFFF00= 0x7654300*/
	unsigned int z = x|y;

	printf("After bitwise ops:0x%x\n",z);
	printf("Desired String is 0x765432EF\n");

}

int main()
{
	/*The idea is to start with x and get to z using only bitwise operations
	So first I take x with the bitwise operation AND using a hex value 0xFF that only keeps the last 2 digits of x(the last 2 digits in this case)
	Then I do the same thing for y, keeping only the digits that I want and the hex val ~0xFF
	Finally i use the bitwise OR operator to put the two numbers together for my desired string*/

	
	bitwise(0x89ABCDEF, 0x76543210);

	

}

