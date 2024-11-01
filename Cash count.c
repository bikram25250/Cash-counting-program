#include<stdio.h>
#include<conio.h>
int main()
{
int b,c,d,e,f,g;
int m2,m3,m4,m5,m6,m7;
int res;
printf("\t---------CASH COUNTING PROGRAM---------");
printf("\n\t\t\tDesigned by - BIKRAM HALDAR ");
printf("\n\t\t\tCurrency    - INDIAN");
printf("\n\t\t\tDate        - %s",__DATE__);
printf("\n ---------------------------------------------------");
printf("\n\nRS/- 500 * ");
scanf("%d",&b);
m2=500*b;
printf("\tTotal : %d",m2);

printf("\nRS/- 200 * ");
scanf("%d",&c);
m3=200*c;
printf("\tTotal : %d",m3);

printf("\nRS/- 100 * ");
scanf("%d",&d);
m4=100*d;
printf("\tTotal : %d",m4);

printf("\nRS/- 50 * ");
scanf("%d",&e);
m5=50*e;
printf("\tTotal : %d",m5);

printf("\nRS/- 20 * ");
scanf("%d",&f);
m6=20*f;
printf("\tTotal : %d",m6);

printf("\nRS/- 10 * ");
scanf("%d",&g);
m7=10*g;
printf("\tTotal : %d",m7);

res=m2+m3+m4+m5+m6+m7;
printf("\n-------------------------------------------");
printf("\n\tTotal Amount : %d",res);
printf("\n\tThank you...");
printf("\n-------------------------------------------\n");
}