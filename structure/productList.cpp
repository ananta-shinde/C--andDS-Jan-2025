// list of products
#include<stdio.h>
#include<stdlib.h>
struct Product
{
    int id;
    char name[20];
    float price;
};



int main(int argc, char const *argv[]){
    int num;
    Product product_list[5];

    for(int i=0;i<5;i++){
        printf("enter name :");
        scanf("%s",&product_list[i].name);
        printf("enter id :");
        scanf("%d",&product_list[i].id);
        printf("enter price :");
        scanf("%f",&product_list[i].price);
    }
    printf("\n *********************************\n");
    printf("Id    name     Price\n");
    for(int i=0;i<5;i++){
         Product p =product_list[i];
         printf("%d   %s   %f\n",p.id,p.name,p.price);
    }
 
    FILE* myfile = fopen("data.txt","w");
    for(int i=0;i<5;i++){
         Product p =product_list[i];
         fprintf(myfile,"%d   %s   %f\n",p.id,p.name,p.price);
    }
   
    
    


   


    return 0;
}

