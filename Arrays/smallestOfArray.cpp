#include<stdio.h>
int main(int argc, char const *argv[])
{
    // declaration of an array
    int numbers[5];
   
    for(int i=0;i<5;i++){
        printf("Enter marks :");
        scanf("%d",&numbers[i]);
    }

    int smallest = numbers[0];
    for(int i=0;i<5;i++){
       if(numbers[i] < smallest) {
           smallest = numbers[i];
       }
    }

    printf("Smallest value is :%d",smallest);

    return 0;
}
