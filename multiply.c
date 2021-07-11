#include <stdio.h>
int main ()
{
int number,i,result;
printf("Enter your number \n");
scanf("%d",&number);

for (i=1; i<=10; i++ )
{
    result=number*i;
printf ("multiplication table of %d * %d = %d \n",number,i,result);
}
    return 0;
}