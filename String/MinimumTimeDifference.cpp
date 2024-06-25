#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits> 

using namespace std;

int findMinDifference(vector<string>& timePoints) {
    vector<int> minutes;
    
    // Step 1: Convert time strings into minute integers
    for(int i = 0; i < timePoints.size(); i++) {
        string curr = timePoints[i];
        int hours = stoi(curr.substr(0, 2));
        int mins = stoi(curr.substr(3, 2));
        int totalMinutes = hours * 60 + mins;
        minutes.push_back(totalMinutes);
    }

    // Step 2: Sort the minutes vector
    sort(minutes.begin(), minutes.end());

    // Step 3: Find the minimum difference
    int mini = INT_MAX;
    int n = minutes.size();
    for(int i = 0; i < n - 1; i++) {
        int diff = minutes[i+1] - minutes[i];
        mini = min(mini, diff);
    }

    // Extra case: Compare the difference between the first and last elements considering the 24-hour wrap-around
    int lastDiff = (minutes[0] + 1440) - minutes[n-1];
    mini = min(mini, lastDiff);

    return mini;
}

int main() {
    vector<string> timePoints = {"23:59", "00:00"};
    int result = findMinDifference(timePoints);
    cout << "Minimum difference in minutes: " << result << endl;
    return 0;
}
