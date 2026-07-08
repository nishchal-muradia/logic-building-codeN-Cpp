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
// Question 24: : Find HCF (GCD) of two numbers using loops.
int first = 48, second = 18;
while (second != 0) {
int remainder = first % second;
first = second;
second = remainder;
}
cout << "GCD = " << abs(first) << endl;
return 0;
}

/*
* Explanation:
* The variables `first`, and `remainder` hold the values that the logic checks, counts, or transforms.
* The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
* The calculated answer is printed after the logic produces the final value.
*/
