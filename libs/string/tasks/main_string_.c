#include "stdio.h"
#include "string_.c"
#include <assert.h>

void test_strlen_(){
    char *test_string1 = "Hello";
    int len1 = strlen_(test_string1);
    assert(len1 == 5);

    char *test_string2 = "   "; //три пробела
    int len2 = strlen_(test_string2);
    assert(len2 == 3);

    char *test_string3 = "()!""№;%:\е \0";
    int len3 = strlen_(test_string3);
    assert(len3 == 12);
}

void test_find(){
    char test_string1[] = "Space";
    char *found1 = find(test_string1, test_string1 + 6, 'S');
    assert(*found1 == 83);

    char test_string2[] = "Space";
    char *found2 = find(test_string2, test_string2 + 2, 'c');
    assert(found2 == test_string2 + 2);

    char test_string3[] = "012 784 245";
    char *found3 = find(test_string3, test_string2 + 3, '2');
    assert(found3 != test_string3 + 3 && *found3 == 50);
}


void test(){
    test_strlen_();
    test_find();
}

int main(){
    test();
}