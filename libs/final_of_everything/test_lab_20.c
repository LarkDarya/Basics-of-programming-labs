#include <stdio.h>
#include "lab_20.c"
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

int test(){
    test_firstTask();
    test_secondTask();
}

int main(){
    test();

    return 0;
}