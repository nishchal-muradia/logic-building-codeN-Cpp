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
// Question 42: : Take three numbers and check if they can form a Pythagorean triplet.
int a = 3, b = 4, c = 5;
if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) cout << "Pythagorean triplet" << endl;
else cout << "Not a Pythagorean triplet" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `a` is the input that the conditions or loops work on.
* The condition `a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
