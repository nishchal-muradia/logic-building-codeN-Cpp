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
// Question 44: : Take time (hours and minutes) and print the smaller angle between the hour and minute hands.
int hours = 3;
int minutes = 30;
double hourAngle = (hours % 12) * 30 + minutes * 0.5;
double minuteAngle = minutes * 6;
double angle = abs(hourAngle - minuteAngle);
if (angle > 180) angle = 360 - angle;
cout << "Smaller angle = " << angle << endl;
return 0;
}

/*
* Explanation:
* The variables `hours`, `minutes`, `hourAngle`, and `minuteAngle` hold the values that the logic checks, counts, or transforms.
* The condition `angle > 180` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
