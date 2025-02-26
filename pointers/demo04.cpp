#include<stdio.h>
int main(int argc, char const *argv[])
{
    int nums[5]={12,23,56,45,55};
    
    int marks[5];
    // marks = nums;
    for(int i=0;i<5;i++){
        marks[i]=nums[i]; 
    }
    nums[0] = 50;
    printf("%d\n",nums[0]);
    printf("%d\n",marks[0]);
    return 0;
}
