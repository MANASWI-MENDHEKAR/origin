#include<stdio.h>
struct student{
    char FirstName[5];
    int roll;
    float marks;
}s[5];
int main(){
    int i;
    printf("Enter information of students:\n");
    for(i=0;i<5;i++){
        s[i].roll=i+1;
        printf("\nFor roll number%d\n",s[i].roll);
        printf("Enter First Name:");
        scanf("%s",s[i].FirstName);
        printf("enter marks:");
        scanf("%f",&s[i].marks);
        }
        printf("displaying information:\n\n");
         for(i=0;i<5;i++){
        printf("roll number%d\n",i+1);
        printf("First Name:");
        puts(s[i].FirstName);
        printf("marks:%1.f",s[i].marks);
        printf("\n");

}
return 0;
}


