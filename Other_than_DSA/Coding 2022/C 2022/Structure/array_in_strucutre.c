#include<stdio.h> 
struct student{
  int rollno;
  char name[30];
  float marks;
};

 int main(){
struct student s[3];

for(int i=0; i<3; i++){
  printf("Enter the rollno,name,marks for studen %d \n", i+1);
  scanf("%d %s %f", &s[i].rollno, &s[i].name, &s[i].marks);
}

for (int i = 0; i < 3; i++)
{
  printf("The rollno,name,marks for studen %d \n  = %d, %s, %f  \n", i + 1, s[i].rollno, s[i].name, s[i].marks);
 
}

return 0;
}