#include <stdio.h>
#include "lab_20.c"
#include "../string/tasks/string_.h"
#include <assert.h>

void test_firstTask_exampleFromTextbook(){
    int n = 3;
    matrix got = getMemMatrix(n, n);
    matrixFillingZeros(&got, n, n);

    int countRequests = 2;
    int firstRequest[4] = {1, 1, 2, 2};
    int secondRequest[4] = {0, 0, 1, 1};
    int *requests[2] = {firstRequest, secondRequest};

    firstTask(&got, countRequests, requests);

    matrix expected = createMatrixFromArray(
            (int[]) {
                    1, 1, 0,
                    1, 2, 1,
                    0, 1, 1
            }, 3, 3
    );

    assert(areTwoMatricesEqual(&got, &expected));
}

void test_firstTask_secondOrderSquareMatrix(){
    int n = 2;
    matrix got = getMemMatrix(n, n);
    matrixFillingZeros(&got, n, n);

    int countRequests = 2;
    int firstRequest[4] = {0, 0, 1, 1};
    int secondRequest[4] = {0, 0, 0, 1};
    int *requests[2] = {firstRequest, secondRequest};

    firstTask(&got, countRequests, requests);

    matrix expected = createMatrixFromArray(
            (int[]) {
                    2, 2,
                    1,1
            }, 2, 2
    );

    assert(areTwoMatricesEqual(&got, &expected));
}

void test_firstTask_fourthOrderSquareMatrix(){
    int n = 4;
    matrix got = getMemMatrix(n, n);
    matrixFillingZeros(&got, n, n);

    int countRequests = 3;
    int firstRequest[4] = {0,0,3,3};
    int secondRequest[4] = {1,1,2,2};
    int thirdRequest[4] = {2,2,3,3};
    int *requests[3] = {firstRequest, secondRequest, thirdRequest};

    firstTask(&got, countRequests, requests);

    matrix expected = createMatrixFromArray(
            (int[]) {
                    1, 1, 1, 1,
                    1, 2, 2, 1,
                    1, 2, 3, 2,
                    1, 1, 2, 2
            }, 4, 4
    );

    assert(areTwoMatricesEqual(&got, &expected));
}

void test_firstTask(){
    test_firstTask_exampleFromTextbook();
    test_firstTask_secondOrderSquareMatrix();
    test_firstTask_fourthOrderSquareMatrix();
}

void test_secondTask_exampleFromTextbook(){
    int r = 4;
    int c = 3;
    matrix start = createMatrixFromArray(
            (int[]) {
                    0, 1, 0,
                    0, 0, 1,
                    1, 1, 1,
                    0, 0, 0
            }, 4, 3
    );

    matrix got = getMemMatrix(r, c);
    secondTask(start, &got, r, c);

    matrix expected = createMatrixFromArray(
            (int[]) {
                    0, 0, 0,
                    1, 0, 1,
                    0, 1, 1,
                    0, 1, 0
            }, 4, 3
    );

    assert(areTwoMatricesEqual(&got, &expected));
}

void test_secondTask_allAlive(){
    int r = 3;
    int c = 3;
    matrix start = createMatrixFromArray(
            (int[]) {
                    1, 1, 1,
                    1, 1, 1,
                    1, 1, 1
            }, 3, 3
    );

    matrix got = getMemMatrix(r, c);
    secondTask(start, &got, r, c);

    matrix expected = createMatrixFromArray(
            (int[]) {
                    1,0,1,
                    0, 0, 0,
                    1,0,1
            }, 3, 3
    );

    assert(areTwoMatricesEqual(&got, &expected));
}

void test_secondTask_allDead(){
    int r = 3;
    int c = 3;
    matrix start = createMatrixFromArray(
            (int[]) {
                    0, 0, 0,
                    0, 0, 0,
                    0, 0, 0
            }, 3, 3
    );

    matrix got = getMemMatrix(r, c);
    secondTask(start, &got, r, c);

    matrix expected = createMatrixFromArray(
            (int[]) {
                    0, 0, 0,
                    0, 0, 0,
                    0, 0, 0
            }, 3, 3
    );

    assert(areTwoMatricesEqual(&got, &expected));
}

void test_secondTask(){
    test_secondTask_exampleFromTextbook();
    test_secondTask_allAlive();
    test_secondTask_allDead();
}

