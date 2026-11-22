#include <stdio.h>

int main(void) {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        return 1;
    }

    int n;
    if (fscanf(fin, "%d", &n) == 1) {
        const char digits[] = "2468";
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                // Нечётные позиции (1-я, 3-я, 5-я...): заглавные буквы по порядку
                fputc('A' + (i / 2), fout);
            } else {
                // Чётные позиции (2-я, 4-я, 6-я...): чётные цифры 2, 4, 6, 8 по кругу
                fputc(digits[(i / 2) % 4], fout);
            }
        }
        fputc('\n', fout);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
