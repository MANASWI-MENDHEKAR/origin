#include<stdio.h>
int main()
{
  int start,end,count;
  printf("enter the start and end value");
  scanf("%d\t%d", &start,&end);
  for(int i=start;i<=end;i++)
  {
    count=0;
    for(int j=1;j<=i;j++)
    {
      if(i%j==0)
      {
        count=count+1;
        
        }

      }
      if(count==2)
      {
        printf("prime number : %d\n",i); 
      }
    }
    return 0;
  }




  