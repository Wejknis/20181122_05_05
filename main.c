#include <stdio.h>

int main() {
    char ciag[] = "&@";

    for(int i = sizeof(ciag)-1 ; i>=0 ; i--) {
    printf("%c", ciag[i]);
    }
    return 0;
}