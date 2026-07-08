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
// Question 32: : Remove all spaces from a string.
string text = "logic building";
string withoutSpaces = "";
for (char ch : text) if (ch != ' ') withoutSpaces += ch;
cout << withoutSpaces << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The calculated answer is printed after the logic produces the final value.
*/
