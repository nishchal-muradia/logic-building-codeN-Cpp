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
// Question 38: : Find element-wise product of two arrays.
vector<int> a = {1, 2, 3};
vector<int> b = {4, 5, 6};
vector<int> result(a.size());
for (int i = 0; i < a.size(); i++) result[i] = a[i] * b[i];
printArray(result);
return 0;
}

/*
* Explanation:
* The variables `a`, and `b` hold the values that the logic checks, counts, or transforms.
* The helper calculates the required result and returns it to the print statement.
* The `for` loop starts with `int i = 0`, keeps running while `i < a.size()` is true, and updates using `i++`.
*/
