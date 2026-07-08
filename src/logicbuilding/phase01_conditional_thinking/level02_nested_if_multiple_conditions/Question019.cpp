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
// Question 19: : Take a day number (1-7) and print the corresponding day name.
int day = 3;
switch (day) {
case 1: cout << "Monday" << endl; break;
case 2: cout << "Tuesday" << endl; break;
case 3: cout << "Wednesday" << endl; break;
case 4: cout << "Thursday" << endl; break;
case 5: cout << "Friday" << endl; break;
case 6: cout << "Saturday" << endl; break;
case 7: cout << "Sunday" << endl; break;
default: cout << "Invalid day" << endl;
}
return 0;
}

/*
* Explanation:
* The value stored in `day` is the input that the conditions or loops work on.
* The calculated answer is printed after the logic produces the final value.
*/
