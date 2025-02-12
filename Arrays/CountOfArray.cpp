#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5] = {20,25,40,56,15};
    int count  = 0;
    for(int i=0;i<5;i++){
        if(numbers[i] >=40){
            count++;
        }
    }

    printf("Count of values greater than 40 is: %d ",count);
    return 0;
}
