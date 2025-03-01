#include <iostream>
#include <vector>
#include <string>  // Include this header

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans;
        for(int i=0;i<strs.size();i++) {
            char curr_ch = 0;
            for (int j=0;j<strs.size();j++) {
                if (i >= strs[j].size()) {
                    // Out of bounds
                    curr_ch = 0;
                    break;
                }
                // First character check
                if (curr_ch == 0) {
                    curr_ch = strs[j][i];
                }
                else if (strs[j][i] != curr_ch) {
                    curr_ch = 0;
                    break;
                }
            }
            if (curr_ch == 0) {
                break;
            }
            ans.push_back(curr_ch);
        }
        return ans;
    }

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}
