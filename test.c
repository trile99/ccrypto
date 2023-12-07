#include <stdio.h>
#include <string.h>
#include <CUnit/Basic.h>

void test_sample(void) {
    CU_ASSERT(1 == 1);
}

int main() {
    // Initialize the CUnit test registry
    if (CU_initialize_registry() != CUE_SUCCESS) {
        return CU_get_error();
    }

    // Add a suite to the registry
    CU_pSuite suite = CU_add_suite("SuiteName", NULL, NULL);
    if (suite == NULL) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add the test function to the suite
    if (CU_add_test(suite, "test_sample", test_sample) == NULL) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Run the tests
    CU_basic_run_tests();

    // Cleanup and return the result
    CU_cleanup_registry();
    return CU_get_error();
}