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
// Question 42: : Take age inputs and count how many are adults, minors, seniors.
vector<int> ages = {12, 18, 35, 61, 8, 75};
int minors = 0;
int adults = 0;
int seniors = 0;

for (auto age : ages) {
if (age < 18) {
minors++;
} else if (age >= 60) {
seniors++;
} else {
adults++;
}
}

cout << "Minors = " << minors << endl;
cout << "Adults = " << adults << endl;
cout << "Seniors = " << seniors << endl;
return 0;
}

/*
* Explanation:
* The variables `minors`, `adults`, `seniors`, and `ages` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int age : ages) { if (age < 18) { minors++`, keeps running while `} else if (age >= 60) { seniors++` is true, and updates using `} else { adults++; } } System.out.println("Minors = " + minors`.
* The if/else checks test the important cases in order: `age < 18`, `age >= 60`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
