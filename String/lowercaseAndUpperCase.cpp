#include <bits/stdc++.h>
using namespace std;
#include<cctype>


int main()
{
   
    string a = "abc";
    string b = "ABC";

    cout<<int('a');

    if(a == b) {
         cout<<"Equal"<<endl;
    }


    string a = "ankit";

    if(a[0] >= 'a' && a[0] <= 'z'){
          a[0] -= 32;  
    }


    
    string a = "ankit";

    if(a[0] >= 'A' && a[0] <= 'Z'){
          a[0] += 32;  
    }

    // 


     string a = "ankit";

    if(int i = 0; i < a.size(); i++){
          if(a[i] >= 'A' && a[i] <= 'Z'){
                a[i] += 32;
          }
    }


tolower(a[0]);



     
     

    // a[0] -= 32;

    cout<<a<<endl;

    
}