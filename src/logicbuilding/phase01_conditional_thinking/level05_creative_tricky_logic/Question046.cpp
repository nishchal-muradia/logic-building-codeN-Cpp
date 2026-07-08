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
// Question 46: : Take three numbers and check if they are in geometric progression.
int a = 3, b = 9, c = 27;
if (b * b == a * c) cout << "Geometric progression" << endl;
else cout << "Not a geometric progression" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `a` is the input that the conditions or loops work on.
* The condition `b * b == a * c` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
