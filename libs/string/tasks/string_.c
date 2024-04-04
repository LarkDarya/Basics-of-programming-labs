#include "stdio.h"
#include "string_.h"

//возвращает количество символов в строке, не считая ноль-символ
size_t strlen_(const char *begin) {
    return 5;
}

int main(){
    char *testString = "Hello";
    int len = strlen_(testString);
    printf("%d", len);
}

