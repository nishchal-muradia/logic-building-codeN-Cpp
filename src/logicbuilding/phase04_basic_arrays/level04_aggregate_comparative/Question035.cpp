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


int main() {
// Question 35: : Find elements that are in one array but not in the other.
vector<int> first = {1, 2, 3, 4};
vector<int> second = {3, 4, 5};
for (auto a : first) {
bool found = false;
for (auto b : second) if (a == b) found = true;
if (!found) cout << a << endl;
}
return 0;
}

/*
* Explanation:
* The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int a : first) { bool found = false`, keeps running while `for (auto b : second) if (a == b) found = true` is true, and updates using `if (!found`.
* The bool `found` starts as false and becomes true as soon as the searched value is seen.
* The if/else checks test the important cases in order: `a == b`, `!found`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
