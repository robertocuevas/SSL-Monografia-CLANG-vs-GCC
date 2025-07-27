#include <stdio.h>
#include <string.h>

int suma_ascii(const char* str) {
    int total = 0;
    for (int i = 0; i < strlen(str); i++) {
        total += str[i];
    }
    return total;
}

int main() {
    char nombre[] = "CLANG vs GCC";
    printf("Suma ASCII: %d\n", suma_ascii(nombre));
    return 0;
}
