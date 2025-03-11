#include<stdio.h>
#include"area.h"
int main(int argc, char const *argv[])
{
    float w,l;
    printf("enter width:");
    scanf("%f",&w);
     printf("enter length:");
    scanf("%f",&l);
    float result =areaofRectangle(w,l);
    printf("Result :%f",result);

    return 0;
}
