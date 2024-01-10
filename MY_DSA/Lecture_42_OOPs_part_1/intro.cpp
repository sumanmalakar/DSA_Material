#include <bits/stdc++.h>
using namespace std;

class Hero
{

  // propeties
private:
  int health;

public:
  char *name;
  char level;

  // static data member (ye object ko nahi class ko belong karta hai)
  static int timeToComplete;

  // contructor
  Hero()
  {
    cout << "Simple (Default) Constructor Called " << endl;
    name = new char[100];
  }

  //Parameterised Constructor
  Hero(int health)
  {

    // cout << "this -> " << this << endl;
    this->health = health;
    // (*this).health = health; // ye upper jaise hi hai call karne ka tarika alg hai
  }

  Hero(int health, char level)
  {
    this->level = level;
    this->health = health;
  }

  // over own copy constructor
  Hero(Hero &temp)
  {
    char *ch = new char[strlen(temp.name) + 1];
    strcpy(ch, temp.name);
    this->name = ch;

    cout << "Copy constructor called apna wala \n";
    this->health = temp.health;
    this->level = temp.level;
  }

  void print()
  {
    cout << endl;
    cout << "[ Name: " << this->name << " ,";
    cout << "Health: " << this->health << " ,";
    cout << "Level: " << this->level << " ]";
  }

  int getHelth()
  {
    return health;
  }

  char getLevel()
  {
    return level;
  }

  void setHealth(int h)
  {
    health = h;
  }

  void setLevel(char ch)
  {
    level = ch;
  }

  void setName(char name[])
  {
    strcpy(this->name, name);
  }

static int random(){
  return timeToComplete;
}

  //Destructor
  ~Hero()
  {
    cout << "Destructor bhai called \n";
  }
};

//initailizing value to static data member
int Hero::timeToComplete = 5;

int main()
{

 
 cout<<Hero::random()<<endl;

  /*
  // static data member ko bina object bnaye print kra skte hai
  cout << Hero::timeToComplete << endl;

  /* 
1). static function ke liye v object create karne ki jaroorat nhi hai
2). Inke pass this keyword nhi hota
3). Static function keval static member ko hi access kar skte hai
 */
/*

  //Static ke liye destructor autometic call hota hai
  Hero a;

  //Dynamic ke liye destructor manually call karna pdta hai
  Hero *b = new Hero();
  delete b;

  Hero hero1;
  hero1.setHealth(12);
  hero1.setLevel('O');
  char name[7] = "Suman";
  hero1.setName(name);

  // hero1.print();

  //use default copy constructor
  Hero hero2(hero1);
  // hero2.print();

  hero1.name[0] = 'A';
  hero1.print();

  hero2.print();

  hero1 = hero2;
  hero1.print();

  hero2.print();

  Hero S(70, 'c');
  S.print();

  //copy constructor
  Hero R(S);
  R.print();

  Hero R(suresh);
   
  // upper ka single line neeche ke dono line same hai

R.health = suresh.health;
R.level = suresh.level;
 

*/

  /* this keyword current object ke address ko store karta hai, this is a pointer to current object */
  /*

   // object created statically
   Hero ramesh(10);
   cout << "Address of ramesh " << &ramesh << endl;
   ramesh.print();

   //dynamically object creation
   Hero *h = new Hero(10);
   h->print();

   Hero temp(22, 'B');
   temp.print();

   //static allocation se object creation
   Hero a;
   a.setHealth(80);
   a.setLevel('B');

   cout << "level is = " << a.level << endl;
   cout << "health is = " << a.getHelth() << endl;

   cout << endl;

   //dyamically allocation se object creation
   Hero *b = new Hero; // Heap me memory allocate hui hogi.

   b->setLevel('A');
   b->setHealth(70);
   cout << "level is = " << (*b).level << endl;
   cout << "health is = " << (*b).getHelth() << endl;

   */
  // (*b) = b-> // done same hai

  /*
   cout << endl;

   cout << "level is = " << b->level << endl;
   cout << "health is = " << b->getHelth() << endl;

   //creation of Object
   Hero ramesh;

   cout << "Ramesh health is = " << ramesh.getHelth() << endl;

   ramesh.setHealth(70);
   ramesh.level = 'A';

   cout << "health is: " << ramesh.getHelth() << endl;
   cout << "level is: " << ramesh.level << endl;

   cout << "size : " << sizeof(ramesh) << endl;

   */

  return 0;
}