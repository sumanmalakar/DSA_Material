#include<stdio.h> 
struct student{
  int rollno;
  char name[30];
  float marks;
};

 int main(){
   struct student s = {20, "suman", 45.55 }; 

   struct student *ptr = &s;

printf("rollno is %d \n", ptr->rollno);
printf("name is %s \n", ptr->name);
printf("marks is %f \n", ptr->marks);

// (*ptr).rollno = ptr->rollno (both are same)

printf("both are same \n");

printf("rollno is %d \n", (*ptr).rollno);
printf("name is %s \n", (*ptr).name);
printf("marks is %f \n", (*ptr).marks);

return 0;
}