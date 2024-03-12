/*
 * Defines functions for manipulating square integer matrices.
 * CSC 225, Assignment 7
 * Given code, Winter '24
 */
#include <stdio.h>
#include "matrix.h"

/* matscl: Multiplies each element of a matrix by a scalar. */
void matscl(int *mat, unsigned int n, int c)
{
    /* TODO: Complete this function, given:
     *  mat - A pointer to the first element in a multidimensional array
     *  n   - The height and width of the matrix
     *  c   - The constant scalar
     * ...multiply each element in "mat" by "c". */
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            *((mat + (n * i)) + j) = *((mat + (n * i)) + j) * c;
        }
    }
    return;
}

/* matpscl: Multiplies each element of a matrix by a scalar. */
void matpscl(int **mat, unsigned int n, int c)
{
    /* TODO: Complete this function, given:
     *  mat - An array of pointers to arrays of integers
     *  n   - The height and width of the matrix
     *  c   - The constant scalar
     * ...multiply each element in "mat" by "c". */
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            mat[i][j] = mat[i][j] * c;
        }
    }
    return;
}

/* mattrn: Transposes a matrix about its diagonal, in-place. */
void mattrn(int *mat, unsigned int n)
{
    /* TODO: Complete this function, given:
     *  mat - A pointer to the first element in a multidimensional array
     *  n   - The height and width of the matrix
     * ...transpose "mat" about its diagonal. */
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            temp = *((mat + (n * i)) + j);
            *((mat + (n * i)) + j) = *((mat + (n * j)) + i);
            *((mat + (n * j)) + i) = temp;
        }
    }
    return;
}

/* matptrn: Transposes a matrix about its diagonal, in-place. */
void matptrn(int **mat, unsigned int n)
{
    /* TODO: Complete this function, given:
     *  mat - An array of pointers to arrays of integers
     *  n   - The height and width of the matrix
     * ...transpose "mat" about its diagonal. */
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    return;
}

/* matadd: Adds two matrices, placing their sum into a third. */
void matadd(int *mata, int *matb, int *matc, unsigned int n)
{
    /* TODO: Complete this function, given:
     *  mata - A pointer to the first element in a multidimensional array
     *  matb - A pointer to the first element in a multidimensional array
     *  matc - A pointer to the first element in a multidimensional array
     *  n    - The height and width of the matrices
     * ...compute "matc = mata + matb". */
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            *((matc + (n * i)) + j) = *((mata + (n * i)) + j) + *((matb + (n * i)) + j);
        }
    }
    return;
}

/* matpadd: Adds two matrices, placing their sum into a third. */
void matpadd(int **mata, int **matb, int **matc, unsigned int n)
{
    /* TODO: Complete this function, given:
     *  mata - An array of pointers to arrays of integers
     *  matb - An array of pointers to arrays of integers
     *  matc - An array of pointers to arrays of integers
     *  n    - The height and width of the matrices
     * ...compute "matc = mata + matb". */
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matc[i][j] = matb[i][j] + mata[i][j];
        }
    }
    return;
}

/* matmul: Multiplies two matrices, placing their product into a third. */
void matmul(int *mata, int *matb, int *matc, unsigned int n)
{
    /* TODO: Complete this function, given:
     *  mata - A pointer to the first element in a multidimensional array
     *  matb - A pointer to the first element in a multidimensional array
     *  matc - A pointer to the first element in a multidimensional array
     *  n    - The height and width of the matrices
     * ...compute "matc = mata * matb". */
    int i, j, x, sum;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = 0;
            for (x = 0; x < n; x++)
            {
                sum = sum + (*((mata + (n * i)) + x) * *((matb + (n * x)) + j));
            }
            *((matc + (n * i)) + j) = sum;
        }
    }
    return;
}

/* matpmul: Multiplies two matrices, placing their product into a third. */
void matpmul(int **mata, int **matb, int **matc, unsigned int n)
{
    /* TODO: Complete this function, given:
     *  mata - An array of pointers to arrays of integers
     *  matb - An array of pointers to arrays of integers
     *  matc - An array of pointers to arrays of integers
     *  n    - The height and width of the matrices
     * ...compute "matc = mata * matb". */
    int i, j, x, sum;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = 0;
            for (x = 0; x < n; x++)
            {
                sum = sum + (mata[i][x] * matb[x][j]);
            }
            matc[i][j] = sum;
        }
    }
    return;
}
