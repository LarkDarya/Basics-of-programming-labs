#include <stdio.h>

#ifndef BASICS_OF_PROGRAMMING_LABS_STRING__H
#define BASICS_OF_PROGRAMMING_LABS_STRING__H

//возвращает количество символов в строке, не считая ноль-символ
size_t strlen_(const char *begin);

// возвращает указатель на первый элемент с кодом ch, расположенным на ленте памяти между
//адресами begin и end не включая end
char* find(char *begin, char *end, int ch);

#endif //BASICS_OF_PROGRAMMING_LABS_STRING__H
