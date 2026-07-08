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
// Question 29: : Rotate an array by one position to the right.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int last = numbers[numbers.size() - 1];
for (int i = numbers.size() - 1; i > 0; i--) numbers[i] = numbers[i - 1];
numbers[0] = last;
printArray(numbers);
return 0;
}

/*
* Explanation:
* The variables `last`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The helper calculates the required result and returns it to the print statement.
* The `for` loop starts with `int i = numbers.size() - 1`, keeps running while `i > 0` is true, and updates using `i--`.
*/
