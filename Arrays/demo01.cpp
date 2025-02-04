#include<stdio.h>
int main(int argc, char const *argv[])
{
    // declaration of array
    int marks[6];
    // marks[0] = 50;

    // filling an array
    for(int i=0;i<6;i++){
        printf("enter a number :");
        scanf("%d",&marks[i]);
    }

    // printing an array
    for(int i=0;i<6;i++){
        printf("%d\t",marks[i]);
    }

   
    
    return 0;
}
