#include <stdio.h>
#include <string.h>

void f (const char *str) {
    int mass[10] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int ind = str[i] - '0';
            mass[ind]++;
        }
    }

    for (int j = 0; j <= 9; j++) {
        if (mass[j] > 0) {
            printf("%d %d\n", j, mass[j]);
        }
    }
}

int main() {
    char arr[1050];

    if (scanf("%1000s", arr) == 1) {
        f (arr);
    }

    return 0;
}
