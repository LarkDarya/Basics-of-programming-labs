#define ASSERT_STRING(expected, got) assertString(expected, got, \
__FILE__, __FUNCTION__, __LINE__)

#include "string_lab18_.c"
#include <stdio.h>
#include <assert.h>

void test_removeNonLetters_oneSpace(){
    char s[] = " ";
    removeNonLetters(s);
    ASSERT_STRING("", s);
}

void test_removeNonLetters_emptyLine(){
    char s[] = "";
    removeNonLetters(s);
    ASSERT_STRING("", s);
}

void test_removeNonLetters_noSpace(){
    char s[] = "Moths";
    removeNonLetters(s);
    ASSERT_STRING("Moths", s);
}

void test_removeNonLetters_manySpaces(){
    char s[] = " What is kindness? ";
    removeNonLetters(s);
    ASSERT_STRING("Whatiskindness?", s);
}

void test_removeNonLetters(){
    test_removeNonLetters_oneSpace();
    test_removeNonLetters_emptyLine();
    test_removeNonLetters_noSpace();
    test_removeNonLetters_manySpaces();
}

void test_removeExtraSpaces_setOneSymbols(){
    char s[] = " NNN  NNN NNN ";
    removeExtraSpaces(s);
    ASSERT_STRING("NNN NNN NNN", s);
}

void test_removeExtraSpaces_noSpace(){
    char s[] = "{1,2,3}";
    removeExtraSpaces(s);
    ASSERT_STRING("{1,2,3}", s);
}

void test_removeExtraSpaces_noDoubleSpaces(){
    char s[] = "Kindness is when";
    removeExtraSpaces(s);
    ASSERT_STRING("Kindness is when", s);
}

void test_removeExtraSpaces_manySpaces(){
    char s[] = "    Everyone     is     friends     with     each     other    ";
    removeExtraSpaces(s);
    ASSERT_STRING("Everyone is friends with each other", s);
}

void test_removeExtraSpaces(){
    test_removeExtraSpaces_setOneSymbols();
    test_removeExtraSpaces_noSpace();
    test_removeExtraSpaces_noDoubleSpaces();
    test_removeExtraSpaces_manySpaces();
}

void test_digitsToStart_noDigits(){
    char s[] = "And";
    digitsToStart(s);
    ASSERT_STRING("And", s);
}

void test_digitsToStart_withSpaces(){
    char s[] = "And everyone can walk";
    digitsToStart(s);
    ASSERT_STRING("And", s);
}

void test_digitsToStart_digitsPerWord(){
    char s[] = "Walk0123";
    digitsToStart(s);
    ASSERT_STRING("0123Walk", s);
}

void test_digitsToStart_digitsInWord(){
    char s[] = "Wa1lk023";
    digitsToStart(s);
    ASSERT_STRING("1023Walk", s);
}

void test_digitsToStart(){
    test_digitsToStart_noDigits();
    test_digitsToStart_withSpaces();
    test_digitsToStart_digitsPerWord();
    test_digitsToStart_digitsInWord();
}

void test_replacesNumbersWithSpaces_emptyLine(){
    char s[MAX_STRING_SIZE] = "";
    char s1[MAX_STRING_SIZE];
    replacesNumbersWithSpaces(s, s1);
    ASSERT_STRING("", s1);
}

void test_replacesNumbersWithSpaces_noDigits(){
    char s[MAX_STRING_SIZE] = "Word";
    char s1[MAX_STRING_SIZE];
    replacesNumbersWithSpaces(s, s1);
    ASSERT_STRING("Word", s1);
}

void test_replacesNumbersWithSpaces_onlyDigits(){
    char s[MAX_STRING_SIZE] = "0123";
    char s1[MAX_STRING_SIZE];
    replacesNumbersWithSpaces(s, s1);
    ASSERT_STRING("      ", s1);
}

void test_replacesNumbersWithSpaces_digitsInWord(){
    char s[MAX_STRING_SIZE] = "e1up0hor2ia";
    char s1[MAX_STRING_SIZE];
    replacesNumbersWithSpaces(s, s1);
    ASSERT_STRING("e uphor  ia", s1);
}

void test_replacesNumbersWithSpaces(){
    test_replacesNumbersWithSpaces_emptyLine();
    test_replacesNumbersWithSpaces_noDigits();
    test_replacesNumbersWithSpaces_onlyDigits();
    test_replacesNumbersWithSpaces_digitsInWord();
}

void test_replace_allEmpty(){
    char s[MAX_STRING_SIZE] = "";
    char *word1 = "";
    char *word2 = "";
    replace(s, word1, word2);
    ASSERT_STRING("", s);
}

void test_replace_lineEmpty(){
    char s[MAX_STRING_SIZE] = "";
    char *word1 = "hey";
    char *word2 = "yeh";
    replace(s, word1, word2);
    ASSERT_STRING("", s);
}

void test_replace_oneReplace(){
    char s[MAX_STRING_SIZE] = "aaa bbb ccc aaa";
    char *word1 = "aaa";
    char *word2 = "hey";
    replace(s, word1, word2);
    ASSERT_STRING("hey bbb ccc hey", s);
}

void test_replace_manyReplac(){
    char s[MAX_STRING_SIZE] = "hello world hello";
    char *word1 = "hello";
    char *word2 = "hey";
    replace(s, word1, word2);
    ASSERT_STRING("hey world hey", s);
}

void test_replace_wordNotInString(){
    char s[MAX_STRING_SIZE] = "hello world hello";
    char *word1 = "aaa";
    char *word2 = "hey";
    replace(s, word1, word2);
    ASSERT_STRING("hello world hello", s);
}

