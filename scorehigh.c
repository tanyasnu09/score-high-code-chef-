// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a,b,c,d;
   printf("enter a\n enter b \n enter c\n enter d");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if (a>b && a>c &&  a >d)
   {
       printf("max score is %d",a);
   }
  else  if (b>a && b>c && b >d)
   {
       printf("max score is %d",b);
   }
  else if (c>b && c>a && c>d)
   {
       printf("max score is %d",c);
   }
   else
   {
       printf("max score is %d",d);
   }
}