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
// Question 28: : Check if a number lies within the range [100, 999].
int number = 456;
if (number >= 100 && number <= 999) cout << "Inside range" << endl;
else cout << "Outside range" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The condition `number >= 100 && number <= 999` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
