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
// Question 41: : Check if the array is sorted in ascending order.
vector<int> numbers = {1, 2, 3, 4};
bool sorted = true;
for (int i = 1; i < numbers.size(); i++) if (numbers[i] < numbers[i - 1]) sorted = false;
cout << (sorted ? "Ascending" : "Not ascending") << endl;
return 0;
}

/*
* Explanation:
* The variables `sorted`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 1`, keeps running while `i < numbers.size()` is true, and updates using `i++`.
* The condition `numbers[i] < numbers[i - 1]` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
