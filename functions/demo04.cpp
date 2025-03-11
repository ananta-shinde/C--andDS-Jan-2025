#include<stdio.h>

void printArray(int arr[],int capacity){
     for(int i=0;i<capacity;i++){
        printf("%d\t",arr[i]);
    }
}

void printSumofArray(int arr[],int capacity)
{
     int sum=0;
    for(int i=0;i<capacity;i++){
       sum =sum+arr[i];
    }
    printf("%d",sum);
}

int main(int argc, char const *argv[])
{
    int numbers[5];
    int marks[3] = {20,45,56};
    for(int i=0;i<5;i++){
        printf("Enter a number :");
        scanf("%d",&numbers[i]);
    }

    

    

   
   


   
   
    return 0;
}
