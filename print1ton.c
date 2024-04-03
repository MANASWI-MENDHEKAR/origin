#include<stdio.h>
int main(){
    char arr[50],n,i;
    printf("enter name:");
    scanf("%c",&n);
    for(i=0;i<50;i++){
        printf("%s",arr[i]);
    }
    printf("\n");
    for(i=50;i>=0;i--){
        printf("%s",arr[i]);
    }
    printf("\n");
    
    
    }