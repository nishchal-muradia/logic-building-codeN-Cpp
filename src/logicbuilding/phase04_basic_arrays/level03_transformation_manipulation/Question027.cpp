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
// Question 27: : Rotate an array by one position to the left.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int first = numbers[0];
for (int i = 0; i < numbers.size() - 1; i++) numbers[i] = numbers[i + 1];
numbers[numbers.size() - 1] = first;
printArray(numbers);
return 0;
}

/*
* Explanation:
* The variables `first`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The helper calculates the required result and returns it to the print statement.
* The `for` loop starts with `int i = 0`, keeps running while `i < numbers.size() - 1` is true, and updates using `i++`.
*/
