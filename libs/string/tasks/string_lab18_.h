#include "string_.h"

#ifndef BASICS_OF_PROGRAMMING_LABS_STRING_LAB18__H
#define BASICS_OF_PROGRAMMING_LABS_STRING_LAB18__H

//находит конечный элемент строки
char* getEndOfString(char *s);

//удаляет из строки все пробельные символы
void removeNonLetters(char *s);

//функция тестирования, которая даёт информацию о том, где именно произошла ошибка
void assertString(const char *expected, char *got, char const *fileName, char const *funcName, int line);

#endif //BASICS_OF_PROGRAMMING_LABS_STRING_LAB18__H