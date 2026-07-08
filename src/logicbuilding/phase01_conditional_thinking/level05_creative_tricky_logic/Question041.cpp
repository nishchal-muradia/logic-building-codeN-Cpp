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
// Question 41: : Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the origin.
int x = 0, y = 5;
if (x == 0 && y == 0) cout << "Origin" << endl;
else if (y == 0) cout << "X-axis" << endl;
else if (x == 0) cout << "Y-axis" << endl;
else cout << "Not on an axis" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `x` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `x == 0 && y == 0`, `y == 0`, `x == 0`.
* Only the branch whose condition becomes true prints its message.
*/
