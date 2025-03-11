#include<stdio.h>

// resturn_type identifier (agruments){ // body}
int addtion(int n1,int n2){
    return n1+n2;
}

int multiply(int n1,int n2){
    return n1*n2;
}
int main(int argc, char const *argv[])
{
    int n1,n2,result;
    printf("Enter a number :");
    scanf("%d",&n1);
    printf("Enter a number:");
    scanf("%d",&n2);
    result = multiply(n1,n2);
    printf("%d",result);

   
    return 0;
}
