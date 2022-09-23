#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

bool isValid(string s) {
    stack<char>s;
    for(auto x:s){
        if(x=='('||x=='['||x=='{')
        s.push(x);
        else {
            if((x==')') && s.top()=='(')
            s.pop(); 
            else if((x=='}') && s.top()=='{')
            s.pop(); 
            else if((x==']') && s.top()=='[')
            s.pop(); 
            else
            return false;
        }
    }
    if(s.empty())
    return true;
    else
    return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 return 0;
}