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
// Question 32: : Compare two arrays - check if they contain the same elements (ignore order).
vector<int> first = {1, 2, 3};
vector<int> second = {3, 2, 1};
bool same = first.size() == second.size();
vector<bool> used(second.size(), false);
for (int i = 0; i < first.size() && same; i++) {
bool found = false;
for (int j = 0; j < second.size(); j++) {
if (!used[j] && first[i] == second[j]) {
used[j] = true;
found = true;
break;
}
}
if (!found) same = false;
}
cout << (same ? "Same elements" : "Different elements") << endl;
return 0;
}

/*
* Explanation:
* The variables `same`, `first`, `second`, and `used` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < first.size() && same` is true, and updates using `i++`.
* The bool `found` starts as false and becomes true as soon as the searched value is seen.
* The if/else checks test the important cases in order: `!used[j] && first[i] == second[j]`, `!found`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
