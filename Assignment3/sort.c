//Sean Grady
//CIS 314 Wills
//Assignment 3
//sort.c

#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int main(){
	//malled is a pointer to the allocated malloc memory
	int *list;
	int x,i,j,n;
	int temp;

	printf("Enter an integer array length:  ");
	scanf("%d", &x);
	printf("You entered: %d\n", x);
	//allocate memory for the array 
	list = (int *)malloc(sizeof(int));
	printf("malloced at location: %x \n", list);
	//need to let the user know if the malloc fails
	if (list == NULL)
		printf("malloc failed\n");
	//
	printf("enter elements up to %d elements", x);
	for (i=0; i<x;i++)
		scanf("%d", &list[i]);
	//Bubble sorting this list
	for (i=0;i<x-1;i++)
	//using 2 for loops so the timing of this algorithm is O(n^2)
	//
	{
		for (j=0;j<(x-i-1);j++)
		{
			//if the elements are out of order (ascending in this case)
			//swap the elements in place and move to the next element
			//
			if (list[j] > list[j+1])
			{
				//code used for swapping if the elements are out of order
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
			//the end of each iteration will leave one elements that 'bubbled to the top' or is greater than the rest
			//and therefore does not need to be checked again for orderness
			
		}
	}
	//print each member of the list
	for (i=0;i<x;i++)
		printf("%d, ", list[i]);
	//we need to make sure we free this chunk of memory that we created in the heap space
	free(list);
	return 0;

}
