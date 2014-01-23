
void matrix_test_create();
void matrix_test_create_invalid_dim();
void matrix_test_init();
void matrix_test_product();
void matrix_test_product_invalid_dim();
void matrix_test_mul();
void matrix_test_add();
void matrix_test_equals();

int add_matrix_tests() {
    CU_pSuite suite = CU_add_suite("Matrix", NULL, NULL);

    return suite
        && CU_add_test(suite, "matrix_create", &matrix_test_create)
        && CU_add_test(suite, "matrix_create (invalid dimensions)",
			&matrix_test_create_invalid_dim)
        && CU_add_test(suite, "matrix_init", &matrix_test_init)
        && CU_add_test(suite, "matrix_product", &matrix_test_product)
        && CU_add_test(suite, "matrix_product (invalid dimensions)", 
			&matrix_test_product_invalid_dim)
        && CU_add_test(suite, "matrix_mul", &matrix_test_mul)
        && CU_add_test(suite, "matrix_add", &matrix_test_add)
        && CU_add_test(suite, "matrix_equals", &matrix_test_equals);
}
