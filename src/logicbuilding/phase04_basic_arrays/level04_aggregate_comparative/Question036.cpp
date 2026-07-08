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
// Question 36: : Count how many elements are common between two arrays.
vector<int> first = {1, 2, 3, 4};
vector<int> second = {3, 4, 5};
for (auto a : first) {
for (auto b : second) {
if (a == b) cout << a << endl;
}
}
return 0;
}

/*
* Explanation:
* The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
* The loop repeats the same check or calculation for every required value.
* The condition `a == b` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
