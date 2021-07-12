#include <stdio.h>
int main()
{
int i=1,n,sum=0;
printf("Enter the no \n");
scanf("%d",&n);
for(int i=1; i<=n; i++)
{

sum +=i;

}

printf("Sum of 1 to %d is %d",n,sum);
    return 0;
}
