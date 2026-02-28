#include <bits/stdc++.h>
using namespace std;

bool increasingTriplet(vector<int> &nums) {

    int first = INT_MAX, second = INT_MAX;

    for(int num : nums) {
        if(num <= first)
            first = num;
        else if(num <= second)
            second = num;
        else
            return true;
    }
    return false;
}

int main() {

    string s;
    getline(cin, s);   // take full input line

    vector<int> nums;
    string temp = "";

    for(char ch : s) {

        if(isdigit(ch)) {
            temp += ch;        // build number
        }
        else {
            if(temp != "") {
                nums.push_back(stoi(temp));
                temp = "";
            }
        }
    }

    // push last number if exists
    if(temp != "")
        nums.push_back(stoi(temp));

    cout << (increasingTriplet(nums) ? "true" : "false");

    return 0;
}