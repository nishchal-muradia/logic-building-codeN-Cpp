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
// Question 21: : Print the squares of numbers from 1 to n.
int n = 5;
for (int number = 1; number <= n; number++) cout << number * number << endl;
return 0;
}

/*
* Explanation:
* The value stored in `n` is the input that the conditions or loops work on.
* The `for` loop starts with `int number = 1`, keeps running while `number <= n` is true, and updates using `number++`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
