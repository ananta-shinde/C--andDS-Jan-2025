#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 20;
    int* ptr;
    ptr = &a;
    int b = 30;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    ptr = &b;
    printf("%d\n",*ptr);



    return 0;
}
