//Check Palindrome or not

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char s[30],temp[30];
	int i,j,flag=0;
	printf("Enter the String:");
	scanf("%[^\n]",s);
	int len = strlen(s);
	for(i=0,j=len-1;i<j;i++,j--){
		if(s[i] == s[j]){
			continue;
		}
		else{
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		strcpy(temp,strrev(s));
		strrev(s);
		printf("\nits not a palindrome,so the palindrome text is %s",strcat(s,temp));
	}
	else{
		printf("Palindrome");
	}
	
}
