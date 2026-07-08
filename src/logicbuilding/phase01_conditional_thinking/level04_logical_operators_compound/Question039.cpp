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
// Question 39: : Take electricity units consumed and calculate the bill as per slabs (using if-else).
int units = 250;
double bill;
if (units <= 100) bill = units * 5;
else if (units <= 200) bill = 100 * 5 + (units - 100) * 7;
else bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
cout << "Bill = " << bill << endl;
return 0;
}

/*
* Explanation:
* The value stored in `units` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `units <= 100`, `units <= 200`.
* Only the branch whose condition becomes true prints its message.
*/
