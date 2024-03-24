#include "matrix_task.c"
#include <malloc.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

void test_firstTask_squareMatrix(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    3, 4,
                    1, 2
            }, 2, 2);

    matrix m1_return = createMatrixFromArray(
            (int[]) {
                    1, 2,
                    3, 4
            }, 2, 2);

    firstTask(&m1);

    for (int i = 0; i < m1.nRows; i++) {
        for (int j = 0; j < m1.nCols; j++) {
            assert(m1.values[i][j] == m1_return.values[i][j]);
        }
    }

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    10, 20, 30, 40,
                    50, 60, 70, 80,
                    90, 100, 110, 120,
                    130, 140, 150, 160

            }, 4, 4);

    matrix m2_return = createMatrixFromArray(
            (int[]) {
                    130, 140, 150, 160,
                    50, 60, 70, 80,
                    90, 100, 110, 120,
                    10, 20, 30, 40,
            }, 4, 4);

    firstTask(&m2);

    for (int i = 0; i < m2.nRows; i++) {
        for (int j = 0; j < m2.nCols; j++) {
            assert(m2.values[i][j] == m2_return.values[i][j]);
        }
    }

    freeMemMatrix(&m1);
    freeMemMatrix(&m1_return);
    freeMemMatrix(&m2);
    freeMemMatrix(&m2_return);
}

void test_firstTask_difRowsColumns(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    0, 4, 8, 9, 5, 34,
                    1, 2, 15, 19, 78, 23,
                    7, 20, 70, 100, 14, 18
            }, 3, 6);

    matrix m1_return = createMatrixFromArray(
            (int[]) {
                    7, 20, 70, 100, 14, 18,
                    1, 2, 15, 19, 78, 23,
                    0, 4, 8, 9, 5, 34
            }, 3, 6);

    firstTask(&m1);

    for (int i = 0; i < m1.nRows; i++) {
        for (int j = 0; j < m1.nCols; j++) {
            assert(m1.values[i][j] == m1_return.values[i][j]);
        }
    }

    freeMemMatrix(&m1);
    freeMemMatrix(&m1_return);
}

void test_firstTask_maxMinOneLine(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    1, 4,
                    3, 2
            }, 2, 2);

    matrix m1_return = createMatrixFromArray(
            (int[]) {
                    1, 4,
                    3, 2
            }, 2, 2);

    firstTask(&m1);

    for (int i = 0; i < m1.nRows; i++) {
        for (int j = 0; j < m1.nCols; j++) {
            assert(m1.values[i][j] == m1_return.values[i][j]);
        }
    }

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    120, 4, 8, 9, 10, 0,
                    1, 2, 15, 19, 5, 6,
                    7, 20, 70, 100, 34, 23
            }, 3, 6);

    matrix m2_return = createMatrixFromArray(
            (int[]) {
                    120, 4, 8, 9, 10, 0,
                    1, 2, 15, 19, 5, 6,
                    7, 20, 70, 100, 34, 23
            }, 3, 6);

    firstTask(&m1);

    for (int i = 0; i < m1.nRows; i++) {
        for (int j = 0; j < m1.nCols; j++) {
            assert(m1.values[i][j] == m1_return.values[i][j]);
        }
    }

    freeMemMatrix(&m1);
    freeMemMatrix(&m1_return);
    freeMemMatrix(&m2);
    freeMemMatrix(&m2_return);
}

void test_firstTask(){
    test_firstTask_squareMatrix();
    test_firstTask_difRowsColumns();
    test_firstTask_maxMinOneLine();
}

void test_secondTask_squareMatrix(){
    matrix m = createMatrixFromArray(
            (int[]) {
                    7, 1, 2,
                    1, 8, 1,
                    3, 2, 1
            }, 3, 3);

    matrix m_return = createMatrixFromArray(
            (int[]) {
                    3, 2, 1,
                    7, 1, 2,
                    1, 8, 1
            }, 3, 3);

    secondTask(m);

    for (int i = 0; i < m.nRows; i++) {
        for (int j = 0; j < m.nCols; j++) {
            assert(m.values[i][j] == m_return.values[i][j]);
        }
    }

    freeMemMatrix(&m);
    freeMemMatrix(&m_return);
}

