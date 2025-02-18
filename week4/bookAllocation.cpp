#include <bits/stdc++.h>
using namespace std;

    bool isPossibleSolution(int arr[], int N, int K, int sol) {
        int pageSum = 0;
        int students = 1; // At least one student is required
        
        for (int i = 0; i < N; i++) {
            if (pageSum + arr[i] > sol) { // If adding arr[i] exceeds limit
                students++; // Allocate to a new student
                pageSum = arr[i]; // Start new allocation
                
                if (students > K) { // If more students are needed
                    return false;
                }
            } else {
                pageSum += arr[i]; // Keep adding books to current student
            }
        }
        return true;
    }

    int findPages(int arr[],int n, int k) {
        if (k > n) return -1; // More students than books is impossible

        int start = *max_element(arr, arr+n); // At least max(arr)
        int end = accumulate(arr, arr+n, 0); // Sum of all books
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2; // Avoids overflow

            if (isPossibleSolution(arr, n, k, mid)) {
                ans = mid;  // Valid solution found, try minimizing
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }

// Driver Code
int main() {
        
        int arr[]={12,34,67,90};
        int n = sizeof(arr)/sizeof(arr[0]);
        int  k=2;
        // Number of books

        cout <<findPages(arr, n,k) << endl;
    return 0;
}
