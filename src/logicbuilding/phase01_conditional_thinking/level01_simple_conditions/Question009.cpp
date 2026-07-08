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


bool isVowel(char ch) {
char lower = tolower(ch);
return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int main() {
// Question 9: : Take a character and check if it's a vowel or consonant.
char ch = 'e';
if (isalpha(ch)) {
if (isVowel(ch)) cout << "Vowel" << endl;
else cout << "Consonant" << endl;
} else {
cout << "Not an alphabet" << endl;
}
return 0;
}

/*
* Explanation:
* The value stored in `ch` is the input that the conditions or loops work on.
* The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
* The if/else checks test the important cases in order: `isalpha(ch)`, `isVowel(ch)`.
* Only the branch whose condition becomes true prints its message.
*/
