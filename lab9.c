#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
void sumarray(int *arr1, int *arr2, int *dest){
	int i;
	int sum1=0, sum2=0;
	int limit = SIZE - 2 - 1;
	for (i=0;i<limit;i+=2){
	sum1 = sum + arr[i+1]+ arr2[i+1];
	sum2 = sum + arr[i+2]+ arr2[i+2]
}
	for (;i<SIZE-1;i++){
		sum1+=arr1[i]+arr2[i]+
	}
	*dest = sum1+sum2;
	//changed from
	//*dest = *dest+...
	//to using sum so we dont have to go to memory every time in the loop becasue of the pointer
}
int main(){
	int *a = (int*)malloc(sizeof(int)*SIZE);
	int *b = (int*)malloc(sizeof(int)*SIZE);
	int result = 0;
	int i;
	for (i=0; i<size;i++){
	a[i] = i+1;
	b[i] = i+2;

	}
	sumarray(a,b, &result);
	printf("Sum of Arrays: %d ", result);
}