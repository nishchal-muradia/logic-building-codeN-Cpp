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
// Question 25: : Find LCM of two numbers using loops.
int first = 12, second = 18;
int a = first, b = second;
while (b != 0) {
int remainder = a % b;
a = b;
b = remainder;
}
int lcm = abs(first * second) / abs(a);
cout << "LCM = " << lcm << endl;
return 0;
}

/*
* Explanation:
* The variables `first`, `a`, `remainder`, and `lcm` hold the values that the logic checks, counts, or transforms.
* The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
* The calculated answer is printed after the logic produces the final value.
*/
