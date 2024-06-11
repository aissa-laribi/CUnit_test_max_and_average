#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <float.h>
#include "maximum.h"
#include "testMaximum.h"
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>



void maximum_test_empty(void){
	double array[0];
	CU_ASSERT_DOUBLE_EQUAL(maximum(array, 0), 0.00, 0.001);
}

void maximum_test_one_pos_element(void){
	double array[1] = {2.345678};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array,1), 2.35, 0.001);
}

void maximum_test_one_neg_element(void){
	double array[1] = {-2.345678};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array,1), -2.35, 0.001);
}
void maximum_test_one_zero_element(void){
	double array[1] = {0.00};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array,1), 0, 0.001);
}

void maximum_test_even_size_positives(void){
	double array[6] = {2.10, 6.167, 3.321, 7.90, 19.9891, 2.5};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array, 6), 19.99, 0.001);
}

void maximum_test_even_size_negatives(void){
	double array[6] = {-2.10, -6.167, -3.321, -7.90, -19.9891, -2.5};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array, 6), -2.1, 0.001);
}

void maximum_test_even_size_negatives_and_positives(void){
	double array[6] = {2.10, -6.167, 3.321, -7.90, 19.9891, -2.5};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array, 6), 19.99, 0.001);
}

void maximum_test_even_size_duplicates(void){
	double array[6] = {2.10, 2.10, 2.10, 2.10, 2.10, 2.5};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array, 6), 2.5, 0.001);
}

void maximum_test_odd_size_positives(void){
	double array[7] = {2.10, 6.167, 3.321, 7.90, 19.9891, 2.5, 31.229};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array, 7), 31.23, 0.001);
}

void maximum_test_odd_size_negatives(void){
	double array[7] = {-2.10, -6.167, -3.321, -7.90, -19.9891, -2.5, -1.47654};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array, 7), -1.48, 0.001);
}

void maximum_test_odd_size_negatives_and_positives(void){
	double array[7] = {2.10, -6.167, 3.321, -7.90, 19.9891, -2.5, 54321.9876543};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array, 7), 54321.99, 0.001);
}

void maximum_test_odd_size_duplicates(void){
	double array[7] = {2.10, 2.10, 2.10, 2.10, 2.10, 2.10, 2.5};
	CU_ASSERT_DOUBLE_EQUAL(maximum(array, 7), 2.5, 0.001);
}


void testMaximum(){
	CU_initialize_registry();
	CU_pSuite suite  = CU_add_suite("maximum_suite", 0,0);
	CU_add_test(suite, "maximum_test_empty" , maximum_test_empty);
	CU_add_test(suite, "maximum_test_one_pos_element", maximum_test_one_pos_element);
	CU_add_test(suite, "maximum_test_one_neg_element", maximum_test_one_neg_element);
	CU_add_test(suite, "maximum_test_one_zero_element", maximum_test_one_zero_element);
	CU_add_test(suite, "maximum_test_even_size_positives" , maximum_test_even_size_positives);
	CU_add_test(suite, "maximum_test_even_size_negatives" , maximum_test_even_size_negatives);
	CU_add_test(suite, "maximum_test_even_size_negatives_and_positives", maximum_test_even_size_negatives_and_positives);
	CU_add_test(suite, "maximum_test_even_size_duplicates", maximum_test_even_size_duplicates);
	CU_add_test(suite, "maximum_test_odd_size_positives" , maximum_test_odd_size_positives);
	CU_add_test(suite, "maximum_test_odd_size_negatives" , maximum_test_odd_size_negatives);
	CU_add_test(suite, "maximum_test_odd_size_negatives_and_positives", maximum_test_odd_size_negatives_and_positives);
	CU_add_test(suite, "maximum_test_odd_size_duplicates", maximum_test_odd_size_duplicates);

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
}
/*
    CU_pSuite suite = CU_add_suite("factorial_suite", 0, 0);

	CU_add_test(suite, "factorial_test", factorial_testcase1);

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();

 */
