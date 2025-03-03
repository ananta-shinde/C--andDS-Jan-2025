#include<stdio.h>

int addNumbers(int n1,int n2){
    int result;
    result = n1+n2;
   return result;
}

int main(int argc, char const *argv[])
{
    int n1,n2,result;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter a number :");
    scanf("%d",&n2);
    result = addNumbers(n1,n2);
    printf("%d",result);
    result = addNumbers(20,100);
     printf("%d",result);
     printf("smaple message \n");
     addNumbers(50,56);
       
   
    return 0;
}
