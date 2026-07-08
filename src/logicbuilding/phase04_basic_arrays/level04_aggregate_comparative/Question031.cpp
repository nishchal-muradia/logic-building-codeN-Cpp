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
// Question 31: : Compare two arrays - check if they are equal (same elements & order).
vector<int> first = {1, 2, 3};
vector<int> second = {1, 2, 3};
bool equal = first.size() == second.size();
for (int i = 0; i < first.size() && equal; i++) if (first[i] != second[i]) equal = false;
cout << (equal ? "Equal" : "Not equal") << endl;
return 0;
}

/*
* Explanation:
* The variables `equal`, `first`, and `second` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < first.size() && equal` is true, and updates using `i++`.
* The condition `first[i] != second[i]` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
