#include <bits/stdc++.h>
using namespace std;


string mergeAlternately(string s1, string s2){
      
      string result = "";
      
      int i = 0;
      
      while(i < s1.length() || i < s2.length()){
           if(i < s1.length()){
                result += s1[i];
           }
           
           if(i < s2.length()){
                result += s2[i];
           }
           
           i++;
      }
      
      return result;
   
   
}

int main() {
	// your code goes here
	
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	cout<<mergeAlternately(s1, s2);
	
}