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
// Question 2: : Find the sum of all elements in an array.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int sum = 0;
for (auto number : numbers) sum += number;
cout << "Sum = " << sum << endl;
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The enhanced `for` loop visits every element in the array one by one.
* The variable `sum` starts at 0 and collects values as the loop finds numbers that should be included.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
