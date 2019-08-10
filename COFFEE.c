#include<stdio.h>
#include<stdlib.h>
int main()
{
   int x,p,answer=0;
   scanf("%d%d",&x,&p);
   p=100-p;
   while(x>0)
   {
       answer=answer+x;
       x=(p*x)/100;
   }
   printf("%d",answer);
   return 0;
}
