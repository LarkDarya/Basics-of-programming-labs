#include <assert.h>
#include "string_.c"

void test_strlen_(){
    char s1 = "Hi";
    assert(strlen_(s1) == 2);
}

void test(){
    test_strlen_();
}

int main(){
    test();
}
