#include<stdio.h>
int main(int argc, char const *argv[])
{
    float p,r,n,si;
    printf("Enter principle ammount :");
    scanf("%f",&p);
    printf("Enter rate of interest :");
    scanf("%f",&r);
    printf("Enter no of years :");
    scanf("%f",&n);

    si = (p*r*n)/100;

    printf("interest earned is : %f",si);

    return 0;
}
