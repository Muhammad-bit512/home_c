#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        return 1;
    }

    char str[1005];
    if (fgets(str, sizeof(str), fin) != NULL) {
        size_t len = strlen(str);

        // Убираем переносы строк в конце файла
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[len - 1] = '\0';
            len--;
        }

        if (len > 0) {
            char last = str[len - 1];
            int first_out = 1;

            // Проходим до предпоследнего символа
            for (size_t i = 0; i < len - 1; i++) {
                if (str[i] == last) {
                    if (!first_out) {
                        fprintf(fout, " ");
                    }
                    fprintf(fout, "%zu", i);
                    first_out = 0;
                }
            }
            fprintf(fout, "\n");
        }
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
