#include <stdio.h>
int main(){
 int a,sum =0;
 a = 10;
printf("The first 10 natural number is : \n");
for (int i = 1; i<=a ; i++) {
 sum += i;
 printf("%d ",i);

}
printf("\n");
printf("Sum of first 10 Natural no. is: %d \n",sum );
    return 0;
}