#include<bits/stdc++.h>
using namespace std;

int main(){
     string s = "abcdefghijklm";

     string ans  = " ";

     for(int i = 0; i < s.size(); i++){
         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
              

         }else{
             ans += s[i];
         }
     }
}