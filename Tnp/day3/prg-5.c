//check if two strings are Anagram or not
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char a[30], b[30];
    int i, j, l1, l2;
    printf("Enter string1: ");
    scanf("%s", a);
    printf("Enter string2: ");
    scanf("%s", b);
    l1 = strlen(a);
    l2 = strlen(b);
    if (l1 == l2) {
        for (i = 0; i < l1; i++) {
            for (j = 0; j < l1 - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    char temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        for (i = 0; i < l2; i++) {
            for (j = 0; j < l2 - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    char temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
        printf("Sorted string1: %s\n", a);
        printf("Sorted string2: %s\n", b);
    } else {
        printf("Strings are not of equal length. Cannot compare.\n");
    }
    if(a==b){
        printf("\nAnagram");
    }
    else{
        printf("\nNot an Anagram");
    }
    return 0;
}
