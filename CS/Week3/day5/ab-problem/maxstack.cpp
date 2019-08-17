#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Max_stack {
    public:
    Max_stack() {
        /* Construct your stack. Initialize any member variables. */
    }
    void push(int entry) {
        /* Place entry at the top of your stack. stack.push(x)
        followed by stack.peek(x) should always return x. */
        data.push_back(entry);
        if(!max_data.empty() && max_data.back() > entry) {
            max_data.push_back(max_data.back());
        }
        else {
            max_data.push_back(entry);
        }
    }

    void pop() {
        /* Remove the entry at the top of the stack. */
        data.pop_back();
        max_data.pop_back();
    }

    int peek() {
        /* Return the element at the top of the stack. */
        return data.back();
    }

    int max() {
        /* Return the largest element currently in the stack. */
        return max_data.back();
    }
    private:
    vector<int> data;
    vector<int> max_data;
};