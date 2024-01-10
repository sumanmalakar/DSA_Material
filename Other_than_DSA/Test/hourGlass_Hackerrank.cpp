/* Online C++ Compiler and Editor */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr = {{-9,-9,-9,1,1,1},{0,-9,0,4,3,2},{-9,-9,-9,1,2,3},{0,0,8,6,6,0},{0,0,0,-2,0,0},{0,0,1,2,4,0}};

    vector<int> result;
    for(int i=0; i<4; i++) {
        int j=0;
        while(j<4) {
            int sum = 0;
            int cnt = 0;
            for(int k = i; k<i+3; k++) { 
              cnt++;
                for(int s = j; s<j+3; s++) {
                    //  cout<<"index "<<k<<s<<" = "<<arr[k][s]<<" ";
                     if(cnt == 1 || cnt == 3){
                       sum += arr[k][s];
                     }
                     if(cnt==2 && s == j+1){
                       sum += arr[k][s];
                     }

                }
                // cout<<endl;
            }
            cnt = 0;
            // cout<<sum<<" ";
            result.push_back(sum);
            j++;
        }
        // cout<<endl;
    }

    int r = result[0];
    for(int i=0; i<result.size(); i++) {
        // cout<<result[i]<<" ";
        if(i==3 || i==7 || i==11 ){
            // cout<<endl;
        }
        if(r<result[i]) {
            r = result[i];
        }
    }
    cout<<r;

    return  0;

}