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
// Question 9: : Find the index of the minimum element.
vector<int> numbers = {4, -2, 7, 0, 9, 3};
int minIndex = 0;

for (int i = 1; i < numbers.size(); i++) {
if (numbers[i] < numbers[minIndex]) {
minIndex = i;
}
}

cout << "Index of minimum = " << minIndex << endl;
return 0;
}

/*
* Explanation:
* The variables `minIndex`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 1`, keeps running while `i < numbers.size()` is true, and updates using `i++`.
* The condition `numbers[i] < numbers[minIndex]` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
