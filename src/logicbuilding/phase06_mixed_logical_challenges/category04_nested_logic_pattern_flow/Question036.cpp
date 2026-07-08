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
// Question 36: : Find all pairs of characters in a string that are the same (nested loop).
vector<int> numbers = {4, -2, 7, 0, 7, 3};
printArray(numbers);
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The helper calculates the required result and returns it to the print statement.
*/
