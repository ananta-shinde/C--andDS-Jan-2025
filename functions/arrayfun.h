#include<stdio.h>
void fillArray(int data[],int capacity){
     for(int i=0;i<capacity;i++){
        printf("enter a number:");
        scanf("%d",&data[i]);
    }
}

int sumOfArray(int data[],int capacity){
     int sum = 0;
    for(int i=0;i<capacity;i++){
        sum=sum+data[i];
    }
    return sum;
}

int avgOfArray(int data[],int capacity){
    int sum = sumOfArray(data,capacity);
    return sum/capacity;
}
