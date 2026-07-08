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
// Question 49: : Take two dates (day and month) and determine which one comes first in the calendar.
int day1 = 12, month1 = 5;
int day2 = 10, month2 = 6;
if (month1 < month2 || (month1 == month2 && day1 < day2)) cout << "First date comes first" << endl;
else if (month1 == month2 && day1 == day2) cout << "Both dates are same" << endl;
else cout << "Second date comes first" << endl;
return 0;
}

/*
* Explanation:
* The variables `day1`, and `day2` hold the values that the logic checks, counts, or transforms.
* The if/else checks test the important cases in order: `month1 < month2 || (month1 == month2 && day1 < day2)`, `month1 == month2 && day1 == day2`.
* Only the branch whose condition becomes true prints its message.
*/
