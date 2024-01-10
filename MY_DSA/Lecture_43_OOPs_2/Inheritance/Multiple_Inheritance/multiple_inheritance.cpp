#include <iostream>
using namespace std;

class Animal
{
public:
  int age;
  int weight;

public:
  void speak()
  {
    cout << "Speeaking " << endl;
  } 
  void setAge(int age){
    this ->age = age;
  }
};

class Dog
{
public:
  void run()
  {
    cout << "Dog is running so fast \n";
  }
};

class Human : public Animal, public Dog
{  
  
};

int main()
{

  Human object;
  object.setAge(5);
  cout<< object.age<<endl;
  object.run();

  return 0;
}