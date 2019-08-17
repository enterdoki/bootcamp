class Solution {
public:
    string decodeString(string s) {
        stack<string> stacks;
        string finalString = "";
        int i = 0;
        while(i < s.size()){
            cout <<finalString << endl;
            char c = s[i];
            string temp = "";
            if(isdigit(c)){
                while(isdigit(c)){
                    temp.push_back(c);
                    i++;
                    c = s[i];
                }
                stacks.push(temp);
                temp = "";
            }else if (isalpha(c)) {
                while(isalpha(c)){
                    temp.push_back(c);
                    i++;
                    if (i < s.size()) {
                        c = s[i];
                    }else{
                        break;
                    }
                }
                if (stacks.empty() || isdigit(stacks.top()[0])) stacks.push(temp);
                else {
                    string tem = stacks.top();
                    stacks.pop();
                    tem += temp;
                    stacks.push(tem);
                }
                temp = "";
            } else if (c == ']') {
                string first = stacks.top();
                stacks.pop();
                string second = stacks.top();
                stacks.pop();
                string helper = multipleHelper(first,stoi(second));
                if (stacks.empty()) finalString += helper;
                else if (isdigit(stacks.top()[0])) {
                    stacks.push(helper);
                } else{
                    string tem = stacks.top();
                    stacks.pop();
                    tem += helper;
                    stacks.push(tem);
                }
                i++;
            }else{
                i++;
            }
        }
        if (!stacks.empty()) finalString += stacks.top();
        return finalString;
    }
    
    string multipleHelper(string s, int x){
        int i = x;
        string multiple = "";
        while (i--){
            multiple += s;   
        }
        return multiple;
    }
};