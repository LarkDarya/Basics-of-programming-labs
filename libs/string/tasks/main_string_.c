#include "stdio.h"
#include "string_.c"
#include <assert.h>

void test_strlen_(){
    char *testString1 = "Hello";
    int len1 = strlen_(testString1);
    assert(len1 == 5);

    char *testString2 = "   "; //три пробела
    int len2 = strlen_(testString2);
    assert(len2 == 3);

    char *testString3 = "()!""№;%:\е \0";
    int len3 = strlen_(testString3);
    assert(len3 == 12);
}

void test(){
    test_strlen_();
}

int main(){
    test();
}