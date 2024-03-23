#include<stdio.h>
void print(int n){
    if(n==0) return;
    print(n-1);
    printf("%d\n",n);
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d\n",&n);
    print(n);
    return 0;
}
