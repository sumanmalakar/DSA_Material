#include<iostream> 
using namespace std; 

 int main(){
int a,b;
cout<<"Enter two number \n";
cin>>a>>b;
char op;
cout<<"Enter operaton(+,-,*,/)\n";
cin>>op;

switch(op){
  case '+':{
    cout<<a<<" + "<<b<<" = "<<a+b;
  }
  break;
   case '-':{
    cout<<a<<" - "<<b<<" = "<<a-b;
  }
  break;
  case '*':
  {
    cout << a << " * " << b << " = " << a * b;
  }
  break;
  case '/':
  {
    cout << a << " / " << b << " = " << a / b;
  }
  break;
  default :{
    cout<<"Invalid Input\n";
  }
}
  

return 0;
}