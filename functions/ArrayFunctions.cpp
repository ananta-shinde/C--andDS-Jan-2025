#include<stdio.h>
#include"arrayfun.h"

int main(int argc, char const *argv[])
{
    int data[5];
    fillArray(data,5);
    int avg = avgOfArray(data,5);
    printf("sum :%d",avg);


    return 0;
}
