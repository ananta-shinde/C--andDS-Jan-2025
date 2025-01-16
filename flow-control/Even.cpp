// Accept a number from user, 
//and print if it is even or odd

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n%2 == 0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
    
    
    return 0;
}
