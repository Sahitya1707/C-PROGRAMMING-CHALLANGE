#include <stdio.h>
int main(){
float pi, r, area;
pi = 3.14;
printf("Enter the value of radius the circle \n");
scanf("%f",&r);

area = (pi * r * r);
printf("Area of circle is %.2f \n",area);

    return 0;
}