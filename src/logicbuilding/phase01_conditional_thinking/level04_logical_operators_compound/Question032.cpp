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
// Question 32: : Take a number and print "Fizz" if divisible by 3, "Buzz" if divisible by 5, and "FizzBuzz" if divisible by both.
int number = 25;
if (number % 5 == 0) cout << "Divisible by 5" << endl;
else cout << "Not divisible by 5" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The condition `number % 5 == 0` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
