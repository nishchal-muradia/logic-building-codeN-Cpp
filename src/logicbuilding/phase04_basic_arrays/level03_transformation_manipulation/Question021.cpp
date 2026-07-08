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


void printArray(vector<int> values) {
for (auto value : values) cout << value << " ";
cout << endl;
}

int main() {
// Question 21: : Create a new array containing squares of all numbers.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
vector<int> squares(numbers.size());
for (int i = 0; i < numbers.size(); i++) squares[i] = numbers[i] * numbers[i];
printArray(squares);
return 0;
}

/*
* Explanation:
* The variables `numbers`, and `squares` hold the values that the logic checks, counts, or transforms.
* The helper calculates the required result and returns it to the print statement.
* The `for` loop starts with `int i = 0`, keeps running while `i < numbers.size()` is true, and updates using `i++`.
*/