void test_replace(){
    test_replace_allEmpty();
    test_replace_lineEmpty();
    test_replace_oneReplace();
    test_replace_manyReplac();
    test_replace_wordNotInString();
}

void test_areWordsOrdered_lineEmpty(){
    char s[] = "";
    assert(areWordsOrdered(s) == 1);
}

void test_areWordsOrdered_oneWord(){
    char s[] = "eyes";
    assert(areWordsOrdered(s) == 1);
}

void test_areWordsOrdered_equalWord(){
    char s[] = "breathe breathe";
    assert(areWordsOrdered(s) == 1);
}

void test_areWordsOrdered_unorderedString(){
    char s[] = "banana apple cherry";
    assert(areWordsOrdered(s) == 0);
}

void test_areWordsOrdered(){
    test_areWordsOrdered_lineEmpty();
    test_areWordsOrdered_oneWord();
    test_areWordsOrdered_equalWord();
    test_areWordsOrdered_unorderedString();
}

void test_howManyWordsPalindromes_stringEmpty(){
    char s[] = "";
    assert(howManyWordsPalindromes(s) == 0);
}

void test_howManyWordsPalindromes_onePalindrome(){
    char s[] = "pop";
    assert(howManyWordsPalindromes(s) == 1);
}

void test_howManyWordsPalindromes_manyPalindrome(){
    char s[] = "pop,kayak";
    assert(howManyWordsPalindromes(s) == 2);
}

void test_howManyWordsPalindromes_noPalindrome(){
    char s[] = "tip, kayak";
    assert(howManyWordsPalindromes(s) == 1);
}

void test_howManyWordsPalindromes_oneSymbol(){
    char s[] = "a";
    assert(howManyWordsPalindromes(s) == 1);
}

void test_howManyWordsPalindromes() {
    test_howManyWordsPalindromes_stringEmpty();
    test_howManyWordsPalindromes_onePalindrome();
    test_howManyWordsPalindromes_manyPalindrome();
    test_howManyWordsPalindromes_noPalindrome();
    test_howManyWordsPalindromes_oneSymbol();
}

void test_mergeString_stringsEmpty(){
    char s1[] = "";
    char s2[] = "";
    char result[100] = "";
    mergeStrings(s1, s2, result);
    ASSERT_STRING("", result);
}

void test_mergeString_secondStringsEmpty(){
    char s1[] = "All the file is gone";
    char s2[] = "";
    char result[100] = "";
    mergeStrings(s1, s2, result);
    ASSERT_STRING("All the file is gone", result);
}

void test_mergeString_fistStringsEmpty(){
    char s1[] = "";
    char s2[] = "All the file is gone";
    char result[100] = "";
    mergeStrings(s1, s2, result);
    ASSERT_STRING("All the file is gone", result);
}

void test_mergeString_equalLenString(){
    char s1[] = "apple banana cherry";
    char s2[] = "dog cat labs";
    char result[100] = "";
    mergeStrings(s1, s2, result);
    ASSERT_STRING("apple dog banana cat cherry labs", result);
}

void test_mergeString_equalString(){
    char s1[] = "a a a";
    char s2[] = "a a a";
    char result[100] = "";
    mergeStrings(s1, s2, result);
    ASSERT_STRING("a a a a a a", result);
}

void test_mergeString(){
    test_mergeString_stringsEmpty();
    test_mergeString_secondStringsEmpty();
    test_mergeString_fistStringsEmpty();
    test_mergeString_equalLenString();
    test_mergeString_equalString();
}

void test_reverseWords_stringsEmpty(){
    char p[MAX_STRING_SIZE] = "";
    reverseWords(p);
    ASSERT_STRING( "", p);
}

void test_reverseWords_oneSymbol(){
    char p[MAX_STRING_SIZE] = "a";
    reverseWords(p);
    ASSERT_STRING( "a", p);
}

void test_reverseWords_equalSymbols(){
    char p[MAX_STRING_SIZE] = "a a a";
    reverseWords(p);
    ASSERT_STRING( "a a a", p);
}

void test_reverseWords_difWords(){
    char p[MAX_STRING_SIZE] = "apple banana cherry";
    reverseWords(p);
    ASSERT_STRING( "cherry banana apple", p);
}

void test_reverseWords(){
    test_reverseWords_stringsEmpty();
    test_reverseWords_oneSymbol();
    test_reverseWords_equalSymbols();
    test_reverseWords_difWords();
}

void test_getWordBeforeFirstWordWithA(){
    WordDescriptor word;
    char s1[] = "";
    assert(getWordBeforeFirstWordWithA(s1, &word) == EMPTY_STRING);

    char s2[] = "ABC";
    assert(getWordBeforeFirstWordWithA(s2, &word) == FIRST_WORD_WITH_A);

    char s3[] = "BC A";
    assert(getWordBeforeFirstWordWithA(s3, &word) == WORD_FOUND);

    char s4[] = "B Q WE YR OW  IUWR";
    assert(getWordBeforeFirstWordWithA(s4, &word) == NOT_FOUND_A_WORD_WITH_A);
}

void test(){
    test_removeNonLetters();
    test_removeExtraSpaces();
    test_digitsToStart();
    test_replacesNumbersWithSpaces();
    test_replace();
    test_areWordsOrdered();
    test_howManyWordsPalindromes();
    test_mergeString();
    test_reverseWords();
    test_getWordBeforeFirstWordWithA();
}

int main(){
    test();
}