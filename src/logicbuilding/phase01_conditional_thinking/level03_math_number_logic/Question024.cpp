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
// Question 24: : Check whether a given integer is single-digit, double-digit, or multi-digit.
int number = 87;
int value = abs(number);
if (value <= 9) cout << "Single-digit" << endl;
else if (value <= 99) cout << "Double-digit" << endl;
else cout << "Multi-digit" << endl;
return 0;
}

/*
* Explanation:
* The variables `number`, and `value` hold the values that the logic checks, counts, or transforms.
* The if/else checks test the important cases in order: `value <= 9`, `value <= 99`.
* Only the branch whose condition becomes true prints its message.
*/
