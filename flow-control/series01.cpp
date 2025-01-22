// print numbers from 1 to 1000
#include<stdio.h>
int main(int argc, char const *argv[])
{

    int num = 1; // initialization
    int count;
    printf("Enter count :");
    scanf("%d",&count);
    while(num <=count){ // condition
        printf("%d\t",num);
        num++;// update
    }
    
    return 0;
}
