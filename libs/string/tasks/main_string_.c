#include <assert.h>
#include "string_.c"

void test_strlen_(){
    char s1 = "Hi";
    assert(strlen_(s1) == 2);

    char s2 = "Привет";
    assert(strlen_(s2) == 6);

    char s3 = "Привет\0";
    assert(strlen_(s3) == 6);

    char s4 = ")(*%^&$#23-\t";
    assert(strlen_(s4) == 12);

    char s5 = "    "; //ввела 3 символа через комбинацию Ctrl+Alt+F и скопировала из Word
    assert(strlen_(s5) == 3);
}

void test_find(){
    char b1 = "H", e1 = "l";
    char s1 = "Hello";
    assert(find(b1, e1, s1) == 0);
}

void test(){
    test_strlen_();
    test_find();
}

int main(){
    test();
}
