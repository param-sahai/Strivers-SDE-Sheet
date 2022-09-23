class Solution {
public:
    bool isValid(string s) {
    stack<char>stk; // stack for maintaining the records of the parenthesis.
    for(auto x:s){
        if(x=='('||x=='['||x=='{') // if there is any opening bracket, irrespective of its type, 
        stk.push(x); // then we'll simply push it into our stack. (No need to check for closing condition)
        
        else { //Now, here comes the main logic (For closing brackets)
            
            //In the below three conditions, we are checking that whether the closing bracket is associated with the topmost (or the most recent opened) bracket, i.e closing bracket comes just after its opening bracket or not.
            // Also Note, we have to check whether the stack is already empty or not. If it is, then there can't be any opening bracket, which in turn means that there should be no closing bracket.
            
            if((x==')') && !stk.empty() && stk.top()=='(') //()
            stk.pop(); 
            
            else if((x=='}') && !stk.empty() && stk.top()=='{') //{}
            stk.pop(); 
            
            else if((x==']') && !stk.empty() && stk.top()=='[') //[]
            stk.pop(); 
            
            else
            return false; //If none of the above mentioned conditions are satisfied then, the parenthesis do not match, and therefore is not Valid.
        }
    }
        
    if(stk.empty()) //Here, if the stack is empty, it indicates that all the brackets have been balanced and the string is Valid. 
    return true;
    else
    return false;
}
};