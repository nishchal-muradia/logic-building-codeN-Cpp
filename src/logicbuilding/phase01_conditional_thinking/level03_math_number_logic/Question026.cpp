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
// Question 26: : Take coordinates (x, y) and determine which quadrant the point lies in.
int x = -4, y = 6;
if (x > 0 && y > 0) cout << "Quadrant I" << endl;
else if (x < 0 && y > 0) cout << "Quadrant II" << endl;
else if (x < 0 && y < 0) cout << "Quadrant III" << endl;
else if (x > 0 && y < 0) cout << "Quadrant IV" << endl;
else cout << "Point lies on an axis or origin" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `x` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `x > 0 && y > 0`, `x < 0 && y > 0`, `x < 0 && y < 0`.
* Only the branch whose condition becomes true prints its message.
*/
