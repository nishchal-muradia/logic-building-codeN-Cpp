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
// Question 25: : Shift all zeros to the end of the array.
vector<int> numbers = {0, 4, 0, 5, 7, 0};
int index = 0;
for (auto number : numbers) if (number != 0) numbers[index++] = number;
while (index < numbers.size()) numbers[index++] = 0;
printArray(numbers);
return 0;
}

/*
* Explanation:
* The variables `index`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The helper calculates the required result and returns it to the print statement.
* The enhanced `for` loop visits every element in the array one by one.
* The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
*/
