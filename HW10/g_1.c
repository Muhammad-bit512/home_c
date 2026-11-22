#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        return 1;
    }

    char str[105];
    if (fgets(str, sizeof(str), fin) != NULL) {
        size_t len = strlen(str);
        
        // Удаляем незначимые переносы строк (\n и \r) в конце
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[len - 1] = '\0';
            len--;
        }

        fprintf(fout, "%s, %s, %s %zu\n", str, str, str, len);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
