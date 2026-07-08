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
// Question 15: : Check if all elements in an array are unique.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
bool unique = true;
for (int i = 0; i < numbers.size(); i++) {{
for (int j = i + 1; j < numbers.size(); j++) {{
if (numbers[i] == numbers[j]) unique = false;
}}
}}
cout << (unique ? "All unique" : "Duplicates found") << endl;
return 0;
}

/*
* Explanation:
* The variables `unique`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < numbers.size()` is true, and updates using `i++`.
* The condition `numbers[i] == numbers[j]` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
