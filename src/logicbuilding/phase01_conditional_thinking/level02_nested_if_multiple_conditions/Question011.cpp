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
// Question 11: : Take three sides and check if they form a valid triangle.
int a = 3, b = 4, c = 5;
if (a + b > c && a + c > b && b + c > a) cout << "Valid triangle" << endl;
else cout << "Invalid triangle" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `a` is the input that the conditions or loops work on.
* The condition `a + b > c && a + c > b && b + c > a` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