void test_secondTask_oneMax(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    0, 1, 2, 8,
                    1, 8, 1, 4,
                    3, 2, 1, 8
            }, 3, 4);

    matrix m1_return = createMatrixFromArray(
            (int[]) {
                    0, 1, 2, 8,
                    1, 8, 1, 4,
                    3, 2, 1, 8
            }, 3, 4);

    secondTask(m1);

    for (int i = 0; i < m1.nRows; i++) {
        for (int j = 0; j < m1.nCols; j++) {
            assert(m1.values[i][j] == m1_return.values[i][j]);
        }
    }

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    9, 1, 2, 5,
                    1, 8, 1, 4,
                    3, 2, 9, 6
            }, 3, 4);

    matrix m2_return = createMatrixFromArray(
            (int[]) {
                    1, 8, 1, 4,
                    9, 1, 2, 5,
                    3, 2, 9, 6
            }, 3, 4);

    secondTask(m2);

    for (int i = 0; i < m2.nRows; i++) {
        for (int j = 0; j < m2.nCols; j++) {
            assert(m2.values[i][j] == m2_return.values[i][j]);
        }
    }

    freeMemMatrix(&m1);
    freeMemMatrix(&m2);
    freeMemMatrix(&m1_return);
    freeMemMatrix(&m2_return);
}

void test_secondTask(){
    test_secondTask_squareMatrix();
    test_secondTask_oneMax();
}

void test_thirdTask_squareMatrix(){
    matrix m = createMatrixFromArray(
            (int[]) {
                    7, 3, 10,
                    8, 0, 5,
                    6, 2, 11
            }, 3, 3);

    matrix m_return = createMatrixFromArray(
            (int[]) {
                    3, 10, 7,
                    0, 5, 8,
                    2, 11, 6
            }, 3, 3);

    thirdTask(m);

    for (int i = 0; i < m.nRows; i++) {
        for (int j = 0; j < m.nCols; j++) {
            assert(m.values[i][j] == m_return.values[i][j]);
        }
    }

    freeMemMatrix(&m);
    freeMemMatrix(&m_return);
}

void test_thirdTask_oneMin(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    0, 1, 0, 8,
                    1, 0, 1, 4,
                    3, 2, 1, 0
            }, 3, 4);

    matrix m1_return = createMatrixFromArray(
            (int[]) {
                    0, 1, 0, 8,
                    1, 0, 1, 4,
                    3, 2, 1, 0
            }, 3, 4);

    thirdTask(m1);

    for (int i = 0; i < m1.nRows; i++) {
        for (int j = 0; j < m1.nCols; j++) {
            assert(m1.values[i][j] == m1_return.values[i][j]);
        }
    }

    freeMemMatrix(&m1);
    freeMemMatrix(&m1_return);
}

void test_thirdTask(){
    test_thirdTask_squareMatrix();
    test_thirdTask_oneMin();
}

void test_fourthTask_SymmetricMatrix(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    1, 2, 3,
                    2, 5, 6,
                    3, 6, 9
            }, 3, 3);

    matrix m1_return = createMatrixFromArray(
            (int[]) {
                    14, 30, 42,
                    30, 65, 90,
                    42, 90, 126
            }, 3, 3);

    matrix m1_square = fourthTask(m1);

    for (int i = 0; i < m1.nRows; i++) {
        for (int j = 0; j < m1.nCols; j++) {
            assert(m1_square.values[i][j] == m1_return.values[i][j]);
        }
    }

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    7, 20, 20,
                    20, 10, 20,
                    20, 20, 15
            }, 3, 3);

    matrix m2_return = createMatrixFromArray(
            (int[]) {
                    849, 740, 840,
                    740, 900, 900,
                    840, 900, 1025
            }, 3, 3);

    matrix m2_square = fourthTask(m2);

    for (int i = 0; i < m2.nRows; i++) {
        for (int j = 0; j < m2.nCols; j++) {
            assert(m2_square.values[i][j] == m2_return.values[i][j]);
        }
    }

    freeMemMatrix(&m1);
    freeMemMatrix(&m1_return);
    freeMemMatrix(&m1_square);
    freeMemMatrix(&m2);
    freeMemMatrix(&m2_return);
    freeMemMatrix(&m2_square);
}

