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
// Question 8: : Compare two strings lexicographically (like dictionary order).
string first = "apple";
string second = "banana";
int result = first.compare(second);
cout << (result < 0 ? "First comes earlier" : result > 0 ? "Second comes earlier" : "Both are equal") << endl;
return 0;
}

/*
* Explanation:
* The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
* The calculated answer is printed after the logic produces the final value.
*/
