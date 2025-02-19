// accept and store details of 5 students
#include<stdio.h>
struct Student
{
   int rollNo;
   float phy;
   float chem;
   float math; 
   float obtained_total;
   float percentage;
   int rank = 0;
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
        float obatinedMarks = stud_list[i].phy+stud_list[i].chem+stud_list[i].math;
        float percentage = (obatinedMarks/300)*100;
        stud_list[i].obtained_total = obatinedMarks;
        stud_list[i].percentage = percentage;
   }   

   int current_rank = 1;
   for(int j=0;j<5;j++){
        int largestIndex = 0;
        for(int i=0;i<5;i++){
           if(stud_list[i].rank ==0 && stud_list[i].obtained_total > stud_list[largestIndex].obtained_total)
           {
               largestIndex = i;
           }
        }
        stud_list[largestIndex].rank = current_rank;
        current_rank++;
   }
   
   printf("\n************************************\n");
   printf("roll no      physics     chemistry      maths     obtained      percentage\n");
   for(int i=0;i<5;i++){
        printf("%d     %f     %f     %f    %f    %f   %d\n",stud_list[i].rollNo,stud_list[i].phy,stud_list[i].chem,stud_list[i].math,stud_list[i].obtained_total,stud_list[i].percentage,stud_list[i].rank);
   }
   

   
    return 0;
}
