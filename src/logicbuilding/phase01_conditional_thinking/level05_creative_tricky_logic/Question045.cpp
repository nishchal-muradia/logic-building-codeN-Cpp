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
// Question 45: : Take three numbers and check if they are in arithmetic progression.
int a = 4, b = 8, c = 12;
if (b - a == c - b) cout << "Arithmetic progression" << endl;
else cout << "Not an arithmetic progression" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `a` is the input that the conditions or loops work on.
* The condition `b - a == c - b` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
