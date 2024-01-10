#include<iostream> 

using namespace std; 

 int main(){

  int n; // n = 1330
  cout<<"Enter the total amount \n";
  cin>>n;
  int note;
  cout<<"Enter which note you want(100,50,20,1)\n";
  cin>>note;
  int left = 0;

  switch(note){
    case 100:{
      int result = n/100;
      left = n-result*100;
      cout<<"no of 100 notes = "<<result;
    }
    break;
    case 50:
    {
      int result = n / 50;
      left = n - result * 50;
      cout << "no of 50 notes = " << result;
    }
    break;
    case 20:
    {
      int result = n / 20;
      left = n - result * 20;
      cout << "no of 20 notes = " << result;
    }
    break;
    case 1:
    {
      int result = n / 1;
      left = n - result * 1;
      cout << "no of 1 notes = " << result;
    }
    break;

    default:{
      cout<<"invalid input";
    }
  }

return 0;
}