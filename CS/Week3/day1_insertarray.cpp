#include <iostream>
#include <vector>

using namespace std;

// O(n) run time 0(n) space solution
void insert_into_array(vector<int>& destination, vector<int>& source, int start) {
    vector<int> result;
    for(int i = 0 ; i < start; i++) {
        result.push_back(destination[i]);
    }
    for(int i = 0; i < source.size(); i++) {
        result.push_back(source[i]);
    }
    for(int i = start; i < destination.size(); i++) {
        result.push_back(destination[i]);
    }
    destination = result;
}
