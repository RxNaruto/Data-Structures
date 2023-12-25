// first reverse the string 
//  If operand
//      print
//  If '(' 
//     push to stack
//  if ')'
//   pop form the stack and print until '(' is found
//  if operator 
//   pop from the stack and print until an operator with less precedence is found

//   again reverse the solution string
// also reverse the sign of ( )
#include<iostream>
#include<algorithm>
#include<stack>
#include<cmath>
using namespace std;
int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='/' || c=='*'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixToPrefix(string s){
    reverse(s.begin(),s.end());
    string res;
    stack<char>st;

    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            res=res+s[i];
        }
        else if(s[i]==')'){
            st.push(s[i]);

        }
        else if(s[i]=='('){
            while(!st.empty() && st.top()!=')'){
                res=res+st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>=prec(s[i])){
                res=res+st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res=res+st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
     cout<<infixToPrefix("(a-b/c)*(a/k-l)");
 return 0;
}