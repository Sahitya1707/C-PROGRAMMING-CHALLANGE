#include <stdio.h>
int main(){
char c[20],s[15],g[10] ;
int a;
printf ("Enter your name \n");
scanf ("%s",c);

printf ("Enter your surname \n");
scanf ("%s",s);

printf ("Enter your age \n"); // (in no.) 
scanf ("%d",&a);

printf ("Enter your gender  \n"); //  (male/female/others)
scanf ("%s",g);

printf("Here is the detail of you \n");
printf("Name: %s %s \n",c,s);
printf("Age: %d \n",a);
printf("Gender: %s \n",g);

}