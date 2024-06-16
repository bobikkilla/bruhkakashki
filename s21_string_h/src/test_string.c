#include "s21_string.h"

int main() {
    char str_dest[16] = "kakuli";
    char str_src[6] = "pisuli";
    s21_strncat(str_dest, str_src, 56);
    printf("%s\n", str_dest);
    return 0;
}

// вроде довёл до ума strncat свой но надо тестить :(