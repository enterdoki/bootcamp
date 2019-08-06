#include <iostream>
#include <stack>
#include <vector>
#include <queue>

int evalRPN(vector<string>& tokens) {
    stack<int> num;
    
    for(int i = 0; i < tokens.size(); i++) {
        if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*") 
            num.push(stoi(tokens[i]));
        else {
            int b = num.top();
            num.pop();
            int a = num.top();
            num.pop();
            if(tokens[i] == "+") num.push(a+b);
            else if(tokens[i] == "-") num.push(a-b);
            else if(tokens[i] == "*") num.push(a*b);
            else if(tokens[i] =="/") num.push(a/b);       
        }
    }
    return num.top();
    }