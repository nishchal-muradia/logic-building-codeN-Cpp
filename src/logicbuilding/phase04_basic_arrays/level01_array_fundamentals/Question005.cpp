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


int min(vector<int> values) {
int answer = values[0];
for (auto value : values) if (value < answer) answer = value;
return answer;
}

int main() {
// Question 5: : Find the minimum element in an array.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
cout << "Minimum = " << min(numbers) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The helper calculates the required result and returns it to the print statement.
* The calculated answer is printed after the logic produces the final value.
*/
