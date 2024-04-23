#include "string_.h"

#ifndef BASICS_OF_PROGRAMMING_LABS_STRING_LAB18__H
#define BASICS_OF_PROGRAMMING_LABS_STRING_LAB18__H

#define MAX_STRING_SIZE 100
#define MAX_N_WORDS_IN_STRING 100
#define MAX_WORD_SIZE 20

typedef struct WordDescriptor {
    char *begin; // позиция начала слова
    char *end; // позиция первого символа, после последнего символа слова
} WordDescriptor;

//находит конечный элемент строки
char* getEndOfString(char *s);

//удаляет из строки все пробельные символы
void removeNonLetters(char *s);

//функция тестирования, которая даёт информацию о том, где именно произошла ошибка
void assertString(const char *expected, char *got, char const *fileName, char const *funcName, int line);

//сокращает количество пробелов между словами данного предложения до одного
void removeExtraSpaces(char *s);

//возвращает указатель на первый пробельный символ,
//расположенный на ленте памяти начиная с адреса begin
//или на первый ноль-символ
char* findSpace(char *begin);

//возвращает значение 0, если слово не было считано, иначе
//значение 1, в переменную word типа WordDescriptor
//записывает позиции начала слова, и первого символа после конца слова
int getWord(char *beginSearch, WordDescriptor *word);

//преобразовывает слово таким образом, чтобы цифры были перенесены
//в начало слова и изменить порядок следования цифр в слове на обратный
void reversedDigitToStart(WordDescriptor word);

//преобразовывает слово таким образом, чтобы цифры были перенесены в начало слова
void digitToStart(WordDescriptor word);

//преобразовывает строку таким образом, чтобы цифры каждого слова были
//перенесены в начало слова без изменения порядка следования их в слове,
//буквы перенесены в конец слова
void digitsToStart(char *s);

//возвращает значение 0, если слово не было считано, в противном
//случае будет возвращено значение 1 и в переменную word типа WordDescriptor
//будут записаны позиции начала слова, и первого символа конца слова
int getWordReverse(char *rbegin, char *rend, WordDescriptor *word);

//преобразовывает строку, заменяя каждую цифру соответствующим ей числом пробелов
void replacesNumbersWithSpaces(char *input, char *output);

#endif //BASICS_OF_PROGRAMMING_LABS_STRING_LAB18__H