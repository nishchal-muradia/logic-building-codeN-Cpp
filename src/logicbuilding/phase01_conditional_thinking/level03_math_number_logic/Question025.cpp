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
// Question 25: : Check if a number is a multiple of 7 or ends with 7.
int number = 147;
if (number % 7 == 0 || abs(number) % 10 == 7) cout << "Matches condition" << endl;
else cout << "Does not match condition" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The condition `number % 7 == 0 || abs(number) % 10 == 7` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
