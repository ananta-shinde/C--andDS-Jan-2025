#include<stdio.h>
int main(int argc, char const *argv[])
{
    int nums[5]={20,15,45,55,80};
    int* marks;
    marks = nums;
    nums[0] = 50;
    printf("%d\n",nums[0]);
    printf("%d\n",marks[0]);


    return 0;
}
