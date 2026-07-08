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
// Question 18: : Take an alphabet character and check if it lies between 'a' and 'm' or 'n' and 'z'.
char ch = 'h';
if (ch >= 'a' && ch <= 'm') cout << "Between a and m" << endl;
else if (ch >= 'n' && ch <= 'z') cout << "Between n and z" << endl;
else cout << "Not a lowercase alphabet" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `ch` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `ch >= 'a' && ch <= 'm'`, `ch >= 'n' && ch <= 'z'`.
* Only the branch whose condition becomes true prints its message.
*/
