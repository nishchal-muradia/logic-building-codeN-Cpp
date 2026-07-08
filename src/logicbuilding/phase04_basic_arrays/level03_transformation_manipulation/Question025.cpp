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
// Question 25: : Swap the first and last elements of the array.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int temp = numbers[0];
numbers[0] = numbers[numbers.size() - 1];
numbers[numbers.size() - 1] = temp;
printArray(numbers);
return 0;
}

/*
* Explanation:
* The variables `temp`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The helper calculates the required result and returns it to the print statement.
*/
