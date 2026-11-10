void print_digit(char s[]) {
    int mass[10] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int ind = s[i] - '0';
            mass[ind]++;
        }
    }

    for (int j = 0; j <= 9; j++) {
        if (mass[j] > 0) {
            printf("%d %d\n", j, mass[j]);
        }
    }
}
