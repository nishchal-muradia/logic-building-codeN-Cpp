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
// Question 30: : Find the sum of all elements at odd indices.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int sum = 0;
for (int i = 1; i < numbers.size(); i += 2) sum += numbers[i];
cout << "Sum = " << sum << endl;
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The `for` loop starts with `int i = 1`, keeps running while `i < numbers.size()` is true, and updates using `i += 2`.
* The variable `sum` starts at 0 and collects values as the loop finds numbers that should be included.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
