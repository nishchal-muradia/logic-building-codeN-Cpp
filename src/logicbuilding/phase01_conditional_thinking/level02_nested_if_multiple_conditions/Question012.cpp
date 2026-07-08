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
// Question 12: : If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene.
int a = 5, b = 5, c = 8;
if (a + b > c && a + c > b && b + c > a) {
if (a == b && b == c) cout << "Equilateral" << endl;
else if (a == b || b == c || a == c) cout << "Isosceles" << endl;
else cout << "Scalene" << endl;
} else {
cout << "Invalid triangle" << endl;
}
return 0;
}

/*
* Explanation:
* The value stored in `a` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `a + b > c && a + c > b && b + c > a`, `a == b && b == c`, `a == b || b == c || a == c`.
* Only the branch whose condition becomes true prints its message.
*/
