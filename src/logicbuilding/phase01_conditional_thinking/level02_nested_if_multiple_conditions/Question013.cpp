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
// Question 13: : Take marks (0-100) and print the corresponding grade (A/B/C/D/F).
int marks = 82;
if (marks >= 90) cout << "A" << endl;
else if (marks >= 75) cout << "B" << endl;
else if (marks >= 60) cout << "C" << endl;
else if (marks >= 40) cout << "D" << endl;
else cout << "F" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `marks` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `marks >= 90`, `marks >= 75`, `marks >= 60`.
* Only the branch whose condition becomes true prints its message.
*/
