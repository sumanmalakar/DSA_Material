#include <iostream>
using namespace std;

void message();
void message1();
void message2(); 
void message3();
void message4();


int main()
{
  message();

  return 0;
}
void message()
{
  cout << "Hello world! => Initial \n";
  message1();
}

void message1()
{
  cout << "Hello world! => 1 \n";
  message2();
}

void message2()
{
  cout << "Hello world! => 2 \n";
  message3();
}

void message3()
{
  cout << "Hello world! => 3 \n";
  message4();
}

void message4()
{
  cout << "Hello world! => 4 \n";
}

