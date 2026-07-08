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
// Question 28: : Remove the first and last character and print the remaining string.
string text = "logic";
cout << "First = " << text[0] << endl;
cout << "Last = " << text[text.size() - 1] << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* `charAt(i)` lets the code inspect one character at a time by index.
* The calculated answer is printed after the logic produces the final value.
*/
