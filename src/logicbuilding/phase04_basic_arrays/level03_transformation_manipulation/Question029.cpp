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
// Question 29: : Swap alternate elements (1st <-> 2nd, 3rd <-> 4th, etc.).
vector<int> numbers = {4, -2, 7, 0, 7, 3};
for (int i = 0; i + 1 < numbers.size(); i += 2) {{
int temp = numbers[i];
numbers[i] = numbers[i + 1];
numbers[i + 1] = temp;
}}
printArray(numbers);
return 0;
}

/*
* Explanation:
* The variables `temp`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The helper calculates the required result and returns it to the print statement.
* The `for` loop starts with `int i = 0`, keeps running while `i + 1 < numbers.size()` is true, and updates using `i += 2`.
*/
