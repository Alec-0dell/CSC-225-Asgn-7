/*
 * Defines functions for manipulating square integer matrices.
 * CSC 225, Assignment 7
 * Given code, Winter '24
 */

#include "matrix.h"

/* matscl: Multiplies each element of a matrix by a scalar. */
void matscl(int *mat, unsigned int n, int c) {
    /* TODO: Complete this function, given:
     *  mat - A pointer to the first element in a multidimensional array
     *  n   - The height and width of the matrix
     *  c   - The constant scalar
     * ...multiply each element in "mat" by "c". */
}

/* matpscl: Multiplies each element of a matrix by a scalar. */
void matpscl(int **mat, unsigned int n, int c) {
    /* TODO: Complete this function, given:
     *  mat - An array of pointers to arrays of integers
     *  n   - The height and width of the matrix
     *  c   - The constant scalar
     * ...multiply each element in "mat" by "c". */
}

/* mattrn: Transposes a matrix about its diagonal, in-place. */
void mattrn(int *mat, unsigned int n) {
    /* TODO: Complete this function, given:
     *  mat - A pointer to the first element in a multidimensional array
     *  n   - The height and width of the matrix
     * ...transpose "mat" about its diagonal. */
}

/* matptrn: Transposes a matrix about its diagonal, in-place. */
void matptrn(int **mat, unsigned int n) {
    /* TODO: Complete this function, given:
     *  mat - An array of pointers to arrays of integers
     *  n   - The height and width of the matrix
     * ...transpose "mat" about its diagonal. */
}

/* matadd: Adds two matrices, placing their sum into a third. */
void matadd(int *mata, int *matb, int *matc, unsigned int n) {
    /* TODO: Complete this function, given:
     *  mata - A pointer to the first element in a multidimensional array
     *  matb - A pointer to the first element in a multidimensional array
     *  matc - A pointer to the first element in a multidimensional array
     *  n    - The height and width of the matrices
     * ...compute "matc = mata + matb". */
}

/* matpadd: Adds two matrices, placing their sum into a third. */
void matpadd(int **mata, int **matb, int **matc, unsigned int n) {
    /* TODO: Complete this function, given:
     *  mata - An array of pointers to arrays of integers
     *  matb - An array of pointers to arrays of integers
     *  matc - An array of pointers to arrays of integers
     *  n    - The height and width of the matrices
     * ...compute "matc = mata + matb". */
}

/* matmul: Multiplies two matrices, placing their product into a third. */
void matmul(int *mata, int *matb, int *matc, unsigned int n) {
    /* TODO: Complete this function, given:
     *  mata - A pointer to the first element in a multidimensional array
     *  matb - A pointer to the first element in a multidimensional array
     *  matc - A pointer to the first element in a multidimensional array
     *  n    - The height and width of the matrices
     * ...compute "matc = mata * matb". */
}

/* matpmul: Multiplies two matrices, placing their product into a third. */
void matpmul(int **mata, int **matb, int **matc, unsigned int n) {
    /* TODO: Complete this function, given:
     *  mata - An array of pointers to arrays of integers
     *  matb - An array of pointers to arrays of integers
     *  matc - An array of pointers to arrays of integers
     *  n    - The height and width of the matrices
     * ...compute "matc = mata * matb". */
}
