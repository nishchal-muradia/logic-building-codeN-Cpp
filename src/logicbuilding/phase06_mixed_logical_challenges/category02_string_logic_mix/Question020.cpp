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
// Question 20: : Remove duplicate words from a sentence.
vector<string> wordsList1;
stringstream wordStream1("java logic java code");
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
vector<string> words = wordsList1;
string result = "";
for (int i = 0; i < words.size(); i++) {
bool seen = false;
for (int j = 0; j < i; j++) if ((words[i] == words[j])) seen = true;
if (!seen) result += words[i] + " ";
}
if (!result.empty()) result.pop_back();
cout << result << endl;
return 0;
}

/*
* Explanation:
* The variables `seen`, and `words` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < words.size()` is true, and updates using `i++`.
* A `StringBuilder` is used so characters or words can be added gradually while building the final string.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The condition `(words[i] == words[j])` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
