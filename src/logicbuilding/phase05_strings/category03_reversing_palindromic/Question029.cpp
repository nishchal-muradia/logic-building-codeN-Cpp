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

string toText(const string& value) { return value; }
string toText(const char* value) { return string(value); }
string toText(char value) { return string(1, value); }
string toText(int value) { return to_string(value); }
string toText(long long value) { return to_string(value); }
string toText(double value) { return to_string(value); }
string toText(bool value) { return value ? "true" : "false"; }

string toUpper(string text) {
    for (char& ch : text) ch = (char)toupper((unsigned char)ch);
    return text;
}

string toLower(string text) {
    for (char& ch : text) ch = (char)tolower((unsigned char)ch);
    return text;
}

string trim(string text) {
    size_t start = text.find_first_not_of(" \t\n\r");
    if (start == string::npos) return "";
    size_t end = text.find_last_not_of(" \t\n\r");
    return text.substr(start, end - start + 1);
}
string removeSpaces(string text) {
    string cleaned;
    for (char ch : text) if (ch != ' ') cleaned += ch;
    return cleaned;
}

string removeSpacesToLower(string text) {
    string cleaned;
    for (char ch : text) if (ch != ' ') cleaned += (char)tolower((unsigned char)ch);
    return cleaned;
}

vector<string> splitWords(const string& text);

string normalizeSpaces(string text) {
    vector<string> words = splitWords(text);
    string result;
    for (size_t i = 0; i < words.size(); i++) {
        if (i > 0) result += " ";
        result += words[i];
    }
    return result;
}

vector<string> splitWords(const string& text) {
    vector<string> words;
    stringstream ss(text);
    string word;
    while (ss >> word) words.push_back(word);
    return words;
}


int main() {
// Question 29: : Reverse only characters, keeping digits in place.
string text = "a1b2c3";
vector<char> chars(text.begin(), text.end());
int left = 0, right = chars.size() - 1;
while (left < right) {
if (isdigit(chars[left])) left++;
else if (isdigit(chars[right])) right--;
else {
char temp = chars[left];
chars[left] = chars[right];
chars[right] = temp;
left++;
right--;
}
}
cout << string(chars.begin(), chars.end()) << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, `left`, `temp`, and `chars` hold the values that the logic checks, counts, or transforms.
* The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
* The if/else checks test the important cases in order: `isdigit(chars[left])`, `isdigit(chars[right])`.
* Only the branch whose condition becomes true prints its message.
*/
