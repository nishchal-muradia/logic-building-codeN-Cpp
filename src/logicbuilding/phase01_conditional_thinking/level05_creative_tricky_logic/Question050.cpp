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
// Question 50: : Take a year and print the corresponding century (e.g., "19th century", "20th century").
int year = 1998;
int century = (year + 99) / 100;
cout << century << "th century" << endl;
return 0;
}

/*
* Explanation:
* The variables `year`, and `century` hold the values that the logic checks, counts, or transforms.
* The calculated answer is printed after the logic produces the final value.
*/
