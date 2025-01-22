// print all even numbers from 50 to 500
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 50;
    while(n<=500){
        if(n%2 != 0){
            printf("%d\t",n);
        }
        n++;
    }
    
    return 0;
}
