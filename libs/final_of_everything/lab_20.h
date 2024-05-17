#ifndef BASICS_OF_PROGRAMMING_LABS_LAB_20_H
#define BASICS_OF_PROGRAMMING_LABS_LAB_20_H

#include <stdbool.h>
#include "../data_structures/matrix/matrix.h"
#include <stdbool.h>

typedef struct domain{
    size_t visits;
    char name[200];
} domain;

//заполняет матрицу нулями
void matrixFillingZeros(matrix *m, int row, int col);

//Задание 1: дано n - порядок квадратной матрицы, заполненной нулями, и двумерный целочисленный массив query.
//Необходимо выполнить следующую операцию: query[i] = [row1i, col1i, row2i, col2i]
void firstTask(matrix *m, int countRequests, int *requestsArray[]);

//проверяет, находится ли переданный индекс в пределах матрицы заданных размеров (rows, cols)
bool isIndex(int rows, int cols, int indRow, int indCol);

//определяет состояние ячейки в новой матрице на основе правил игры "Жизнь" и количества соседей вокруг ячейки
int cellResultByPosition(matrix m, int indRow, int indCol, int countNeighbors);

//производит обновление матрицы newM на основе матрицы m, применяя правила игры "Жизнь" для каждой ячейки
int calculateCountNeighbors(matrix m, int rowInd, int colInd, int rows, int cols);

//Задание 2: вернуть следующее состояние ячейки, применяя правила игры "Жизнь"
void secondTask(matrix m, matrix *newM, int rows, int cols);

//сравнивает два числа, переданные через указатели
int sortedNumsCompare(const void * firstNum, const void * secondNum);

//заполняет массив чисел значениями из матрицы и сортирует его в порядке возрастания
void fillingNumFrameSorted(int *array, matrix m, int indRow, int indCol);

//Задание 3: обрабатывает матрицу медианным фильтром
void thirdTask(matrix *m, int size);

//выводит содержимое массива структур
void outputResultDomains(domain *results, int size);

//ищет заданное число в массиве целых чисел
bool searchNumFromArray(const int array[], int length, int num);

//ищет заданный домен в массиве структур и возвращает индекс этого домена
int searchDomainInResults(const domain results[], int size, char *s);

//обрабатывает случай, когда у домена есть точка, разделяющая домен верхнего уровня и поддомен
void handlerDotPrtNotNull(domain *array, int ind, char *dotPtr, domain results[], int *sizeResult);

//Задание 4: возвращает массив доменов с парным счетчиком для каждого поддомена во входных данных
void fourthTask(domain array[], int size);

//заполняет новую матрицу на основе данной
void fillingCalcMatrix(matrix m, matrix *calcMatrix, int rows, int cols);

//Задание 5: возвращает количество подматриц, в которых все единицы
void fifthTask(matrix m, int rows, int cols, int *result);


#endif //BASICS_OF_PROGRAMMING_LABS_LAB_20_H
