#include<stdio.h>
int main(int argc, char const *argv[])
{
    float width,height, result;
    printf("Enter width of Rectangle :");
    scanf("%f",&width);
    printf("Enter Height of Rectangle :");
    scanf("%f",&height);

    result = width* height;

    printf("Area of Rectangle is : %f",result);

    return 0;
}
