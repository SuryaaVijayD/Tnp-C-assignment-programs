//Duplicate in string

#include<stdio.h>
void duplicate(char *string);
int main(){
char s[100];
printf("Enter the string:");
scanf("%s",s);
duplicate(s);
}
void duplicate(char *string){
int i,j,flag;
printf("Duplicate letters are:");
for(i=0;string[i]!='\0';i++){
flag = 0;
for(j=0;j<i;j++){
if(string[i] == string[j]){
flag = 1;
break;
}
}
if(flag==1){
continue;
}
for(j=i+1;string[j]!='\0';j++){
if(string[i] == string[j]){
printf("%c ",string[i]);
break;
}
}
}



//Enter the string:sarathas
//Duplicate letters are:s a 
