<<<<<<< HEAD
//
// Created by darya on 10.03.2024.
//
=======
#include <malloc.h>
#include <stdio.h>
#include <stdbool.h>
#include "matrix.h"

//размещает в динамической памяти матрицу размером nRows на nCols
matrix getMemMatrix(int nRows, int nCols){
    int **values = (int **) malloc(sizeof(int*) * nRows);

    for (int i = 0; i < nRows; i++){
        values[i] = (int *) malloc(sizeof(int) * nCols);
    }

    return (matrix){values, nRows, nCols};
}

//размещает в динамической памяти массив из nMatrices матриц размером nRows на nCols
matrix *getMemArrayOfMatrices(int nMatrices, int nRows, int nCols){
    matrix *ms = (matrix*) malloc(sizeof(matrix) * nMatrices);

    for (int i = 0; i < nMatrices; i++) {
        ms[i] = getMemMatrix(nRows, nCols);
    }

    return ms;
}

//освобождает память, выделенную под хранение матрицы m
void freeMemMatrix(matrix *m){
    free (m->values);
}

//освобождает память, выделенную под хранение массива ms из nMatrices матриц
void freeMemMatrices(matrix *ms, int nMatrices){
    for(int i = 0; i < nMatrices; i++) {
        free (ms[i].values);
    }
}



>>>>>>> 4316811 (implementation of functions for working with dynamic memory)
