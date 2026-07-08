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
// Question 7: : Count how many elements are even and odd.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int even = 0, odd = 0;
for (auto number : numbers) {
if (number % 2 == 0) even++;
else odd++;
}
cout << "Even = " << even << ", Odd = " << odd << endl;
return 0;
}

/*
* Explanation:
* The variables `even`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The enhanced `for` loop visits every element in the array one by one.
* The condition `number % 2 == 0` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
