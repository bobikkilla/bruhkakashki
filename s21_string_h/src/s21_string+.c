/* Fix the warnings and look through all function from stogshik
start tests?*/
#include "s21_string.h"

size_t s21_strlen(const char *str) {
  size_t count = 0;
  while (str[count] != '\0') {
    count++;
  }
  return count;
}

char *s21_strncat(char *dest, const char *src, size_t num) {
  size_t i = 0;
  size_t len_dest = s21_strlen(dest);
  if (num > (s21_strlen(dest) + s21_strlen(src))) {
    num = s21_strlen(src);
  }
  while ((src[i] != '\0') && (i < num)) {
    dest[len_dest + i] = src[i];
    i++;
  }
  dest[len_dest + i] = '\0';
  return dest;
}

char *s21_strpbrk(const char *str1, const char *str2) {
  char *res = NULL;
  char *ptr = (char *)str2;
  while (*str1) {
    if (*ptr) {
      if (*str1 == *ptr++) {
        res = (char *)str1;
        break;
      }
    } else {
      *str1++;
      ptr = (char *)str2;
    }
  }
  return res;
}

size_t s21_strcspn(const char *str1, const char *str2) {
  size_t count = 0;
  char *ptr = (char *)str2;
  while (*str1) {
    if (*ptr) {
      if (*str1 == *ptr++) {
        break;
      }
    } else {
      *str1++;
      count++;
      ptr = (char *)str2;
    }
  }
  return count;
}

char *s21_strncpy(char *dest, const char *src, size_t n) {
  char *ptr = dest;
  while (n-- && *src) {
    *ptr++ = *src++;
  }
  *ptr = '\0';
  return dest;
}

int s21_strncmp(const char *str1, const char *str2, size_t n) {
  int res = 0;
  while (n-- && res == 0 && *str1 && *str2) {
    if (*str1++ != *str2++) {
      res = *--str1 - *--str2;
    }
  }
  return res;
}

char *s21_strchr(const char *str, int c) {
  char *res = NULL;
  while (*str++) {
    if (*str == c) {
      res = (char *)str;
    }
  }
  return res;
}

void *s21_memset(void *str, int c, size_t n) {
  unsigned char *ptr = str;
  while (n--) {
    *ptr++ = c;
  }
  return ((void *)ptr);
}

void *s21_memcpy(void *dest, const void *src, size_t n) {
  const unsigned char *ptr_src = src;
  unsigned char *ptr_dest = dest;
  while (n--) {
    *ptr_dest++ = *ptr_src++;
  }
  return ((void *)ptr_dest);
}

int s21_memcmp(const void *str1, const void *str2, size_t n) {
  int res = 0;
  if (n != 0) {
    const unsigned char *ptr1 = str1, *ptr2 = str2;
    while (n-- && res == 0) {
      if (*ptr1++ != *ptr2++) {
        res = *--ptr1 - *--ptr2;
      }
    }
  }
  return res;
}

void *s21_memchr(const void *str, int c, size_t n) {
  void *res = NULL;
  if (n != 0) {
    const unsigned char *ptr = str;
    while (n-- && res == NULL) {
      if (*ptr++ == c) res = ((void *)--ptr);
    }
  }
  return res;
}
