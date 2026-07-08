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
// Question 6: : Count how many words are in a sentence.
string sentence = "logic building is fun";
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
vector<string> words = wordsList1;
cout << "Words = " << words.size() << endl;
return 0;
}

/*
* Explanation:
* The variables `sentence`, and `words` hold the values that the logic checks, counts, or transforms.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The calculated answer is printed after the logic produces the final value.
*/
