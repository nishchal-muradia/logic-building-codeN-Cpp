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
// Question 27: : Check if an amount can be evenly divided into 2000, 500, and 100 currency notes.
int amount = 7600;
int notes2000 = amount / 2000;
amount %= 2000;
int notes500 = amount / 500;
amount %= 500;
int notes100 = amount / 100;
amount %= 100;
if (amount == 0) cout << "2000: " << notes2000 << ", 500: " << notes500 << ", 100: " << notes100 << endl;
else cout << "Amount cannot be fully divided into these notes" << endl;
return 0;
}

/*
* Explanation:
* The variables `amount`, `notes2000`, `notes500`, and `notes100` hold the values that the logic checks, counts, or transforms.
* The condition `amount == 0` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
