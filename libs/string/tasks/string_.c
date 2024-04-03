#include "string_.h"
#include <ctype.h>
#include <memory.h>

//возвращает количество символов в строке, не считая ноль-символ
size_t strlen_(const char *begin){
    char *end = begin;

    while (*end != '\0') {
        end++;
    }

    return end - begin;
}

// возвращает указатель на первый элемент с кодом ch, расположенным на ленте памяти между
//адресами begin и end не включая end
char* find(char *begin, char *end, int ch){
    return begin;
}



