#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "maximum.h"


double average(double *array, int length) {
	int i;
	double sum = 0.0, mean = 0.0;

	printf("[ ");
	for(i = 0; i < length; i++){
		printf("%lf, ",  array[i]   );
		sum += array[i];
	}
	printf("],");
	mean = sum / length;
	mean = round(mean * 100) / 100;
	printf("%.2lf ", mean);
	return mean;
}


