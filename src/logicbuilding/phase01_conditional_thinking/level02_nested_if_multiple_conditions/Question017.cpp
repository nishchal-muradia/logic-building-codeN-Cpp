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
// Question 17: : Take two numbers and determine whether both are even, both are odd, or one is even and one is odd.
int first = 12, second = 18;
if (first % 2 == 0 && second % 2 == 0) cout << "Both are even" << endl;
else if (first % 2 != 0 && second % 2 != 0) cout << "Both are odd" << endl;
else cout << "One is even and one is odd" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `first` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `first % 2 == 0 && second % 2 == 0`, `first % 2 != 0 && second % 2 != 0`.
* Only the branch whose condition becomes true prints its message.
*/
