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
// Question 12: : Count how many times a given element appears.
vector<int> numbers = {4, 7, 2, 7, 9, 7};
int target = 7;
int count = 0;

for (auto number : numbers) {
if (number == target) {
count++;
}
}

cout << "Frequency = " << count << endl;
return 0;
}

/*
* Explanation:
* We keep the array in `numbers`, choose the value to search for in `target`, and start `count` from 0.
* The enhanced `for` loop checks every array element one by one.
* Whenever `number == target` is true, the code increases `count`.
* After the loop finishes, `count` contains the total frequency of the target element.
*/
