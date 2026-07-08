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


int max(vector<int> values) {
int answer = values[0];
for (auto value : values) if (value > answer) answer = value;
return answer;
}

int main() {
// Question 4: : Find the maximum element in an array.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
cout << "Maximum = " << max(numbers) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The helper calculates the required result and returns it to the print statement.
* The calculated answer is printed after the logic produces the final value.
*/
