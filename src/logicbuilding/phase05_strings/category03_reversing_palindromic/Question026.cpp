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
// Question 26: : Print the middle character(s) of a string.
string text = "coding";
int length = text.size();
if (length % 2 == 0) cout << text.substr(length / 2 - 1, length / 2 + 1) << endl;
else cout << text[length / 2] << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, and `length` hold the values that the logic checks, counts, or transforms.
* `charAt(i)` lets the code inspect one character at a time by index.
* The condition `length % 2 == 0` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
