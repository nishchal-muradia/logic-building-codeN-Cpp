#include <algorithm>
#include <cctype>
#include <climits>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


void printArray(vector<int> values) {
for (auto value : values) cout << value << " ";
cout << endl;
}

int main() {
// Question 27: : Merge two arrays into one.
vector<int> first = {1, 2, 3};
vector<int> second = {4, 5};
vector<int> merged(first.size() + second.size());
for (int i = 0; i < first.size(); i++) merged[i] = first[i];
for (int i = 0; i < second.size(); i++) merged[first.size() + i] = second[i];
printArray(merged);
return 0;
}

/*
* Explanation:
* The variables `first`, `second`, and `merged` hold the values that the logic checks, counts, or transforms.
* The helper calculates the required result and returns it to the print statement.
* The `for` loop starts with `int i = 0`, keeps running while `i < first.size()` is true, and updates using `i++`.
*/
