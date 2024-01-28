//To print only digits from string using Array of Stack

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char string[20];
    int flag = 0;
    printf("Enter the string:");
    scanf("%19s",string);
    int len = strlen(string);
    for(int i=len-1;i>0;i--){
        if(isdigit(string[i])){
            flag = 1;
            printf("%c\n",string[i]);
        }
       
    }
    if(flag == 0){
        printf("No digit found");
    }
}

//Enter the string:suryaa
//No digit found

//Enter the string:vijay123
//3
//2
//1
