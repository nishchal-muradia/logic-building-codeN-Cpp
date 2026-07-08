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
// Question 26: : Count how many elements are even at an even index.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int count = 0;
for (int i = 0; i < numbers.size(); i += 2) if (numbers[i] % 2 == 0) count++;
cout << "Count = " << count << endl;
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The `for` loop starts with `int i = 0`, keeps running while `i < numbers.size()` is true, and updates using `i += 2`.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* The condition `numbers[i] % 2 == 0` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
