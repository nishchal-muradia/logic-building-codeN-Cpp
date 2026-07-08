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


void printArray(vector<int> values) {
for (auto value : values) cout << value << " ";
cout << endl;
}

int main() {
// Question 49: : Count how many prime numbers are there in an array.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
printArray(numbers);
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The helper tries possible divisors from 2 up to the square root of the number.
* If any divisor divides the number exactly, the number is not prime; otherwise it is prime.
*/
