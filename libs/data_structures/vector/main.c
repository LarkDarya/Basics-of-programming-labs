#include <assert.h>
#include "vector.c"

void test_pushBack_emptyVector() {
    vector test_v1 = createVector(0);

    pushBack(&test_v1, 5);

    assert(test_v1.data[0] == 5);
    assert(test_v1.size == 1);
}

void test_pushBack_fullVector() {
    vector test_v1 = createVector(3);

    pushBack(&test_v1, 2);

    assert(test_v1.data[0] == 2);
    assert(test_v1.size == 1);
}

void test_popBack_notEmptyVector() {
    vector v = createVector(0);

    pushBack(&v, 10);

    assert(v.size == 1);

    popBack(&v);

    assert(v.size == 0);
    assert(v.capacity == 1);
}



void test(){
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
    test_popBack_notEmptyVector();
}

int main(){
    test();

    return 0;
}