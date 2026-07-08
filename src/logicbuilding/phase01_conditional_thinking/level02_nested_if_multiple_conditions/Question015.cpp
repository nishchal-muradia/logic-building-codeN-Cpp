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
// Question 15: : Take the hour of the day (0-23) and print "Good Morning", "Good Afternoon", "Good Evening", or "Good Night".
int hour = 16;
if (hour >= 5 && hour < 12) cout << "Good Morning" << endl;
else if (hour >= 12 && hour < 17) cout << "Good Afternoon" << endl;
else if (hour >= 17 && hour < 21) cout << "Good Evening" << endl;
else cout << "Good Night" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `hour` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `hour >= 5 && hour < 12`, `hour >= 12 && hour < 17`, `hour >= 17 && hour < 21`.
* Only the branch whose condition becomes true prints its message.
*/
