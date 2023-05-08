//using stack stl library
#include <iostream>
#include<stack>
using namespace std;

 void reverseString(string s){
     
     stack<string> st;
     for(int i=0;i<s.length();i++){
         string words="";
         while(s[i]!=' ' && i<s.length()){
             words+=s[i];
             i++;
         }
         st.push(words);
     }
     while(!st.empty()){             //stack not empty
         cout<<st.top()<<" ";
         st.pop();
     }
     cout<<endl;
 }

int main()
{
   string s="hey, how are you doing?";
   reverseString(s);
}
