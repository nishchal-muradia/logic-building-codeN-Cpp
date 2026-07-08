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
// Question 6: : Count how many even digits a number contains.
int number = 482671;
int value = number;
int count = 0;

while (value > 0) {
int digit = value % 10;
if (digit % 2 == 0) {
count++;
}
value /= 10;
}

cout << "Even digits = " << count << endl;
return 0;
}

/*
* Explanation:
* The variables `number`, `value`, `count`, and `digit` hold the values that the logic checks, counts, or transforms.
* The loop uses `% 10` to take the last digit and `/= 10` to remove that digit, which is the standard digit-processing pattern.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* The condition `digit % 2 == 0` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
