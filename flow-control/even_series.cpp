// print all even numbers from 50 to 500
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int lower;
    int upper;
   printf("Enter lower limit :");
   scanf("%d",&lower);
   printf("Enter upper limit :");
   scanf("%d",&upper);
    while(lower<=upper){
        if(lower%2 != 0){
            printf("%d\t",lower);
        }
        lower++;
    }
    
    return 0;
}
