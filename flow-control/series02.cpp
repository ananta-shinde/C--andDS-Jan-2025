// print series 1,6,11 ...... upto 500
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 1;
    while(num <=500){
        printf("%d\t",num);
        num = num +5;
    }
    
   
    return 0;
}
