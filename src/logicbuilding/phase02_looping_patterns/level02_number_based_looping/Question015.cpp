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


bool isArmstrong(int number) {
int value = number;
int digits = 0;
do {
digits++;
value /= 10;
} while (value > 0);
int sum = 0;
value = number;
do {
int digit = value % 10;
int power = 1;
for (int i = 1; i <= digits; i++) power *= digit;
sum += power;
value /= 10;
} while (value > 0);
return sum == number;
}

int main() {
// Question 15: : Check if a number is an Armstrong number.
int number = 153;
cout << (isArmstrong(number) ? "Armstrong number" : "Not Armstrong number") << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The helper counts how many digits the number has by repeatedly dividing a copy of the number by 10.
* Then it extracts each digit with `% 10`, raises that digit to the digit-count power, and adds it to `sum`.
* If the final `sum` equals the original number, the helper returns true.
* The calculated answer is printed after the logic produces the final value.
*/
