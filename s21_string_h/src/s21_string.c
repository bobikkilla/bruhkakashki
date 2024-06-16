#include "s21_string.h"

#include <stdlib.h>

size_t s21_strlen(const char *str) {
    size_t length = 0;
    for (; *(str + length); length++)
        ;
    return length;
}

int s21_strcmp(char *str1, char *str2) {
    for (; *str1 && *str1 == *str2; str1++, str2++)
        ;
    return *str1 - *str2;
}
char *s21_strcpy(char *dst, const char *src) {
    for (; *src != '\0'; src++, dst++) {
        *dst = *src;
    }
    return dst;
}
char *s21_strcat(char *s, const char *append) {
    char *save = s;
    for (; *s; ++s)
        ;
    while ((*s++ = *append++))
        ;
    return (save);
}
char *s21_strchr(const char *p, int ch) {
    char c;
    c = ch;
    for (;; ++p) {
        if (*p == c) return ((char *)p);
        if (*p == '\0') return (NULL);
    }
}

char *s21_strstr(char *string, char *substring) {
    char *a, *b;
    b = substring;
    if (*b == 0) {
        return string;
    }
    for (; *string != 0; string += 1) {
        if (*string != *b) {
            continue;
        }
        a = string;
        while (1) {
            if (*b == 0) {
                return string;
            }
            if (*a++ != *b++) {
                break;
            }
        }
        b = substring;
    }
    return NULL;
}

char *s21_strtok(char *str, const char *delim) {
    static char *current_ptr = NULL;
    if (str) {
        current_ptr = str;
    } else {
        if (!current_ptr) return NULL;
    }

    // Пропускаем начальные разделители
    char *begin = current_ptr;
    while (*begin) {
        const char *d = delim;
        while (*d) {
            if (*begin == *d) {
                break;
            }
            d++;
        }
        if (*d == '\0') break;  // если текущий символ не разделитель, выходим из цикла
        begin++;
    }

    if (*begin == '\0') {
        current_ptr = begin;
        return NULL;
    }

    // Определяем конец токена
    char *end = begin;
    while (*end) {
        const char *d = delim;
        while (*d) {
            if (*end == *d) {
                break;
            }
            d++;
        }
        if (*d != '\0') break;  // если нашли разделитель, выходим из цикла
        end++;
    }

    if (*end == '\0') {
        current_ptr = end;
        return begin;
    }

    *end = '\0';
    current_ptr = end + 1;
    return begin;
}
