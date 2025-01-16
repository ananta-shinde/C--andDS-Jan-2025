#include<stdio.h>
#define pi 3.14
int main(int argc, char const *argv[])
{
    // getting data ready
    float r,result;
    printf("Enter radius of circle :");
    scanf("%f",&r);

    // calculation or operation
    result = pi*r*r;

    // output
    printf("Area of circle is :%f",result);
    
    return 0;
}
