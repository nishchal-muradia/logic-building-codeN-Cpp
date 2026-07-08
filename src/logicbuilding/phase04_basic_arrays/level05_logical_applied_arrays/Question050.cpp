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
// Question 50: : Print all unique elements (those that occur exactly once).
vector<int> numbers = {4, -2, 7, 0, 7, 3};
for (int i = 0; i < numbers.size(); i++) {{
int count = 0;
for (auto value : numbers) if (value == numbers[i]) count++;
if (count == 1) cout << numbers[i] << endl;
}}
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The enhanced `for` loop visits every element in the array one by one.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* The if/else checks test the important cases in order: `value == numbers[i]`, `count == 1`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
