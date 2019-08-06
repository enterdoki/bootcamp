#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

bool isValid(string s) {
    stack<char> paren;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if(paren.empty()) return false;
            else if(s[i] == ')' && paren.top() != '(') return false;
            else if(s[i] == '}' && paren.top() != '{') return false;
            else if(s[i] == ']' && paren.top() != '[') return false;
            paren.pop();
        }
        else
            paren.push(s[i]);
    }
    
    return paren.empty();
}

vector<string> braces(vector<string> values) {
    stack<char> paren;
    vector<string> result;
    if(values.size() ==0 ) return {"YES"};
    if(values.size() ==1) return {"NO"};

    for(int i = 0; i < values.size(); i++)  {
        if(isValid(values[i])) {
            result.push_back("YES");
        }
        else
            result.push_back("NO");
    }

    return result;

}