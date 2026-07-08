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
// Question 34: : Take 24-hour time (hours and minutes) and print whether it is AM or PM.
int hour = 14;
int minutes = 30;
if (hour < 12) cout << "AM" << endl;
else cout << "PM" << endl;
return 0;
}

/*
* Explanation:
* The variables `hour`, and `minutes` hold the values that the logic checks, counts, or transforms.
* The condition `hour < 12` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
