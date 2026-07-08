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
// Question 33: : Print all subarrays of a given array.
vector<int> numbers = {1, 2, 3};
for (int start = 0; start < numbers.size(); start++) {
for (int end = start; end < numbers.size(); end++) {
for (int i = start; i <= end; i++) cout << numbers[i] << " ";
cout << endl;
}
}
return 0;
}

/*
* Explanation:
* The variables `start`, `end`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int start = 0`, keeps running while `start < numbers.size()` is true, and updates using `start++`.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
