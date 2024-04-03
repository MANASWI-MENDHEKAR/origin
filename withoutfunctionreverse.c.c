#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    int i,j,len=0;
    printf("enter the first string:");
    scanf("%s",&s1);
    printf("enter the second string:");
    scanf("%s",&s2);
    for(i=0;s1[i]!='\0';i++){
    len++;
    }
    for(j=0;s2[j]!='\0';i++,j++){
        s1[i]=s2[j];
    }
    s1[i]='\0';
    printf("after concatination string is %s\n",s1);
}