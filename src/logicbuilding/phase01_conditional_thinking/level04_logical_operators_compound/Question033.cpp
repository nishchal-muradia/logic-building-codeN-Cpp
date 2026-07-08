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
// Question 33: : Take three numbers and print the median value (neither maximum nor minimum).
int a = 12, b = 5, c = 20;
int median;
if ((a >= b && a <= c) || (a >= c && a <= b)) median = a;
else if ((b >= a && b <= c) || (b >= c && b <= a)) median = b;
else median = c;
cout << "Median = " << median << endl;
return 0;
}

/*
* Explanation:
* The value stored in `a` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `(a >= b && a <= c) || (a >= c && a <= b)`, `(b >= a && b <= c) || (b >= c && b <= a)`.
* Only the branch whose condition becomes true prints its message.
*/
