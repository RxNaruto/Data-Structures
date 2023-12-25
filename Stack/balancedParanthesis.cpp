#include<iostream>
#include<string>
#include<stack>

using namespace std;
bool balancedParenthesis(string s){
    bool ans =true;
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]== '('){
            st.push(s[i]);
        }
        else if( s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                ans =false;
                break;
            }
        }
        else if( s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans =false;
                break;
            }
        }
        else if( s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans =false;
                break;
            }
        }
        

    }
    if(!st.empty()){
            ans=false;
        }
        return ans;
}
int main()
{
    cout<<"the parenthesis {{()}} is "<<balancedParenthesis("{{()}}");
 return 0;
}