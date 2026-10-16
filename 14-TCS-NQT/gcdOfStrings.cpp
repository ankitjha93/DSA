#include <bits/stdc++.h>
using namespace std;


string gcdOfStrings(const string &str1, const string &str2){
     if(str1 + str2 != str2 + str1){
          return "";
     }
     
     return str1.substr(0, gcd(str1.length(), str2.length()));
}

int main() {
	// your code goes here
	string str1, str2;
	
	getline(cin, str1);
	getline(cin, str2);
	
	cout<<gcdOfStrings(str1, str2);
	return 0;
	
}