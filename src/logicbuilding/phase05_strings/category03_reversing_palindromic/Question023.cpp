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
// Question 23: : Reverse the order of words in a sentence.
vector<string> wordsList1;
stringstream wordStream1("logic building is fun");
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
vector<string> words = wordsList1;
for (int i = words.size() - 1; i >= 0; i--) cout << words[i] << " ";
cout << endl;
return 0;
}

/*
* Explanation:
* The value stored in `words` is the input that the conditions or loops work on.
* The `for` loop starts with `int i = words.size() - 1`, keeps running while `i >= 0` is true, and updates using `i--`.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
