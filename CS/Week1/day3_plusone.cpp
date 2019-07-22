#include <iostream>
#include <vector>

using namespace std;

vector<int> addOne(vector<int> &digits) {
    int i = digits.size()-1;
    while(digits[i] == 9 && i > 0) {
        digits[i] = 0;
        i--;
    }
    if(i == 0 ) {
        if(digits[i] < 9)
            digits[i]++;
        else {
            digits[i] = 0;
            digits.insert(digits.begin(), 1);
        }
    }
    else
        digits[i]++;

    return digits;
}


int main() {
	vector<int> d1 {1, 2, 9};
	vector<int> d2 {0};
	vector<int> d3 {9};
	vector<int> d4 {0,9,9,9};


	addOne(d3);

	for(auto i : d3)
		cout << i;
}