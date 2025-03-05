#include<stdio.h>
#include<math.h>
bool isEven(int n){
    if(n%2 == 0){
        return true;
    }else{
        return false;
    }
}

float addition(float n1,float n2){
    return n1+n2;
}


float calculateSimpleIntrest(float p,float r,float n){
     return (p*r*n)/100;
}
float calculateCompundIntrest(float p,float r,float n){
     return p*pow((1+(r/100)),n);
}

char getGrades(float marks){
    if(marks < 50){
       return 'F';
    }else if(marks>=50 && marks<=60){
        return 'B';
    }else if(marks>60 && marks<=75){
       return 'A';
    }else{
        return 'A';
    }
 
}
int main(int argc, char const *argv[])
{
    float marks = 65.54;
    char grade = getGrades(marks);
    printf("%c",grade);
    return 0;
}
