#include<stdio.h>
int main(int argc, char const *argv[])
{
    // declaration of an array
    int numbers[5];
   
    for(int i=0;i<5;i++){
        printf("Enter marks :");
        scanf("%d",&numbers[i]);
    }

    int sum = 0;
    for(int i=0;i<5;i++){
       sum =sum+numbers[i];
    }

    printf("Avg of array is : %d",sum/5);
    return 0;
}
