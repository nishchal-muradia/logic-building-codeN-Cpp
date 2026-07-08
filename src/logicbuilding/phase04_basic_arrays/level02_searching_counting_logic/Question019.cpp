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
// Question 19: : Count how many numbers are divisible by 3 and 5 both.
vector<int> numbers = {15, 9, 30, 22, 45, 10};
int count = 0;

for (auto number : numbers) {
if (number % 3 == 0 && number % 5 == 0) {
count++;
}
}

cout << "Divisible by both 3 and 5 = " << count << endl;
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The enhanced `for` loop visits every element in the array one by one.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* The condition `number % 3 == 0 && number % 5 == 0` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
