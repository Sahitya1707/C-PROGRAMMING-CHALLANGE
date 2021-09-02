#include <stdio.h>


int main(){
float base,height, area;
printf("Enter the value of base the traingle \n");
scanf("%f",&base);
printf("Enter the value of height the traingle \n");
scanf("%f",&height);
area = (base * height)/2;
printf("Area of triangle is %.2f \n",area);

    return 0;
}