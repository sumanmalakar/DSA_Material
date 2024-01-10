#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1, string s2){
    if(s1.length() != s2.length()) return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for(int i=0; i<s1.length(); i++){
        if(s1[i]!=s2[i])
        {
            return false;
        }
    }

    return true;
}

int main(){
    string n1 = "suman";
    string n2 = "namus";
 
   if(checkAnagram(n1,n2)){
    cout<<"String "<<n1<<" and "<<"String "<<n2<<" Both are Anagram ";
   }else{
    cout<<"Not a Anagram!";
   }

}