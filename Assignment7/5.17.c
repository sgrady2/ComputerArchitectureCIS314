#include <time.h>
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
double cpu_time_used;


void inner4(vec_ptr u, vec_ptr v, data_t *dest){
	long int i;
	int length = vec_length(u);
	data_t *udata = get_vec_start(u);
	data_t *vdata = get_vec_start(v);
	//using 4 way loop unrolling with 4 accumulators
	
	data_t sum1 = (data_t) 0;
	data_t sum2 = (data_t) 0;
	data_t sum3 = (data_t) 0;
	data_t sum4 = (data_t) 0;
	//critical path of the function
	for (i=0; i<length;i+=4){
		sum1 +=  udata[i] * vdata[i];
		sum2 +=  udata[i+1] * vdata[i+1];
		sum3 +=  udata[i+2] * vdata[i+2];
		sum4 +=  udata[i+3] * vdata[i+3]; 
	}
	//optimization for our assigning the value to our pointer
	*dest = sum1+sum2+sum3+sum4;
} 
int main(){
	start = clock();
	vec_ptr u = (vec_ptr) malloc (sizeof (data_t)*VECTOR_SIZE);
	vec_ptr v = (vec_ptr) malloc (sizeof (data_t)*VECTOR_SIZE);
	for (i=0;i<VECTOR_SIZE;i++){
		v[i] = (data_t)i;
		u[i] = (data_t)i;

	}
	//assigning pointer for dest parameter with adress operator
	data_t i;
	data_t *dest;
	dest = &i;
	//calling the inner4 function
	inner4(u,v,dest);
	end = clock();
	cpu_time_used = (double) 1000*(end-start)/CLOCK_PER_SEC;
	printf('ElapsedTime:%.6lf milliseconds \n', cpu_time_used);
}