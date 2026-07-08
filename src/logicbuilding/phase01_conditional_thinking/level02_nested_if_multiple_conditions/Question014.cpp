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
// Question 14: : Check if one of two given numbers is a multiple of the other.
int first = 12, second = 36;
if (first != 0 && second % first == 0) cout << "Second is a multiple of first" << endl;
else if (second != 0 && first % second == 0) cout << "First is a multiple of second" << endl;
else cout << "No number is a multiple of the other" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `first` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `first != 0 && second % first == 0`, `second != 0 && first % second == 0`.
* Only the branch whose condition becomes true prints its message.
*/
