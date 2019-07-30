#include <iostream>
#include <vector>

using namespace std;

void remove_duplicates(vector<int>& numbers) {
    int temp = 1;
    for(int i = 1; i < numbers.size(); i++) {
        if(numbers[i] != numbers[i-1]) {
            numbers[temp] = numbers[i];
            temp++;
        }   
    }
    numbers.resize(temp);
}