void test_fourthTask_notSymmetricMatrix(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    1, 2, 3,
                    4, 5, 6,
                    7, 8, 9
            }, 3, 3);

    matrix m1_square = fourthTask(m1);

    assert(m1_square.nRows == 0 && m1_square.nCols == 0);

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    1, 2,
                    4, 5,
                    7, 8
            }, 3, 2);

    matrix m2_square = fourthTask(m1);

    assert(m2_square.nRows == 0 && m2_square.nCols == 0);

    freeMemMatrix(&m1);
    freeMemMatrix(&m1_square);
    freeMemMatrix(&m2);
    freeMemMatrix(&m2_square);
}

void test_fourthTask(){
    test_fourthTask_SymmetricMatrix();
    test_fourthTask_notSymmetricMatrix();
}

void test_fifthTask_notSquareMatrix(){
    matrix m = createMatrixFromArray(
            (int[]) {
                    1, 2, 3, 0,
                    4, 5, 6, 0,
                    7, 8, 9, 0
            }, 3, 4);

    matrix m_return = createMatrixFromArray(
            (int[]) {
                    1, 2, 3, 0,
                    4, 5, 6, 0,
                    7, 8, 9, 0
            }, 3, 4);

    fifthTask(&m);

    for (int i = 0; i < m.nRows; i++) {
        for (int j = 0; j < m.nCols; j++) {
            assert(m.values[i][j] == m_return.values[i][j]);
        }
    }

    freeMemMatrix(&m);
    freeMemMatrix(&m_return);
}

void test_fifthTask_equalSum(){
    matrix m = createMatrixFromArray(
            (int[]) {
                    1, 2, 3,
                    4, 5, 6,
                    3, 3, 0
            }, 3, 3);

    matrix m_return = createMatrixFromArray(
            (int[]) {
                    1, 2, 3,
                    4, 5, 6,
                    3, 3, 0
            }, 3, 3);

    fifthTask(&m);

    for (int i = 0; i < m.nRows; i++) {
        for (int j = 0; j < m.nCols; j++) {
            assert(m.values[i][j] == m_return.values[i][j]);
        }
    }

    freeMemMatrix(&m);
    freeMemMatrix(&m_return);
}

void test_fifthTask_notEqualSum(){
    matrix m = createMatrixFromArray(
            (int[]) {
                    1, 2, 3,
                    4, 5, 6,
                    7, 8, 9
            }, 3, 3);

    matrix m_return = createMatrixFromArray(
            (int[]) {
                    1, 4, 7,
                    2, 5, 8,
                    3, 6, 9
            }, 3, 3);

    fifthTask(&m);

    for (int i = 0; i < m.nRows; i++) {
        for (int j = 0; j < m.nCols; j++) {
            assert(m.values[i][j] == m_return.values[i][j]);
        }
    }

    freeMemMatrix(&m);
    freeMemMatrix(&m_return);
}

void test_fifthTask(){
    test_fifthTask_notSquareMatrix();
    test_fifthTask_equalSum();
    test_fifthTask_notEqualSum();
}

void test_sixthTask_mutuallyInverseMatrix(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    1, 0, 0,
                    0, 1, 0,
                    0, 0, 1
            }, 3, 3);

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    1, 0, 0,
                    0, 1, 0,
                    0, 0, 1
            }, 3, 3);

    assert(sixthTask(m1, m2) == 1);

    freeMemMatrix(&m1);
    freeMemMatrix(&m2);
}

void test_sixthTask_notMutuallyInverseMatrix(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    1, 3,
                    4, 5
            }, 2, 2);

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    7, 8,
                    9, 0
            }, 2, 2);

    assert(sixthTask(m1, m2) == 0);

    freeMemMatrix(&m1);
    freeMemMatrix(&m2);
}

void test_sixthTask(){
    test_sixthTask_mutuallyInverseMatrix();
    test_sixthTask_notMutuallyInverseMatrix();
}

