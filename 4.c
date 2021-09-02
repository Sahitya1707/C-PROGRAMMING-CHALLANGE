#include <stdio.h>
int main() {
 float M, S, N, C, A, So, E, T, P;
 printf("Enter the marks you obtained in math out of 100 \n");
 scanf("%f", &M);
printf("Enter the marks you obtained in Science out of 100\n");
 scanf("%f", &S);
 printf("Enter the marks you obtained in Nepali out of 100 \n");
 scanf("%f", &N);
 printf("Enter the marks you obtained in Computer out of 100 \n");
 scanf("%f", &C);
 printf("Enter the marks you obtained in Account out of 100 \n");
 scanf("%f", &A);
 printf("Enter the marks you obtained in Social out of 100 \n");
 scanf("%f", &So);
 printf("Enter the marks you obtained in English out of 100 \n");
 scanf("%f", &E);
T = M+S+N+C+A+So+E;
printf("In percentage \n");

P = (T/700)*100;
printf("%.2f \n", P);
if (M<40 || S<40 || N<40 || C<40 || A<40 || So<40 || E<40){
printf("You are fail. \n");
}
else {
    printf("You are pass with percentage of %.2f \n",P);
}

    return 0;
}