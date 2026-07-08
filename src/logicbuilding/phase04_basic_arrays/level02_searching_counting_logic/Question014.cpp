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
// Question 14: : Find the last occurrence of a given number.
vector<int> numbers = {4, 7, 2, 7, 9, 7};
int target = 7;
int lastIndex = -1;

for (int i = 0; i < numbers.size(); i++) {
if (numbers[i] == target) {
lastIndex = i;
}
}

cout << "Last occurrence = " << lastIndex << endl;
return 0;
}

/*
* Explanation:
* The variables `target`, `lastIndex`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < numbers.size()` is true, and updates using `i++`.
* The condition `numbers[i] == target` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
