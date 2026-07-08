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
// Question 26: : Reverse an array (without using built-in reverse).
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int left = 0, right = numbers.size() - 1;
while (left < right) {{
int temp = numbers[left];
numbers[left] = numbers[right];
numbers[right] = temp;
left++;
right--;
}}
printArray(numbers);
return 0;
}

/*
* Explanation:
* The variables `left`, `temp`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The helper builds the answer from the last digit or last character toward the first one.
* The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
*/
