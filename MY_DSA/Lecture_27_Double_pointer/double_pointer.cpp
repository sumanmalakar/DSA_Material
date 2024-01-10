#include<iostream>
using namespace std; 

void update(int **p2){
  // p2 = p2 + 1;
  //kuch change hoga - No change

  // *p2 = *p2 + 1;
  // kuch change hoga - YES

  **p2 = **p2 + 1;
  //kuch change hoga - YES
}

 int main(){

// int i = 5;
// int *p = &i;
// int ** p2 = &p;

/* cout<<endl<<endl<<"Sab sahi chal rha h "<<endl<<endl;

cout<<"printing p "<<p<<endl;
cout<<"address of p "<<&p<<endl;
cout<<*p2<<endl;

cout<<"new printing statement ...\n";
cout<<i<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;

cout << "new printing statement 2...\n";
cout<<&i<<endl;
cout<<p<<endl;
cout<<*p2<<endl;

cout << "new printing statement 3...\n";
cout<<&p<<endl;
cout<<p2<<endl;



int i = 5;
int *p = &i;
int **p2 = &p;

cout<<endl<<endl;
cout<<"before "<<i<<endl; //5 
cout<<"before "<<p<<endl; // hexa value
cout<<"before "<<p2<<endl; // hexa value
update(p2);
cout<<"after "<<i<<endl; //5
cout<<"after "<<p<<endl; // hexa value no change
cout<<"after "<<p2<<endl; // hexa value no change
cout<<endl<<endl;


*/

cout<<".........MCQ - SECTION.........\n";
/*
int first = 0;
int second = 10;
int *ptr = &second;
*ptr = 9;
cout<<first <<" "<<second<<endl; 


int first = 6;
int *p = &first;
int *q = p;
(*q)++;
cout << first  << endl;


int first = 8;
int *p = &first;
int *q = p;
cout<<(*p)++<<" "; // 8
cout << first << endl; // 9



int *p = 0; // error aayega
int first = 110;
*p = first;
cout<<*p<<endl; 




int first = 8;
int second = 11;
int *third = &second;
first = *third;
*third  = *third + 2;

cout<<first <<" "<<second;


cout<<"\n ..... Import wala hai......\n";
float f = 12.5;
float p = 21.5;
float *ptr = &f;
(*ptr)++;
*ptr = p;
cout<<*ptr<< " "<<f<<" "<<p<<endl;


int arr[5];
int *ptr;
cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;

int arr[] = {11,21,13,14};
cout<<*(arr)<<" "<<*(arr+1)<<endl;
 //    11            21



cout<<"\n.... arr = &arr = &arr[0] = teeno same hai .... \n";

int arr[6] = { 11,12,31};
cout<<arr<<" "<<&arr<<endl;


cout<<"... p[2] = *(p+2).... dono same hai bro ..\n";
int arr[6] = {11,21,31};
int *p = arr;
cout<<p[2]<<endl;


cout<<"\n....error aayega.......\n";
int arr[] = {11,21,31};
int *ptr = arr++;
cout<<*ptr<<endl;



cout<<"\n....Important hai bro.....\n";
char ch = 'a';
char *ptr = &ch;
ch++;
cout<<*ptr<<endl;


cout << "\n....Important hai bro.....\n";
char arr[] = "abcde";
char *p = &arr[0];
cout<<p<<endl;
cout<<p[0]<<endl;
cout<<p[2]<<endl;
p++;
cout << p << endl;
cout<<p[3]<<endl;
p++;
cout << p << endl;


cout << "\n....Important hai bro.....\n";
int first = 110;
int *p = &first;
int **q = &p;
int second = (**q)++ + 9;
cout<<first<<" "<<second<<endl;
*/

cout << "\n....Important hai bro.....\n";
int first = 100;
int *p = &first;
int **q = &p;
int second = ++(**q);
int *r = *q;
++(*r);
cout<<first<<" "<<second<<endl;

return 0;
}