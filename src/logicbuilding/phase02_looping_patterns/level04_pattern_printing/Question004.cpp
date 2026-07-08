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
// Question 4: Print Square of Stars (n x n Stars).
int n = 5;

for (int row = 1; row <= n; row++) {
for (int column = 1; column <= n; column++) {
cout << "*";
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* We loop from 1 to n.
* For every number, the code multiplies the number by itself.
* The square value is printed before the loop moves to the next number.
*/
