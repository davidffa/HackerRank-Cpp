#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, m;
    string nums[20] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty" }, hours = "";

    cin >> h >> m;

    if (m == 0) hours += nums[h-1] + " o' clock";
    else if (m == 30) hours += "half past " + nums[h-1];
    else if (m < 30) {
        if (m == 15) {
            hours += "quarter past " + nums[h-1];
        }else if (m <= 20) {
            hours += nums[m-1];
            m == 1 ? hours += " minute past " : hours += " minutes past ";
            hours += nums[h-1];
        }else {
            hours += "twenty " + nums[m-20-1] + " minutes past " + nums[h-1];
        }
    }
    else {
        if (60-m == 15) {
            hours += "quarter to " + nums[h];
        }else if (m <= 40) {
            hours += "twenty " + nums[60-m-20-1] + " minutes to " + nums[h];
        }else {
            hours += nums[60-m-1];
            60-m == 1 ? hours += " minute to " : hours += " minutes to ";
            hours += nums[h];
        }
    }

    cout << hours;

	return 0;
}
