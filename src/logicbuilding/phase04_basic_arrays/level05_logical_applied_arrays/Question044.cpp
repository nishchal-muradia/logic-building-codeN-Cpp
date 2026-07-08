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
// Question 44: : Find the second smallest element in an array.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int smallest = INT_MAX, second = INT_MAX;
for (auto number : numbers) {{
if (number < smallest) {{
second = smallest;
smallest = number;
}} else if (number < second && number != smallest) {{
second = number;
}}
}}
cout << "Second smallest = " << second << endl;
return 0;
}

/*
* Explanation:
* The variables `smallest`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The enhanced `for` loop visits every element in the array one by one.
* The if/else checks test the important cases in order: `number < smallest`, `number < second && number != smallest`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
