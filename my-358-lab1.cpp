#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main ()
{
	int total = 1000;
	int lamda = 75;
	float rand_value[1000]={0};
	float mean =0;
	float mean_value =0;
	float variance =0;
	float sum=0;
	
/// Initializing for loop for generating 1000 random numbers and calculating mean
	
	for (int i=0; i<1000; i++){
	
	float U = ((float)rand() / RAND_MAX);
	
	rand_value[i] = (-1) * log (1-U) / lamda;
	
	printf("Random values : %f\n", rand_value[i]);
	
	mean +=  rand_value[i];

}
/// calculating and printing mean
		mean_value = mean/total;
		printf("Mean : %f\n", mean_value);
		
/// for loop for calculating variance 
		for (int i=0; i<1000; i++){
			
			variance += (rand_value[i] - mean_value) * (rand_value[i]- mean_value);
		}
		
		sum = variance / total;
		printf (" Variance : %f\n", sum);
}
