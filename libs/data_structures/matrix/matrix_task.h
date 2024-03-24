#include "matrix.h"
#include "matrix.c"

#ifndef BASICS_OF_PROGRAMMING_LABS_MATRIX_TASKS_H
#define BASICS_OF_PROGRAMMING_LABS_MATRIX_TASKS_H

//Задание 1: меняет местами строки, в которых находятся максимальный и минимальный элементы.
void firstTask(matrix *m);

//Задание 2: упорядочивает строки матрицы по неубыванию наибольших элементов строк.
void secondTask(matrix m);

//Задание 3: упорядочивает столбцы матрицы по неубыванию минимальных элементов столбцов.
void thirdTask(matrix m);

//Задание 4: заменяет квадратную матрицу её квадратом.
matrix fourthTask(matrix m);

//Задача 5: транспонирует матрицу, если среди сумм элементов строк матрицы нет равных.
void fifthTask(matrix *m);

//Задача 6: определяет, являются ли две матрицы взаимообратными.
bool sixthTask(matrix m1, matrix m2);

//Задача 7: находит сумму максимальных элементов всех псевдодиагоналей.
long long seventhTask(matrix m);

//Задача 8: находит минимальный элемент в выделенной области.
int eighthTask(matrix m);




// функция-критерий для сравнения строк по максимальному элементу
int getMax(int* a, int n);

//сортирует строки по неубывнию наибольших элементов строк
void sortRowsByMaxElement(matrix m);

// функция-критерий для сравнения строк по минимальному элементу
int getMin(int *a, int n);

//упорядочивает столбцы матрицы по неубыванию минимальных элементов столбцов
void sortColsByMinElemnt(matrix m);

//умножает матрицы
matrix mulMatrices(matrix m1, matrix m2);

//возвращает квадрат матрицы, если она симметрична
matrix getSquareOfMatrixIfSymmetric(matrix m);

// функция-критерий для сравнения строк по сумме элементов
long long getSum(int* a, int nCols);

//проверяет элементы на уникальность
bool isUnique(long long *a, int n);

//транспонирует матрицу, если среди сумм элементов строк матрицы нет равных
void transposeIfMatrixHasNotEqualSumOfRows(matrix m);

//определяет, являются ли две матрицы взаимообратными
bool isMutuallyInverseMatrices(matrix m1, matrix m2);

//возвращает максимальное из двух чисел
int max(int a, int b);

//находит сумму максимальных элементов всех псевдодиагоналей
long long findSumOfMaxesOfPseudoDiagonal(matrix m);

//находит минимальный элемент в выделенной области
int getMinInArea(matrix m);

#endif //BASICS_OF_PROGRAMMING_LABS_MATRIX_TASKS_H