void test_seventhTask_equalElements(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    1, 1, 1,
                    1, 1, 1,
                    1, 1, 1
            }, 3, 3);

    assert(seventhTask(m1) == 4);

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    0, 0, 0,
                    0, 0, 0,
                    0, 0, 0
            }, 3, 3);

    assert(seventhTask(m2) == 0);

    freeMemMatrix(&m1);
    freeMemMatrix(&m2);
}

void test_seventhTask_notSquareMatrix(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    3, 2, 5, 4,
                    1, 3, 6, 3,
                    3, 2, 1, 2
            }, 3, 4);

    assert(seventhTask(m1) == 20);

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    2, 4, 7,
                    1, 3, 5
            }, 2, 3);

    assert(seventhTask(m2) == 13);

    freeMemMatrix(&m1);
    freeMemMatrix(&m2);
}

void test_seventhTask(){
    test_seventhTask_equalElements();
    test_seventhTask_notSquareMatrix();
}

void test_eighthTask_maxInFirstLine(){
    matrix m = createMatrixFromArray(
            (int[]) {
                    100, 2, 5, 4,
                    1, 3, 6, 10,
                    7, 15, 18, 20
            }, 3, 4);

    assert(eighthTask(m) == 100);

    freeMemMatrix(&m);
}

void test_eighthTask_maxNotInFirstLine(){
    matrix m = createMatrixFromArray(
            (int[]) {
                    10, 7, 5, 6,
                    3, 11, 8, 9,
                    4, 11, 12,2
            }, 3, 4);

    assert(eighthTask(m) == 5);

    freeMemMatrix(&m);
}

void test_eighthTask(){
    test_eighthTask_maxInFirstLine();
    test_eighthTask_maxNotInFirstLine();
}

void test_ninthTask_pointsWithOrigin(){
    matrix m1 = createMatrixFromArray(
            (int[]) {
                    6,8,
                    0,0,
                    7,12
            }, 3, 2);

    matrix m1_return = createMatrixFromArray(
            (int[]) {
                    0,0,
                    6,8,
                    7,12
            }, 3, 2);

    ninthTask(m1);

    for (int i = 0; i < m1.nRows; i++) {
        for (int j = 0; j < m1.nCols; j++) {
            assert(m1.values[i][j] == m1_return.values[i][j]);
        }
    }

    matrix m2 = createMatrixFromArray(
            (int[]) {
                    0,0,
                    0,0
            }, 2, 2);

    matrix m2_return = createMatrixFromArray(
            (int[]) {
                    0,0,
                    0,0
            }, 3, 2);

    ninthTask(m2);

    for (int i = 0; i < m2.nRows; i++) {
        for (int j = 0; j < m2.nCols; j++) {
            assert(m2.values[i][j] == m2_return.values[i][j]);
        }
    }

    freeMemMatrix(&m1);
    freeMemMatrix(&m1_return);
    freeMemMatrix(&m2);
    freeMemMatrix(&m2_return);
}

void test_ninthTask_difPoints(){
    matrix m = createMatrixFromArray(
            (int[]) {
                    6,8,
                    0,0,
                    7,12,
                    8, 13,
                    34, 20,
                    3, 0,
                    3, 7,
                    9, 10
            }, 8, 2);

    matrix m_return = createMatrixFromArray(
            (int[]) {
                    0, 0,
                    3, 0,
                    3, 7,
                    6, 8,
                    9, 10,
                    7, 12,
                    8, 13,
                    34, 20
            }, 8, 2);

    ninthTask(m);

    for (int i = 0; i < m.nRows; i++) {
        for (int j = 0; j < m.nCols; j++) {
            assert(m.values[i][j] == m_return.values[i][j]);
        }
    }
}

void test_ninthTask(){
    test_ninthTask_pointsWithOrigin();
    test_ninthTask_difPoints();
}

void test(){
    test_firstTask();
    test_secondTask();
    test_thirdTask();
    test_fourthTask();
    test_fifthTask();
    test_sixthTask();
    test_seventhTask();
    test_eighthTask();
    test_ninthTask();
}

int main(){
    test();
}
