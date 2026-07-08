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
// Question 1: : Take a number and print whether it's positive, negative, or zero.
int number = -7;
if (number > 0) cout << "Positive" << endl;
else if (number < 0) cout << "Negative" << endl;
else cout << "Zero" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `number > 0`, `number < 0`.
* Only the branch whose condition becomes true prints its message.
*/
