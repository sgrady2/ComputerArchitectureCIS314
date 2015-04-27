#include <time.h>
#include <stdlib.h>
#define VECTOR_SIZE 3
typedef long long data_t;
typedef data_t *vec_ptr;
data_t * get_vec_start(vec_ptr v) {
return v;
}
int vec_length(vec_ptr v) {
return VECTOR_SIZE;
}
clock_t start;
clock_t end;
clock_t CLOCK_PER_SEC;
double cpu_time_used;


void inner4(vec_ptr u, vec_ptr v, data_t *dest){
	long int i;
	int length = vec_length(u);
	data_t *udata = get_vec_start(u);
	data_t *vdata = get_vec_start(v);
	data_t sum = (data_t) 0;
	//critical path of the function
	for (i=0; i<length;i++){
		sum = sum + udata[i] * vdata[i];

	}
	//optimization for our assigning the value to our pointer
	*dest = sum;
} 
int main(){
	start = clock();
	vec_ptr u = (vec_ptr) malloc (sizeof (data_t)*VECTOR_SIZE);
	vec_ptr v = (vec_ptr) malloc (sizeof (data_t)*VECTOR_SIZE);
	//assigning vectors
	for (i=0;i<VECTOR_SIZE;i++){
		v[i] = (data_t)i;
		u[i] = (data_t)i;

	}
	//assigning pointer for dest parameter with adress operator
	data_t vector;
	data_t *dest;
	dest = &vector;
	//calling the inner4 function
	start = clock();
	inner4(u,v,dest);
	end = clock();
	cpu_time_used = (double) 1000*(end-start)/CLOCK_PER_SEC;
	printf('ElapsedTime:%.6lf milliseconds \n', cpu_time_used);
}