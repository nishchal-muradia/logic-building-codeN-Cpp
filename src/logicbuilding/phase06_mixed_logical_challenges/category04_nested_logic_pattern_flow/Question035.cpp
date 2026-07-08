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
// Question 35: : Count how many times a number appears consecutively in an array.
vector<int> numbers = {2, 2, 2, 3, 3, 4};
int target = 2, maxRun = 0, currentRun = 0;
for (auto number : numbers) {
if (number == target) currentRun++;
else currentRun = 0;
if (currentRun > maxRun) maxRun = currentRun;
}
cout << "Longest consecutive count = " << maxRun << endl;
return 0;
}

/*
* Explanation:
* The variables `target`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The enhanced `for` loop visits every element in the array one by one.
* The if/else checks test the important cases in order: `number == target`, `currentRun > maxRun`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
