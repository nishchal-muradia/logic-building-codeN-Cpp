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
// Question 39: : Create a frequency array of numbers (count occurrence of each number).
vector<int> numbers = {4, -2, 7, 0, 7, 3};
vector<bool> visited(numbers.size(), false);
for (int i = 0; i < numbers.size(); i++) {{
if (visited[i]) continue;
int count = 1;
for (int j = i + 1; j < numbers.size(); j++) {{
if (numbers[i] == numbers[j]) {{
visited[j] = true;
count++;
}}
}}
cout << numbers[i] << " -> " << count << endl;
}}
return 0;
}

/*
* Explanation:
* The variables `numbers`, and `visited` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < numbers.size()` is true, and updates using `i++`.
* The condition `numbers[i] == numbers[j]` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
