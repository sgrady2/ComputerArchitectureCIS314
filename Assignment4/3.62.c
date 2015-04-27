#include <stdio.h>
typedef Marray_t;
#define M 13;

//making the optimzation of fixed array access for the square MxM matrix with rows, 1-i and columns 1-j
//lab notes A+i*(C*k)+j*k=A+(i*c+j)*k
void transpose(Marray_t A) {
    int i,j;
    for (i = 0; i < M; i++){
    	int *row = &A[i][0];
    	int *col = &A[0][i];
    	int *a = &A[i][j];
        for (j = 0; j < i; j++){
        	
        	*row++;//increment row pointer value by 4 bytes or 1 space in memory
        	*cow++;//increment col pointer value by 4 bytes as well

        	int swap = M+(i*(*col)+j)*k;//the value of A[i][j]
        	A[i][j] = A[j][i];
        	A[j][i] = swap;
        }}




        
