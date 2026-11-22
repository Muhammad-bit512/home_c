#include <stdio.h>

int main(void) {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    if (fin == NULL || fout == NULL) {
        return 1;
    }

    char w1[105], w2[105];
    if (fscanf(fin, "%104s %104s", w1, w2) == 2) {
        int cnt1[26] = {0};
        int cnt2[26] = {0};

        for (int i = 0; w1[i] != '\0'; i++) {
            cnt1[w1[i] - 'a']++;
        }

        for (int i = 0; w2[i] != '\0'; i++) {
            cnt2[w2[i] - 'a']++;
        }

        int first = 1;
        for (int i = 0; i < 26; i++) {
            if (cnt1[i] == 1 && cnt2[i] == 1) {
                if (!first) {
                    fprintf(fout, " ");
                }
                fprintf(fout, "%c", 'a' + i);
                first = 0;
            }
        }
        fprintf(fout, "\n");
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
