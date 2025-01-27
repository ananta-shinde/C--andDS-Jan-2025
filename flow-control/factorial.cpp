// WAP to calculate factorial of a number
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,result =1;
    printf("enter a number :");
    scanf("%d",&num);
    while(num>0){
        result = result*num;
        num--;
    } 

    printf("Factorial of a number is :%d",result);

    return 0;
}
