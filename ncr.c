#include<stdio.h>
#include<math.h>
int fact(int n){
int f=1;
for(int i=1;i<=n;i++){
    f*=i;
}
return f;
}
int ncr(int n , int r){
    return fact(n)/(fact (r)*fact(n-1));
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int r;
    printf("enter r:");
    scanf("%d",&r);
    int ans=ncr(n,r);
    printf("%d",ans);
}