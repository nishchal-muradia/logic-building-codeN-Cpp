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
// Question 45: : Find the difference between the largest and smallest element.
vector<int> numbers = {4, -2, 7, 0, 9, 3};
int largest = numbers[0];
int smallest = numbers[0];

for (auto number : numbers) {
if (number > largest) {
largest = number;
}
if (number < smallest) {
smallest = number;
}
}

cout << "Difference = " << (largest - smallest) << endl;
return 0;
}

/*
* Explanation:
* The variables `largest`, `smallest`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The enhanced `for` loop visits every element in the array one by one.
* The if/else checks test the important cases in order: `number > largest`, `number < smallest`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
