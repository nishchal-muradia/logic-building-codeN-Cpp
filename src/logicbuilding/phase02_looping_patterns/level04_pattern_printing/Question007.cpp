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
// Question 7: Print Stars in Even Numbers (2, 4, 6, 8, 10).
for (int stars = 2; stars <= 10; stars += 2) {
for (int count = 1; count <= stars; count++) {
cout << "*";
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* We use the modulo operator to check whether a value is even.
* A value is even when dividing by 2 leaves remainder 0.
* The code prints, counts, or adds only the values that satisfy that condition.
*/
