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
// Question 18: : Check if two strings are rotations of each other.
string first = "abcd";
string second = "cdab";
cout << ((first.size() == second.size() && (first + first).find(second) != string::npos) ? "Rotation" : "Not rotation") << endl;
return 0;
}

/*
* Explanation:
* The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
* The calculated answer is printed after the logic produces the final value.
*/
