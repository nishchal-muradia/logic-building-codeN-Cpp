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
// Question 47: : Count how many pairs of elements have a sum equal to a given number k.
vector<int> numbers = {1, 2, 3, 4, 5};
int k = 6;
for (int i = 0; i < numbers.size(); i++) {
for (int j = i + 1; j < numbers.size(); j++) {
if (numbers[i] + numbers[j] == k) cout << numbers[i] << ", " << numbers[j] << endl;
}
}
return 0;
}

/*
* Explanation:
* The variables `k`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < numbers.size()` is true, and updates using `i++`.
* The condition `numbers[i] + numbers[j] == k` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
