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
// Question 8: : Take a temperature value and print "Cold", "Warm", or "Hot" using range conditions.
int temperature = 31;
if (temperature < 15) cout << "Cold" << endl;
else if (temperature <= 30) cout << "Warm" << endl;
else cout << "Hot" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `temperature` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `temperature < 15`, `temperature <= 30`.
* Only the branch whose condition becomes true prints its message.
*/
