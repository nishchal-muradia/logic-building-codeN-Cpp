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
// Question 49: : Print the frequency of each distinct element.
vector<int> numbers = {4, 7, 4, 2, 7, 9, 2};
vector<bool> visited(numbers.size(), false);

for (int i = 0; i < numbers.size(); i++) {
if (visited[i]) {
continue;
}

int count = 1;
for (int j = i + 1; j < numbers.size(); j++) {
if (numbers[i] == numbers[j]) {
count++;
visited[j] = true;
}
}

cout << numbers[i] << " appears " << count << " times" << endl;
}
return 0;
}

/*
* Explanation:
* The variables `numbers`, and `visited` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < numbers.size()` is true, and updates using `i++`.
* The if/else checks test the important cases in order: `visited[i]`, `numbers[i] == numbers[j]`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
