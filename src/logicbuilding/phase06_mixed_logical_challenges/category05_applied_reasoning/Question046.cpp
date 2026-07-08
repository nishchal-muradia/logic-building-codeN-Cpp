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
// Question 46: : Print frequency of each digit in a number.
int number = 122333045;
vector<int> frequency(10);
int value = number;

while (value > 0) {
int digit = value % 10;
frequency[digit]++;
value /= 10;
}

for (int digit = 0; digit < frequency.size(); digit++) {
if (frequency[digit] > 0) {
cout << digit << " appears " << frequency[digit] << " times" << endl;
}
}
return 0;
}

/*
* Explanation:
* We store the sample number in `number` and create a `frequency` array with 10 positions, one for each digit from 0 to 9.
* The `while` loop extracts the last digit using `% 10` and then removes it using `/= 10`.
* For every extracted digit, `frequency[digit]++` increases the counter for that exact digit.
* The final `for` loop goes through the frequency array and prints only the digits that appeared at least once.
*/
