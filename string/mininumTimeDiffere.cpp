#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        
        // Convert timePoints to minutes
        for (string curr : timePoints) {
            int hours = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            minutes.push_back(hours * 60 + min);
        }

        // Sort the minutes
        sort(minutes.begin(), minutes.end());

        // Find the minimum time difference
        int mini = INT_MAX;
        int n = minutes.size();

        for (int i = 0; i < n - 1; i++) { // ✅ Fixed loop condition
            int diff = minutes[i+1] - minutes[i];
            mini = min(mini, diff);
        }

        // ✅ Consider circular case (e.g., "23:59" and "00:00")
        int circularDiff = (1440 - minutes[n-1]) + minutes[0];
        mini = min(mini, circularDiff);

        return mini;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<string> timePoints = {"23:59", "00:00", "12:34"};
    cout << "Minimum Time Difference: " << sol.findMinDifference(timePoints) << endl;
    return 0;
}
