#ifndef STRING_H
#define STRING_H

/*This macro is the value of a null pointer constant.
 */
#define NULL ((void *)0)

/*This is the unsigned integral type and is the result of the sizeof keyword. */
typedef unsigned long int size_t;

#include <stdio.h>
#include <string.h>

/*string.h functions*/

/*Searches for the first occurrence of the character c (an unsigned char) in the
 * first n bytes of the string pointed to, by the argument str. */
void *s21_memchr(const void *str, int c, size_t n);

/*Compares the first n bytes of str1 and str2. */
int s21_memcmp(const void *str1, const void *str2, size_t n);

/*Copies n characters from src to dest. */
void *s21_memcpy(void *dest, const void *src, size_t n);

/*Copies the character c (an unsigned char) to the first n characters of the
 * string pointed to, by the argument str.*/
void *s21_memset(void *str, int c, size_t n);

/*Appends the string pointed to, by src to the end of the string pointed to, by
 * dest up to n characters long. */
char *s21_strncat(char *dest, const char *src, size_t num);

/*Searches for the first occurrence of the character c (an unsigned char) in the
 * string pointed to, by the argument str. */
char *s21_strchr(const char *str, int c);

/*Compares at most the first n bytes of str1 and str2. */
int s21_strncmp(const char *str1, const char *str2, size_t n);

/*Copies up to n characters from the string pointed to, by src to dest. */
char *s21_strncpy(char *dest, const char *src, size_t n);

/*Calculates the length of the initial segment of str1 which consists entirely
 * of characters not in str2. */
size_t s21_strcspn(const char *str1, const char *str2);

/*Searches an internal array for the error number errnum and returns a pointer
 * to an error message string. You need to declare macros containing arrays of
 * error messages for mac and linux operating systems. Error descriptions are
 * available in the original library. Checking the current OS is carried out
 * using directives. */
char *s21_strerror(int errnum);

/*Computes the length of the string str up to but not including the terminating
null character.
--NULL leads to segfault, but original string.h behave the same*/
size_t s21_strlen(const char *str);

/* Finds the first character in the string str1 that matches any character
 * specified in str2. */
char *s21_strpbrk(const char *str1, const char *str2);

/*Searches for the last occurrence of the character c (an unsigned char) in the
 * string pointed to by the argument str.*/
char *s21_strrchr(const char *str, int c);

/*Finds the first occurrence of the entire string needle (not including the
 * terminating null character) which appears in the string haystack.*/
char *s21_strstr(char *haystack, char *needle);

/*Breaks string str into a series of tokens separated by delim.*/
char *strtok(char *str, const char *delim);

#endif