// Accept three numbers from user,
// print largest number out of three

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,n3;
    printf("Enter a number :");
    scanf("%d",&n1);
    printf("Enter a number :");
    scanf("%d",&n2);
    printf("Enter a number :");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3){
        printf("largest number is :%d",n1);
    }
    if(n2>n1 && n2>n3){
        printf("largest number is :%d",n2);
    }
    if(n3>n1 && n3>n2){
        printf("largest number is :%d",n3);
    } 
    return 0;
}
