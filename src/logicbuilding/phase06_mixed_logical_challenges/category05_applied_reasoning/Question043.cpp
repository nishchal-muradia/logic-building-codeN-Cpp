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
// Question 43: : Validate a password (at least one uppercase, lowercase, digit, special char).
string password = "Code123!";
bool hasDigit = false, hasUpper = false, hasLower = false, hasSpecial = false;
for (int i = 0; i < password.size(); i++) {
char ch = password[i];
if (isdigit(ch)) hasDigit = true;
else if (isupper(ch)) hasUpper = true;
else if (islower(ch)) hasLower = true;
else hasSpecial = true;
}
if (password.size() >= 8 && hasDigit && hasUpper && hasLower && hasSpecial) cout << "Valid password" << endl;
else cout << "Invalid password" << endl;
return 0;
}

/*
* Explanation:
* The variables `password`, `hasDigit`, and `ch` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < password.size()` is true, and updates using `i++`.
* `charAt(i)` lets the code inspect one character at a time by index.
* The if/else checks test the important cases in order: `isdigit(ch)`, `isupper(ch)`, `islower(ch)`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
