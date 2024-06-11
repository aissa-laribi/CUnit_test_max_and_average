#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "maximum.h"

double maximum(double *array, int length) {
    if (length == 0) {
        printf("%lf, ", 0.00);
        return 0.00;
    } else {
        int i;
        double max = array[0];
        printf("[%lf, ", max);
        for (i = 0; i < length; i++) {
        	if (array[i] > max) {
                    max = array[i];
        	}
        }
        printf("],");
        printf("%.2lf ", max);
        max = round(max * 100) / 100;
        return max;
    }
}
