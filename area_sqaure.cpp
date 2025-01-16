#include<stdio.h>
int main(int argc, char const *argv[])
{
    float width, result;
    printf("Enter width of sqaure :");
    scanf("%f",&width);

    result = width* width;

    printf("Area of square is : %f",result);

    return 0;
}
