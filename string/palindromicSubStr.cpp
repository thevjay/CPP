#include <iostream>
#include <string>
using namespace std;

class Solution {
    public:
        int expandAroundIndex(string s, int i, int j){
            int count = 0;
            // task match , tab task count increament kardo and i pich and j aage kardo
            while(i >= 0 && j <= s.length() && s[i] == s[j]){
                count++;
                i--;
                j++;
            }
            return count;
        }
        int countSubstrings(string s) {
            int count = 0;
            int n = s.length();
    
            for(int center=0; center<n;i++){
                //odd
                int oddKaAns = expandAroundIndex(s,center,center);
                count = count + oddKaAns;
                //even
                int evenKaAns = expandAroundIndex(s,center,center+1);
                count = count + evenKaAns;
            }
            return count;
        }
    };