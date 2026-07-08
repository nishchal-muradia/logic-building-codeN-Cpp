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
// Question 10: : Take n elements and print only those greater than a given value k.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int k = 3;
for (auto number : numbers) if (number > k) cout << number << endl;
return 0;
}

/*
* Explanation:
* The variables `k`, and `numbers` hold the values that the logic checks, counts, or transforms.
* The enhanced `for` loop visits every element in the array one by one.
* The condition `number > k` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
