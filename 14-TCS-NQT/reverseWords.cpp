#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s){
     int n = s.length();
     
     reverse(s.begin(), s.end());
     
     string result = "";
     
     for(int i = 0; i  < n; i++){
          string word = "";
          while(i < n && s[i] != ' '){
               word += s[i];
               i++;
          }
          
          reverse(word.begin(), word.end());
          if(word.length() > 0){
               result += ' ' + word;
          }
     }
     
     return result.substr(1);
}

int main() {
	// your code goes here
	string s;
	getline(cin, s);
	
	cout<<reverseWords(s);
}