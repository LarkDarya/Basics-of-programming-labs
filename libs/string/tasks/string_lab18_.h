#include "string_.h"
#include <stdbool.h>

#ifndef BASICS_OF_PROGRAMMING_LABS_STRING_LAB18__H
#define BASICS_OF_PROGRAMMING_LABS_STRING_LAB18__H

#define MAX_STRING_SIZE 100
#define MAX_N_WORDS_IN_STRING 100
#define MAX_WORD_SIZE 20

typedef struct WordDescriptor {
    char *begin; // позиция начала слова
    char *end; // позиция первого символа, после последнего символа слова
} WordDescriptor;

typedef struct BagOfWords {
    WordDescriptor words[MAX_N_WORDS_IN_STRING];
    size_t size;
} BagOfWords;

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

//заменяет все вхождения слова 𝑤1 на слово 𝑤2
void replace(char *source, char *w1, char *w2);

//проверяет слова на равенство
bool areWordsEqual(WordDescriptor w1, WordDescriptor w2);

//ищет первое вхождение любого символа из строки delim в строке str и возвращает указатель на этот символ
char* strpbrk_(const char* str, const char* delim);

//делит строку str на токены с использованием строки delim в качестве разделителя
char* strtok_(char* str, const char* delim);

//определяет, упорядочены ли лексикографически слова данного предложения
bool areWordsOrdered(char *s);

//получает позиции начала и конца каждого слова строки
void getBagOfWords(BagOfWords *bag, char *s);

//выводит слова данной строки в обратном порядке по одному в строке экрана
void reverseWordsBag(char *s);

//проверяет, является ли заданное слово палиндромом
bool isWordPalindrome(char *begin, char *end);

//считает количество палиндромов в строке, разделенной запятыми
int howManyWordsPalindromes(char *s);

#endif //BASICS_OF_PROGRAMMING_LABS_STRING_LAB18__H