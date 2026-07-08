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
// Question 30: : Check whether a number is a perfect square (without using the square root function).
int number = 49;
bool perfectSquare = false;
for (int i = 1; i * i <= number; i++) {
if (i * i == number) {
perfectSquare = true;
break;
}
}
cout << (perfectSquare ? "Perfect square" : "Not a perfect square") << endl;
return 0;
}

/*
* Explanation:
* The value stored in `perfectSquare` is the input that the conditions or loops work on.
* The `for` loop starts with `int i = 1`, keeps running while `i * i <= number` is true, and updates using `i++`.
* The condition `i * i == number` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
