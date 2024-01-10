#include<iostream> 

using namespace std; 

 int main(){

   // pattern - 1

//   for(int i=1; i<=4; i++){
//     for(int j=1; j<=4; j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }

//  cout<<"printing using while loop"<<endl;
//   // using while loop

//   int i=0, n = 8;
//   while(i!=n){
//     int j = 0;
//     while(j!=n){
//       cout<<"* ";
//       j++;
//     } 
//     cout<<endl;
//     i++;
//   }


// pattern 2
// for(int i=1; i<4; i++){
//   for(int j = 1; j<4; j++){
//     cout<<i<<" ";
//   }
//   cout<<endl;
// }

// // pattern 2 using while
// cout<<endl;
// int i = 1, n = 4;
// while(i!=n){
//   int j = 1;
//   while(j!=n){
//     cout<<i<<" ";
//     j++;
//   }
//   cout<<endl;
//   i++;
// }


// pattern 3

// int i=0, n = 4;
// while(i!=n){
//   int j=0;
//   while(j!=n){
//     cout<<j+1<<" ";
//     j++;
//   }
//   cout<<endl;
//   i++;
// }

// pattern 4
  //  int i = 0, n = 4;
  //  while (i != n)
  //  {
  //    int j = n;
  //    while (j)
  //    {
  //      cout << j << " ";
  //      j--;
  //    }
  //    cout << endl;
  //    i++;
  //  }

   // pattern 5;
  //  int i = 0, n = 4 ,k=1;
  //  while (i != n)
  //  { int j = 1;
  //    while (j!=n)
  //    {
  //      cout << k << " ";
  //      k++;
  //      j++;
  //    }
  //    cout << endl;
  //    i++;
  //  }

  // pattern 6;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  {
  //    int col = 0;
  //    while (col < row)
  //    { cout<<"* ";
  //      col++;
  //    }
  //    cout << endl;
  //    row++;
  //  }

// pattern 7;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  {
  //    int col = 1;
  //    while (col <= row)
  //    {
  //      cout <<row<<" ";
  //      col++;
  //    }
  //    cout << endl;
  //    row++;
  //  }

   // pattern 8;
    // int row = 1, n = 4, k = 1;
    // while (row <= n)
    // {
    //   int col = 1;
    //   while (col <= row)
    //   {
    //     cout << k << " ";
    //     k++;
    //     col++;
    //   }
    //   cout << endl;
    //   row++;
    // }


   // pattern 9;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  {
  //    int col = 0;

  //    while (col <row)
  //    {
  //      cout << (col)+row << " ";
  //     //  k++;
  //      col++;
  //    }
  //    cout << endl;
  //    row++;
  //  }

   // pattern 10;
  //  int row = 1, n = 16;
  //  while (row <= n)
  //  {
  //    int col = row;
  //    while (col)
  //    {
  //      cout <<col << " ";
      
  //      col--;
  //    }
  //    cout << endl;
  //    row++;
  //  }

  //  // pattern 11; typeCast
  //  int row = 1, n = 4;
  //  char c = 'A';
  //  while (row <= n)
  //  {
  //    int col = 1;
  //    while (col <= n)
  //    {
  //      cout <<(char)( c + row -1) << " ";
  //      col++;
  //    }
  //    cout << endl;
  //    row++;
  //  }

   // pattern 11; without typeCast
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  {
  //    int col = 1;
  //    while (col <= n)
  //    { char ch = 'A' + row -1;
  //      cout << ch << " ";
  //      col++;
  //    }
  //    cout << endl;
  //    row++;
  //  }

   // pattern 12;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  {
  //    int col = 1;
  //    while (col <= n)
  //    { char c = 'A';
  //      cout << (char) (c + col -1)<< " ";
  //      col++;
  //    }
  //    cout << endl;
  //    row++;
  //  }

  //  // pattern 13;
  //  int row = 0, n = 3;
  //  char c = 'A';
  //  char d;
  //  while (row <= n)
  //  {
  //    int col = 1;
  //    while (col <= n)
  //    {  char x = c + col+row -1;
  //      cout << x<< " ";
  //      col++;
  //      d = x;
  //    } 
  //    c =d;
  //    cout << endl;
  //    row++;
  //  }

  //  // pattern 13;
  //  int row = 1, n = 3;
  //  char c = 'A';
  //  while (row <= n)
  //  {
  //    int col = 1;
  //    while (col <= n)
  //    { 
  //      cout<<c<<" ";
  //      col++;
  //      c++;
       
  //    }
     
  //    cout << endl;
  //    row++;
  //  }

  //  // pattern 14;
  //  int row = 1, n = 3;
  //  char c = 'A';
  //  while (row <= n)
  //  {
  //    int col = 1;
  //    while (col <= n)
  //    {  char ch = c+col+row-2;
  //      cout << ch<< " ";
      
  //      col++;
  //    }

  //    cout << endl;
  //    row++;
  //  }

// // pattern 15;
//    int row = 1, n = 5;
//    char c = 'A';
//    while (row <= n)
//    {
//      int col = 1;
//      while (col <= row)
//      { 
//        cout << c << " ";
//        col++;
//      }
//      c++;
//      cout << endl;
//      row++;
//    }

  //  pattern 16;
  //  int row = 1, n = 4;
  //  char c = 'D';
  //  while (row <= n)
  //  {
  //    int col = 1;
  //    while (col <= row)
  //    {
  //       char x = c + col -row ;   
  //      cout << x << " ";
  //      col++;   
  //    }
  //    cout << endl;
  //    row++;
  //  }

  // //  pattern 17;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  {
  //    int col = 1;
  //    while (col <=row)

  //    {  if(col==1){
  //      for(int i=1; i<=n-row; i++){
  //      cout<<" ";
  //    }}
  //      cout <<"*";
  //      col++;
  //    }
  //    cout << endl;
  //    row++;
  //  }

   //  pattern 17;
//    int row = 1, n = 4;
//    while (row <= n)
//    {
// // space print karlo
// int sapce = n-row;  
//   while(sapce){
//     cout<<" ";
//     sapce--;
//   }
//   //star print
//   int col = 1;
//   while(col<=row){
//     cout<<"*";
//     col++;
//   }
//      cout << endl;
//      row++;
//    }

  //  //  pattern 18;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  {
  //    //star print
  //    int col = 1;
  //    while (col <=n - row +1)
  //    {
  //      cout << "*";
  //      col++;
  //    }
  //    // space print karlo
  //    int sapce = row-1;
  //    while (sapce)
  //    {
  //      cout << " ";
  //      sapce--;
  //    }
  //    cout << endl;
  //    row++;
  //  }

  //  //  pattern 19;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  { // space print karlo
  //    int sapce = row - 1;
  //    while (sapce)
  //    {
  //      cout << " ";
  //      sapce--;
  //    }
  //    //star print
  //    int col = 1;
  //    while (col <= n - row + 1)
  //    {
  //      cout << "*";
  //      col++;
  //    }
  
  //    cout << endl;
  //    row++;
  //  }

  //  //  pattern 20;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  { // space print karlo
  //    int sapce = row - 1;
  //    while (sapce)
  //    {
  //      cout << " ";
  //      sapce--;
  //    }
  //    //star print
  //    int col = 1;
  //    while (col <= n - row + 1)
  //    {
  //      cout <<row;
  //      col++;
  //    }

  //    cout << endl;
  //    row++;
  //  }

  //  //  pattern 20;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  { // space print karlo
  //    int sapce = n - row;
  //    while (sapce)
  //    {
  //      cout <<" ";
  //      sapce--;
  //    }
  //    //star print
  //    int col = 1;
  //    while (col <= row)
  //    {
  //      cout << row;
  //      col++;
  //    }

  //    cout << endl;
  //    row++;
  //  }

   //  pattern 21;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  { // space print karlo
  //    int sapce = row -1;
  //    while (sapce)
  //    {
  //      cout << " ";
  //      sapce--;
  //    }
  //    //star print
  //    int col = row;
  //    while (col <= n)
  //    {
  //      cout << col;
  //      col++;
  //    }
  //    cout << endl;
  //    row++;
  //  }

  //  //  pattern 22;
  //  int row = 1, n = 4;
  //  while (row <= n)
  //  { // space print karlo
  //    int sapce = n - row;
  //    while (sapce)
  //    {
  //      cout << " ";
  //      sapce--;
  //    }
  //    //star print
  //    int k=0;
  //    int col = 1;
  //    while (col <= row)
  //    {
  //      cout <<k+row;
  //      k++;
  //      col++;
  //    }

  //    cout << endl;
  //    row++;
  //  }

   //  pattern final
   int row = 1, n = 4;
   while (row <= n)
   {
      // space print karlo
     int sapce = n - row;
     while (sapce)
     {
       cout <<" ";
       sapce--;
     }
     for (int i = 1; i < row; i++)
     {
       cout <<i<<" ";
     }

     //print number
     int col = row;
     while (col <= row)
     {
       cout <<row;
       col++;
     }
     // space print karlo
     int sapce2 = n- row;

     while (sapce2)
     {
       cout <<" ";
       sapce2--;
     }
     for (int i = row-1; i; i--)
     {
       cout <<i<<" ";
     }

     cout << endl;
     row++;
   }
     return 0;
}