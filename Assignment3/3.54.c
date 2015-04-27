//Sean Grady
//CIS 314 Wills
//Assignment 3
//3.54.c

//movl 12(%ebp), %edx (movl Src, Dest== Dest = Src) %edx = 12(%ebp)
//the first line calls for 12(%ebp) or y to be stored in the register edx

//subl 16(%ebp), %edx (subl Src,Dest == Dest = Dest - Src) %edx = %edx - 16(%ebp) 
//next subtract the value at register %edx(which is y) by z (16(%ebp))

//movl %edx, %eax (movl Src, Dest== Dest = Src) %eax = %edx
//move the value at register edx to eax, or again assign register %eax to our %edx value
//this effectively copys y-z to be used again see above where there are 2 instances of y-z

//sall $31, %eax  (sall Src,Dest == Dest = Dest<<Src )  %eax = %eax<<31
//now with our value y-z at eax, do a bitwise left shift by a constant number 31

//sarl $31, %eax (sarl Src,Dest == Dest = Dest>>Src Arithmatically shifting)
//now take what we just shifted left and do an arithmatic right shift storing this at %eax again

//imull 8(%ebd), %edx (imull Src, Dest == Dest =Dest*Src)
//multiple the value x by the value stored in %edx which is y-z (see above)

//xorl %edx, %eax (xorl src dest == Dest=Dest^Src XOR bitwise op)
//now use a bitwise exclusive or between the two registers eax and edx 

#include <stdio.h>


int decode2(int x, int y, int x)
{
	//%eax is value of the register with y-z on the left side
	//%edx is the value of the register with y-z on the right hand side
	return (( (y-z)<<31) >>31)^(x*(y-z))
}


