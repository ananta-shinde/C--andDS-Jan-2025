// accept and store details of 5 students
#include<stdio.h>
struct Student
{
   int rollNo;
   float phy;
   float chem;
   float math;
};

int main(int argc, char const *argv[])
{
    Student stud_list[5];

   for(int i=0;i<5;i++){
        printf("Enter roll no of student:");
        scanf("%d",&stud_list[i].rollNo);
        printf("Enter marks of physics:");
        scanf("%f",&stud_list[i].phy);
        printf("Enter marks of chem:");
        scanf("%f",&stud_list[i].chem);
        printf("Enter marks of math:");
        scanf("%f",&stud_list[i].math);
   }

   printf("\n************************************\n");
   printf("roll no      physics     chemistry      maths\n");
   for(int i=0;i<5;i++){
        printf("%d     %f     %f     %f\n",stud_list[i].rollNo,stud_list[i].phy,stud_list[i].chem,stud_list[i].math);
   }
   

   
    return 0;
}
