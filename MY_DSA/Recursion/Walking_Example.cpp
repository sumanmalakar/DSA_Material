#include<iostream>
using namespace std; 

void reachHome(int src, int dest){
        if(src==dest) {
          cout<<"phuch gya "<<endl;
          return;
        }
        cout<<"source " <<src<<" destination "<<dest<<endl;
        src++;
       
       //recursive_call
        reachHome(src, dest);

}

 int main(){

  int dest = 10;
  int src = 1;

  reachHome(src, dest);

return 0;
}