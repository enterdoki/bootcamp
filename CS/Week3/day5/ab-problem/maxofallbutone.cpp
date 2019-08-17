#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

/*
A: [3,2,5,4] output = 60
B: [3,2,-1,4] output = 24
C: [3,2,-1,4,-1,6] output = 72
D: [-5,-5,-1,-1,2,3,4,6]
 */
int max_of_all_but_one(vector<int> numbers) {   // O(nlogn) runtime O(n) space
    int result =1;
    int limit = numbers.size()-1;
    int count = 0;
    stack<int> pos;
    queue<int> neg;
    sort(numbers.begin(), numbers.end());   

    for(int i = 0; i < numbers.size(); i++) {
        if(numbers[i] < 0) {
            neg.push(numbers[i]);
        }
        else 
            pos.push(numbers[i]);   
    }
    
    if(neg.size() %2 == 0) { 
        limit -= neg.size();
    }

    while(!pos.empty() && count != limit) {
        int top = pos.top();
        result = result * top;
        pos.pop();
        count++; 
    }
    while(!neg.empty() && count != numbers.size()-1) {
        int front = neg.front();
        result = result * front;
        neg.pop();
        count++;
    }
    return result;
}

int max(vector<int> nums) {  // O(n) runtime O(1) space
    int total = 1;
    int max = 1;
    
    for(auto i : nums) {
        total *= i;
    }
    
    for(auto i : nums) {
        if(total/i > max)
            max = total/i;
    }
    return max;
}

int main() {
    vector<int> nums {-5,-5,-1,-1,2,3,4,6};
    // cout <<  max_of_all_but_one(nums);
    cout << max(nums);
    return 0;

}