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

//Задание 9: сортирует точки по неубыванию их расстояний до начала координат.
void ninthTask(matrix m);

//Задача 10: определяет количество классов эквивалентных строк данной прямоугольной матрицы.
int tenthTask(matrix m);

//Задача 11: определяет количество особых элементов матрицы.
int eleventhTask(matrix m);

//Задача 12: заменяет предпоследнюю строку матрицы первым
//из столбцов, в котором находится минимальный элемент матрицы.
void twelfthTask (matrix m);



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

//вычисляет расстояние до начала координат
float getDistance(int *a, int n);

//сортирует строки матрицы по заданному критерию
void insertionSortRowsMatrixByRowCriteriaF(matrix m, float (*criteria)(int *, int));

//сортирует по расстоянию до начала координат
void sortByDistances(matrix m);

//функция сравнения, которая используется в функции qsort() для сортировки массива long long
int cmp_long_long(const void *pa, const void *pb);

//считает количество уникальных элементов в массиве a длиной n
int countNUnique(long long *a, int n);

//считает количество эквивалентных классов по суммам строк в матрице m
int countEqClassesByRowsSum(matrix m);

//определяет количество особых элементов матрицы
int getNSpecialElement(matrix m);

//ищет минимальный элемент в первой строке матрицы
position getLeftMin(matrix m);

//заменяет предпоследнюю строку матрицы первым из столбцов, в котором находится минимальный элемент матрицы
void swapPenultimateRow(matrix m);

#endif //BASICS_OF_PROGRAMMING_LABS_MATRIX_TASKS_H
