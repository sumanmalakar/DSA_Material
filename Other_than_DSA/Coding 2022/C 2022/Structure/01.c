#include<stdio.h> 
struct student{
  int rollno;
  char name[20];
  float marks;
};


 int main(){
struct student s1 = {1, "suman",90.29};
struct student s2;

s2.rollno = 89;
// s2.name = "amazon";
s2.marks = 65;


printf("%d \n",s1.rollno);
printf("%s \n", s1.name);
printf("%f \n", s1.marks);

printf("for this second object \n");

printf("%d \n", s2.rollno);
// printf("%s \n", s2.name);
printf("%f \n", s2.marks);

// take value from user 

printf("Enter the roll no, name, marks \n");
scanf("%d %s %f", &s2.rollno, &s2.name, &s2.marks);
printf("%d \n", s2.rollno);
printf("%s \n", s2.name);
printf("%f \n", s2.marks);

return 0;
}