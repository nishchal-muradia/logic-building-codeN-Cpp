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
// Question 20: Print numbers in an increasing sequence.
int rows = 5;

for (int row = 1; row <= rows; row++) {
for (int number = 1; number <= row; number++) {
cout << number;
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* We use a counter variable to represent the current number.
* The loop prints the counter while it stays inside the required range.
* After every print, the counter changes so the loop can move toward the ending value.
*/
