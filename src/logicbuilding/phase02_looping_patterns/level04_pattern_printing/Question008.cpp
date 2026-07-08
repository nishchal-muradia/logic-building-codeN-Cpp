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
// Question 8: Print Stars in Odd Numbers (1, 3, 5, 7, 9).
for (int stars = 1; stars <= 9; stars += 2) {
for (int count = 1; count <= stars; count++) {
cout << "*";
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* We use the modulo operator to check whether a value is odd.
* A value is odd when dividing by 2 does not leave remainder 0.
* The code prints, counts, or adds only the values that satisfy that condition.
*/
