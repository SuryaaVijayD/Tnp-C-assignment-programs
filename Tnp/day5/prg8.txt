//8. To find a permutation of given value from user
#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++) {
            swap(&str[start], &str[i]);
            permute(str, start + 1, end);  
            swap(&str[start], &str[i]);  
        }
    }
}

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);  
    int n = strlen(str);

    if (n == 0) {
        printf("Cannot permute an empty string.\n");
    } else {
        permute(str, 0, n - 1);
    }

    return 0;
}
