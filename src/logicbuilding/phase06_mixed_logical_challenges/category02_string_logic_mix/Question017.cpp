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
// Question 17: : Toggle case for every alternate word in a sentence.
vector<string> wordsList1;
stringstream wordStream1("logic building is fun");
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
vector<string> words = wordsList1;
for (int i = 0; i < words.size(); i++) {
if (i % 2 == 0) {
string upperWord = words[i];
for (char& ch : upperWord) ch = (char)toupper((unsigned char)ch);
cout << upperWord << " ";
} else {
string lowerWord = words[i];
for (char& ch : lowerWord) ch = (char)tolower((unsigned char)ch);
cout << lowerWord << " ";
}
}
cout << endl;
return 0;
}

/*
* Explanation:
* The value stored in `words` is the input that the conditions or loops work on.
* The `for` loop starts with `int i = 0`, keeps running while `i < words.size()` is true, and updates using `i++`.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The condition `i % 2 == 0` decides whether the current value matches the requirement.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
