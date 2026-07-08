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
// Question 23: : Replace every negative number with 0.
vector<int> numbers = {4, -2, 7, -8, 0, 3};

for (int i = 0; i < numbers.size(); i++) {
if (numbers[i] < 0) {
numbers[i] = 0;
}
}

for (auto number : numbers) {
cout << number << " ";
}
cout << endl;
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The enhanced `for` loop visits every element in the array one by one.
* The condition `numbers[i] < 0` decides whether the current value matches the requirement.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
