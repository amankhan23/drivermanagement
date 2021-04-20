#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int choice;

struct temp {
    char name[10];
    int driving_number;
    int mobile;
}add;
void addDriver(){
    FILE *ptr;
    ptr = fopen("record.txt","a+");
    printf("Enter Driver Name : ");
    scanf("%s",&add.name);
    printf("Driving Lic. Number : ");
    scanf("%d",&add.driving_number);
    printf("Enter Mobile Number : ");
    scanf("%d",&add.mobile);
    fprintf(ptr,"%s %d %d\n",add.name,add.driving_number,add.mobile);
    fclose(ptr);
}
void showDriver(){
    FILE *view;
    view = fopen("record.txt","r");
    system("color 7a");
    int test=0;
    while(fscanf(view,"%s %d %d",&add.name,&add.driving_number,&add.mobile)!=EOF)
    {
        printf("%s %d %d",add.name,add.driving_number,add.mobile);
        test++;
    }
    fclose(view);
    if(test==0) {
            system("cls");
            printf("NO RECORDS FOUND!!");
    } }


  void menu(){
    printf("\n\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Add Driver\n\t\t2.View Drivers\n\nEnter Your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:addDriver();
        break;
        case 2:showDriver();
    }
  }

  main() {
     char pass[10],password[]="admin";
     system("color 1f");
    printf("\n\n\n\t\t Enter Password : ");
    scanf("%s",&pass);
    if (strcmp(pass,password)==0)
    {
        printf("\tPassword Matched.......\n Loading...");
        system("cls");
        menu();
    }
 }
