#include<stdio.h>
int main(int argc, char const *argv[])
{
    // declaration of an array
    int numbers[5];
   
    for(int i=0;i<5;i++){
        printf("Enter marks :");
        scanf("%d",&numbers[i]);
    }

    int largest = numbers[0];
    for(int i=0;i<5;i++){
       if(numbers[i] > largest) {
           largest = numbers[i];
       }
    }

    printf("Largest value is :%d",largest);

    return 0;
}
