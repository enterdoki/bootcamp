#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> pivotSort(vector<int> numbers, int pivot) { // O(n) run time O(n) space
    vector<int> less_pivot;
    vector<int> equal_pivot;
    vector<int> greater_pivot;

    for(int i = 0; i < numbers.size(); i++) {
        if(numbers[i] < pivot)
            less_pivot.push_back(numbers[i]);
        else if(numbers[i] == pivot) 
            equal_pivot.push_back(numbers[i]);
        else
            greater_pivot.push_back(numbers[i]);
    }

    less_pivot.insert(less_pivot.end(), equal_pivot.begin(), equal_pivot.end());
    less_pivot.insert(less_pivot.end(), greater_pivot.begin(), greater_pivot.end());

    return less_pivot;

}

vector<int> pivotSorts(vector<int> &numbers, int pivot) {   // O(nlogn) run time O(1) space
    sort(numbers.begin(), numbers.end());

    return numbers;
}