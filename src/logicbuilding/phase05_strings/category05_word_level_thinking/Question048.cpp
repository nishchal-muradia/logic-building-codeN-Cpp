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
// Question 48: : Capitalize the first letter of each word.
string sentence = "logic building is fun";
string result = "";
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
for (auto word : wordsList1) {
string lowerRest = word.substr(1);
for (char& ch : lowerRest) ch = (char)tolower((unsigned char)ch);
result += string(1, (char)toupper((unsigned char)word[0])) + lowerRest + " ";
}
if (!result.empty()) result.pop_back();
cout << result << endl;
return 0;
}

/*
* Explanation:
* The value stored in `sentence` is the input that the conditions or loops work on.
* The loop goes word by word after splitting the sentence, so each word can be checked separately.
* A `StringBuilder` is used so characters or words can be added gradually while building the final string.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
