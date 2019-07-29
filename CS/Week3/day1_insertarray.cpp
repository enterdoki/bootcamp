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

// O(n) run time 0(1) space solution
void insert_into_array1(vector<int>& destination, vector<int>& source, int start) {
    for(int i = start; i < source.size(); i++) {
        source.push_back(destination[i]);
    }

    destination.resize(start);

    for(int i = 0; i < source.size(); i++) {
        destination.push_back(source[i]);
    }
}

// O(n) run time 0(1) space solution
void insert_into_array3(vector<int>& destination, vector<int>& source, int start) {
    destination.insert(destination.begin()+start, source.begin(), source.end());
}

