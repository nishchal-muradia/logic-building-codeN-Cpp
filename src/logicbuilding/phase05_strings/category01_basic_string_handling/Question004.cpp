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
// Question 4: : Convert all characters of a string to lowercase.
string text = "LOGIC";
for (char& ch : text) ch = (char)tolower((unsigned char)ch);
cout << text << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The calculated answer is printed after the logic produces the final value.
*/