void test_thirdTask_exampleFromTextbook(){
    int n = 3;
    matrix got = createMatrixFromArray(
            (int[]) {
                    10, 20, 30,
                    25, 35, 45,
                    15, 25, 35
            }, 3, 3
    );

    thirdTask(&got, n);

    matrix expected = createMatrixFromArray(
            (int[]) {
                    10, 20, 30,
                    25, 25, 45,
                    15, 25, 35
            }, 3, 3
    );

    assert(areTwoMatricesEqual(&got, &expected));
}

void test_thirdTask_squareMatrixOrderFive(){
    int n = 5;
    matrix got = createMatrixFromArray(
            (int[]) {
                    10, 20, 30, 40, 50,
                    15, 25, 45, 85, 55,
                    15, 25, 35, 60, 70,
                    5, 7, 8, 9, 1,
                    90, 90, 90, 90, 90
            }, 5, 5
    );

    thirdTask(&got, n);

    matrix expected = createMatrixFromArray(
            (int[]) {
                    10, 20, 30, 40, 50,
                    15, 22, 32, 45, 55,
                    15, 15, 18, 25, 70,
                    5, 16, 21, 47, 1,
                    90, 90, 90, 90, 90
            }, 5, 5
    );

    assert(areTwoMatricesEqual(&got, &expected));
}

void test_thirdTask(){
    test_thirdTask_exampleFromTextbook();
    test_thirdTask_squareMatrixOrderFive();
}

void test_fourthTask_exampleOneFromTextbook(){
    int size = 1;
    domain array[1] = {{9001, "discuss.codeforces.com"},};

    fourthTask(array, size);

    printf("\n");
}

void test_fourthTask_exampleTwoFromTextbook(){
    int size = 4;
    domain array[4] = {{900, "google.mail.com"},
                       {50,"yahoo.com"},
                       {1, "intel.mail.com"},
                       {5, "wiki.org"}};

    fourthTask(array, size);
}

void test_fourthTask(){
    test_fourthTask_exampleOneFromTextbook();
    test_fourthTask_exampleTwoFromTextbook();
}

void test_fifthTask_exampleFromTextbook(){
    int rows1 = 3;
    int cols1 = 3;

    matrix m1 = createMatrixFromArray(
            (int[]) {
                    1, 0, 1,
                    1, 1, 0,
                    1, 1, 0
            }, 3, 3
    );

    int result1 = 0;

    fifthTask(m1, rows1, cols1, &result1);

    assert(result1 == 13);
}

void test_fifthTask_noSubmatrices(){
    int rows2 = 3;
    int cols2 = 4;

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    0, 1, 1, 0,
                    0, 1, 1, 1,
                    1, 1, 1, 0
            }, 3, 4
    );

    int result2 = 0;

    fifthTask(m2, rows2, cols2, &result2);

    assert(result2 == 24);
}

void test_fifthTask(){
    test_fifthTask_exampleFromTextbook();
    test_fifthTask_noSubmatrices();
}

void test_sixthTask_exampleOneFromTextbook(){
    char s[10] = "IIIDIDDD";
    int len = 8;
    char got[10];
    int resLen;

    sixthTask(s, len, got, &resLen);

    char expected[10] = "123549876";

    assert(strcmp(got, expected) == 0);
}

void test_sixthTask_exampleTwoFromTextbook(){
    char s[5] = "DDD";
    int len = 3;
    char got[5];
    int resLen;

    sixthTask(s, len, got, &resLen);

    char expected[10] = "4321";

    assert(strcmp(got, expected) == 0);
}

void test_sixthTask_oneI(){
    char s[7] = "IIIII";
    int len = 5;
    char got[7];
    int resLen;

    sixthTask(s, len, got, &resLen);

    char expected2[10] = "123456";

    assert(strcmp(got, expected2) == 0);
}

void test_sixthTask(){
    test_sixthTask_exampleOneFromTextbook();
    test_sixthTask_exampleTwoFromTextbook();
    test_sixthTask_oneI();
}

int test(){
    test_firstTask();
    test_secondTask();
    test_thirdTask();
    test_fourthTask();
    test_fifthTask();
    test_sixthTask();
}

int main(){
    test();

    return 0;
}