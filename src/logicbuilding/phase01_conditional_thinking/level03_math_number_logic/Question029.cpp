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
// Question 29: : Take two angles of a triangle and compute the third angle.
int firstAngle = 50;
int secondAngle = 60;
int thirdAngle = 180 - firstAngle - secondAngle;
cout << "Third angle = " << thirdAngle << endl;
return 0;
}

/*
* Explanation:
* The variables `firstAngle`, `secondAngle`, and `thirdAngle` hold the values that the logic checks, counts, or transforms.
* The calculated answer is printed after the logic produces the final value.
*/
