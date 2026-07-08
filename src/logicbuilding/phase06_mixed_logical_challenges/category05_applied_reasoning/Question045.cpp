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
// Question 45: : Count how many times a coin lands on heads/tails (use random).
vector<string> results = {"H", "T", "H", "H", "T"};
int heads = 0, tails = 0;
for (auto result : results) {
if ((result == "H")) heads++;
else tails++;
}
cout << "Heads = " << heads << ", Tails = " << tails << endl;
return 0;
}

/*
* Explanation:
* The variables `heads`, and `results` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `string result : results) { if ((result == "H")) heads++`, keeps running while `else tails++` is true, and updates using `} System.out.println("Heads = " + heads + ", Tails = " + tails`.
* The condition `(result == "H")` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
