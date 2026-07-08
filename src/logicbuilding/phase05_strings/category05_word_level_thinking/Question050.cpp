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
// Question 50: : Remove extra spaces between words (normalize spacing).
string sentence = "logic   building   is   fun";
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
for (size_t i = 0; i < wordsList1.size(); i++) {
if (i > 0) cout << " ";
cout << wordsList1[i];
}
cout << endl;
return 0;
}

/*
* Explanation:
* The value stored in `sentence` is the input that the conditions or loops work on.
* The calculated answer is printed after the logic produces the final value.
*/
