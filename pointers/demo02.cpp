#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a= 50;
    char p = 'P';
    printf("%d\n",a+1);
    printf("%d\n",&a);
    printf("%d\n",&a+1);
    printf("%d\n",&p);
    printf("%d\n",&p+1);
    return 0;
}
