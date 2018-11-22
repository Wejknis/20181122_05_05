#include <stdio.h>

int main() {
    int i = 0;
    char ciag[] = "Zesrała się bieda i piszczy";

    while (ciag[++i]){}
    printf("%d", i);

    return 0;
}