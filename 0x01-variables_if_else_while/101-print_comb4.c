#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            for (k = j + 1; k < 10; k++) {
                int n1 = i / 4;
                int n2 = (i / 2) % 2;
                int n3 = i % 2;
                int n4 = j / 4;
                int n5 = (j / 2) % 2;
                int n6 = j % 2;
                int n7 = k / 4;
                int n8 = (k / 2) % 2;
                int n9 = k % 2;

                putchar(n1 + '0');
                putchar(n2 + '0');
                putchar(n3 + '0');
                putchar(',');
                putchar(' ');
                putchar(n4 + '0');
                putchar(n5 + '0');
                putchar(n6 + '0');
                putchar(',');
                putchar(' ');
                putchar(n7 + '0');
                putchar(n8 + '0');
                putchar(n9 + '0');

                if (i != 6 || j != 7 || k != 8) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    return 0;
}

