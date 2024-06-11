#include <stdio.h>
void r(char *str, int i, int n) {
    if (i == n) {
        return;
    }
    char temp = str[ii
    r(str, i + 1, n);
    printf("%c", temp);
}

int main() {
    char a[] = "bharath";
    int n = sizeof(a) / sizeof(a[0]) - 1;
    r(a, 0, n);
    return 0;
}

