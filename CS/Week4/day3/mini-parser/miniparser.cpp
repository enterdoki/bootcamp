#include <iostream>
#include <stack>
#include <vector>
#include <queue> 
 
NestedInteger deserialize(string s) {
    if (s.empty()) return NestedInteger();
    if (s[0]!='[') return NestedInteger(stoi(s));
    if (s.size()<=2) return NestedInteger();
    NestedInteger res;
    int left= 1, level =0;
    for (int i=1; i<s.size(); ++i) {
        if (level==0 && (s[i]==',' || i==s.size()-1)) {
            res.add(deserialize(s.substr(left, i-left)));
            left = i+1;
        } else if (s[i]=='[') ++level;
        else if (s[i]==']') --level;
    }
    return res;
}