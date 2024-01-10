#include <iostream>

using namespace std;

void pattern1(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern2(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= n; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern3(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int col = row; col <= n; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern4(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int col = 1; col <= row; col++)
    {
      cout << col << " ";
    }
    cout << endl;
  }
}

void pattern5(int n)
{
  for (int row = 1; row <= n; row++)
  {
    if (row > 5)
    {
      for (int col = 1; col <= n - row + 1; col++)
      {
        cout << "* ";
      }
      cout << endl;
    }
    else
    {
      for (int col = 1; col <= row; col++)
      {
        cout << "* ";
      }
      cout << endl;
    }
  }
}

void pattern6(int p)
{
  int n = (2 * p) - 1;
  for (int row = 1; row <= n; row++)
  {
    if (row <= n/2)
    {
      for (int k = 1; k <= n - row; k++)
      {
        cout << " ";
      }
      for (int col = 1; col <= row; col++)
      {
        cout << "* ";
      }
      cout << endl;
  }

  else{
    for (int k = 1; k <= row - 1; k++)
    {
      cout << " ";
    }
    for (int i = 1; i <= n - row + 1; i++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  }
}

void pattern7(int n)
{
  for(int i = 1; i<=n; i++ ){
    for(int k = 1; k<=n-i+2; k++){
      cout<<"  ";
    }
    // cout<<endl;
    for(int j = 1; j<=i; j++){
      cout<<i-j+1<<" ";
      }
      if(i>=2){
        for(int k =1; k<=i-1; k++){
          cout<<k+1<<" ";
        }
      }
      
    cout << endl;
    }
  }

  void pattern8(int n)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int k = 1; k <= n - i + 1; k++)
      {
        cout << "  ";
      }
      // cout<<endl;
      for (int j = 1; j <= i; j++)
      {
        cout << i - j + 1 <<" ";
      }
      if (i >= 2)
      {
        for (int k = 1; k <= i - 1; k++)
        {
          cout << k + 1 << " ";
        }
      }

      cout << endl; 
      if(i>n/2){



      }

    }
  }

  void pattern9(int n){
    for(int i = 1; i<=n; i++){
      for(int j=1; j<=2*n-1; j++){

  // if (i >= i && j >= i && j <= 2 * n - i + 1)
  // {
  //   cout << n - i + 1 << " ";
  // }
  
       if(i>=4 && j>=4 && j<=4){
         cout<<n-3<<" ";
       }
      else if (i >= 3 && j >= 3 && j <= 5)
       {
         cout << n - 2 << " ";
       }

       else if (i >= 2 && j >= 2 && j <= 6)
       {
         cout << n - 1 << " ";
       }
     else{
        cout<<n<<" ";
        }
      }
      cout<<endl;
    }
  }




int main()
{

  int n;
  pattern1(n=5);
  cout << endl;
  pattern2(n=5);
  cout << endl;
  pattern3(n=5);
  cout << endl;
  pattern4(n=5);
  cout << endl;
  pattern5(n = 11);
  cout << endl;
  pattern6(n = 11);
  cout << endl;
  pattern7(n = 11);
  cout << endl;
  pattern8(n = 5);
  cout << endl;
  pattern9(n = 4);

  return 0;
}