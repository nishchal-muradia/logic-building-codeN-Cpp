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
// Question 28: : Find the second largest element in an array.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int largest = INT_MIN, second = INT_MIN;
for (auto number : numbers) {{
if (number > largest) {{
second = largest;
largest = number;
}} else if (number > second && number != largest) {{
second = number;
}}
}}
cout << "Second largest = " << second << endl;
return 0;
}

/*
* Explanation:
* The variables `largest`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The enhanced `for` loop visits every element in the array one by one.
* The if/else checks test the important cases in order: `number > largest`, `number > second && number != largest`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
