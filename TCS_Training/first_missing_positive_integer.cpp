#include <bits/stdc++.h>
using namespace std;

int first_positive_missing(vector<int> &v, int max){
    bool missing = false;
    int result = 0;
    for(int i=1; i<max; i++){
       for(int j=0; j<v.size(); j++){
        if(v[j] != i){
            missing = true;
            break;
        }
       }
       if(missing == true){
        result = i;
        break;
       }
    }
return result;
}

int main()
{
    vector<int> v = {-1, 1, 3, 4, 5};
    sort(v.begin(), v.end());
    int min, max;

    for(int i=0; i<v.size(); i++){
        bool flag = false;
        if(v[i]>=0){
            flag = true;
          min = v[i];
          max = v[v.size() - 1];
        }
        if(flag){
            break;
        }
    }



    cout << "The element is = " << first_positive_missing(v,max) << endl;
}

// size -5 , 3, 0 , 4,
// if 2 invalid input
// -1 , 1 , 3, 4, 5 (0,2) zero is not positive