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
// Question 41: : Given marks of students, find how many passed (>= 40).
vector<int> marks = {35, 40, 76, 22, 90};
int passed = 0;
for (auto mark : marks) if (mark >= 40) passed++;
cout << "Passed = " << passed << endl;
return 0;
}

/*
* Explanation:
* The variables `passed`, and `marks` hold the values that the logic checks, counts, or transforms.
* The loop repeats the same check or calculation for every required value.
* The condition `mark >= 40` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
