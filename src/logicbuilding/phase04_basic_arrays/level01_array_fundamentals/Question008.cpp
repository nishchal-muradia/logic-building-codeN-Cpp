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
// Question 8: : Find the index of the maximum element.
vector<int> numbers = {4, -2, 7, 0, 9, 3};
int maxIndex = 0;

for (int i = 1; i < numbers.size(); i++) {
if (numbers[i] > numbers[maxIndex]) {
maxIndex = i;
}
}

cout << "Index of maximum = " << maxIndex << endl;
return 0;
}

/*
* Explanation:
* The variables `maxIndex`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 1`, keeps running while `i < numbers.size()` is true, and updates using `i++`.
* The condition `numbers[i] > numbers[maxIndex]` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
