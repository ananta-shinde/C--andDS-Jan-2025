// demostrate arithmatic oprstors by accepting two values from user
#include<stdio.h>

int main(int argc, char const *argv[])
{
    // getting data ready
    int n1,n2;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter a number :");
    scanf("%d",&n2);

    // operations
    printf("Addition : %d\n",n1+n2);
    printf("Substraction : %d\n",n1-n2);
    printf("Multiplication : %d\n",n1*n2);
    printf("Division : %d\n",n1/n2);
    printf("Remainder : %d\n",n1%n2);
    printf("Increment : %d\n",++n1);
    printf("Decrement : %d\n",--n2);


    return 0;
}
