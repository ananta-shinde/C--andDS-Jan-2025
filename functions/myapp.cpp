#include<stdio.h>
#include"arrayfun.h"
int main(int argc, char const *argv[])
{
    int marks[6];
    fillArray(marks,6);
    int sum = sumOfArray(marks,6);
    int avg = avgOfArray(marks,6);
    printf("sum = %d, avg = %d",sum,avg);
    return 0;
}
