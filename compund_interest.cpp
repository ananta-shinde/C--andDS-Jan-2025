#include<stdio.h>
int main(int argc, char const *argv[])
{
    float p,r,n,ci;
    printf("Enter principle ammount :");
    scanf("%f",&p);
    printf("Enter rate of interest :");
    scanf("%f",&r);
    printf("Enter no of years :");
    scanf("%f",&n);

    ci = p*(1+(r/100));

    printf("interest earned is : %f",ci);

    return 0;
}
