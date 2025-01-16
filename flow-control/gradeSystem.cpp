// accept percentage marks of a student,
// print his corresponding grade
// lessthan 50 - F
// 50 - 60 => B
// 61-75 => A
// greater than 75 => A++

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float marks;
    printf("Enter your marks in percentage : ");
    scanf("%f",&marks);

    if(marks < 50){
        printf("You hava Failed with F grade");
    }else if(marks>=50 && marks<=60){
        printf("You hava passed with B grade");
    }else if(marks>60 && marks<=75){
        printf("You hava passed with A grade");
    }else{
        printf("You hava passed with A++ grade");
    }
 
    return 0;
}
