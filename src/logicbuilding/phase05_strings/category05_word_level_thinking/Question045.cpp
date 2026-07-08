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
// Question 45: : Swap first and last words in a sentence.
vector<string> wordsList1;
stringstream wordStream1("logic building is fun");
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
vector<string> words = wordsList1;
string temp = words[0];
words[0] = words[words.size() - 1];
words[words.size() - 1] = temp;
for (auto word : words) cout << word << " ";
cout << endl;
return 0;
}

/*
* Explanation:
* The variables `temp`, and `words` hold the values that the logic checks, counts, or transforms.
* The loop goes word by word after splitting the sentence, so each word can be checked separately.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
