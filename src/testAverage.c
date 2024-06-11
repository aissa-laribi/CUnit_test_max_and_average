#include <string.h>
#include <stdlib.h>
#include <float.h>
#include "average.h"
#include "testAverage.h"
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>


void average_test_even_size_positives(void){
	double array[6] = {2.10, 6.167, 3.321, 7.90, 19.9891, 2.5};
	CU_ASSERT_DOUBLE_EQUAL(average(array, 6), 7.00, 0.001);
}

void average_test_even_size_negatives(void){
	double array[6] = {-2.10, -6.167, -3.321, -7.90, -19.9891, -2.5};
	CU_ASSERT_DOUBLE_EQUAL(average(array, 6), -7.00, 0.001);
}

void average_test_even_size_negatives_and_positives(void){
	double array[6] = {2.10, -6.167, 3.321, -7.90, 19.9891, -2.5};
	CU_ASSERT_DOUBLE_EQUAL(average(array, 6), 1.47, 0.001);
}

void average_test_even_size_duplicates(void){
	double array[6] = {2.10, 2.10, 2.10, 2.10, 2.10, 2.5};
	CU_ASSERT_DOUBLE_EQUAL(average(array, 6), 2.17, 0.001);
}

void average_test_even_size_empty(void){
	double array[0];
	double result = average(array, 0);
	CU_ASSERT(isnan(result));
}

void average_test_even_size_one_pos_element(void){
	double array[1] = {2.345678};
	CU_ASSERT_DOUBLE_EQUAL(average(array,1), 2.35, 0.001);
}

void average_test_even_size_one_neg_element(void){
	double array[1] = {-2.345678};
	CU_ASSERT_DOUBLE_EQUAL(average(array,1), -2.35, 0.001);
}
void average_test_even_size_one_zero_element(void){
	double array[1] = {0.00};
	CU_ASSERT_DOUBLE_EQUAL(average(array,1), 0, 0.001);
}

void average_test_odd_size_positives(void){
	double array[7] = {2.10, 6.167, 3.321, 7.90, 19.9891, 2.5, 31.229};
	CU_ASSERT_DOUBLE_EQUAL(average(array, 7), 10.46, 0.001);
}

void average_test_odd_size_negatives(void){
	double array[7] = {-2.10, -6.167, -3.321, -7.90, -19.9891, -2.5, -1.47654};
	CU_ASSERT_DOUBLE_EQUAL(average(array, 7), -6.21, 0.001);
}

void average_test_odd_size_negatives_and_positives(void){
	double array[7] = {2.10, -6.167, 3.321, -7.90, 19.9891, -2.5, 54321.9876543};
	CU_ASSERT_DOUBLE_EQUAL(average(array, 7), 7761.55, 0.001);
}

void average_test_odd_size_duplicates(void){
	double array[7] = {2.10, 2.10, 2.10, 2.10, 2.10, 2.10, 2.5};
	CU_ASSERT_DOUBLE_EQUAL(average(array, 7), 2.16, 0.001);
}


void testAverage(){
	CU_initialize_registry();
	CU_pSuite suite  = CU_add_suite("average_suite", 0,0);
	CU_add_test(suite, "average_test_even_size_positives" , average_test_even_size_positives);
	CU_add_test(suite, "average_test_even_size_negatives" , average_test_even_size_negatives);
	CU_add_test(suite, "average_test_even_size_negatives_and_positives", average_test_even_size_negatives_and_positives);
	CU_add_test(suite, "average_test_even_size_duplicates", average_test_even_size_duplicates);
	CU_add_test(suite, "average_test_even_size_empty" , average_test_even_size_empty);
	CU_add_test(suite, "average_test_even_size_one_pos_element", average_test_even_size_one_pos_element);
	CU_add_test(suite, "average_test_even_size_one_neg_element", average_test_even_size_one_neg_element);
	CU_add_test(suite, "average_test_even_size_one_zero_element", average_test_even_size_one_zero_element);
	CU_add_test(suite, "average_test_odd_size_positives" , average_test_odd_size_positives);
	CU_add_test(suite, "average_test_odd_size_negatives" , average_test_odd_size_negatives);
	CU_add_test(suite, "average_test_odd_size_negatives_and_positives", average_test_odd_size_negatives_and_positives);
	CU_add_test(suite, "average_test_odd_size_duplicates", average_test_odd_size_duplicates);


	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
}
