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
// Question 11: : Input an element x - check if it exists in the array.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int x = 7;
bool found = false;
for (auto number : numbers) if (number == x) found = true;
cout << (found ? "Exists" : "Does not exist") << endl;
return 0;
}

/*
* Explanation:
* The variables `x`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The enhanced `for` loop visits every element in the array one by one.
* The bool `found` starts as false and becomes true as soon as the searched value is seen.
* The condition `number == x` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
