#include<stdio.h>
int main(int argc, char const *argv[])
{
    char choice;
    printf("Do you want to print statement 3(Y/N):");
    scanf("%c",&choice);
    printf("statement 1\n");
    printf("statement 2\n");
    if(choice == 'Y' || choice == 'y'){
        printf("statement 3\n");
    }
  
    
    return 0;
}
