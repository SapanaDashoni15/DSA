// recusive approach

// #include<bits/stdc++.h>
// using namespace std;

// // changing parameters - index and bag weight
// int knapSack(int ind, int capacity, vector<int> &weight, vector<int> &value) {

//     //base case
//     if(ind == 0) {
//         if(weight[ind] <= capacity) return value[0];
//         else return 0;
//     }

//     int nottake = 0 + knapSack(ind-1, capacity, weight, value);

//     int take = INT_MIN; // whenever we have to find max, first assume it as INT_MIN
//     if(weight[ind] <= capacity) take = value[ind] + knapSack(ind-1, capacity-value[ind], weight, value);

//     return max(take, nottake);
// }

// int main() {
//     vector<int>weight = {4,5,1};
//     vector<int> value = {1,2,3};
//     int n = weight.size();
//     int capacity = 4;

//     cout << knapSack(n-1, capacity, weight, value) << endl;

//     return 0;
// }



// Memo

// #include<bits/stdc++.h>
// using namespace std;

// // changing parameters - index and bag weight
// int knapSack(int ind, int capacity, vector<int> &weight, vector<int> &value, vector<vector<int>> &dp) {

//     //base case
//     if(ind == 0) {
//         if(weight[ind] <= capacity) return value[0];
//         else return 0;
//     }

//     if(dp[ind][capacity] != -1) return dp[ind][capacity]; 

//     int nottake = 0 + knapSack(ind-1, capacity, weight, value, dp);

//     int take = INT_MIN; // whenever we have to find max, first assume it as INT_MIN
//     if(weight[ind] <= capacity) take = value[ind] + knapSack(ind-1, capacity-value[ind], weight, value,dp);

//     return dp[ind][capacity] = max(take, nottake);
// }

// int main() {
//     vector<int>weight = {4,5,1};
//     vector<int> value = {1,2,3};
//     int n = weight.size();
//     int capacity = 4;

//     vector<vector<int>> dp(n, vector<int>(capacity+1, -1));

//     cout << knapSack(n-1, capacity, weight, value, dp) << endl;

//     return 0;
// }



// Tabulation

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main() {
//     vector<int> weight = {4, 5, 1};
//     vector<int> value = {1, 2, 3};
//     int n = weight.size();
//     int capacity = 4;

//     // Initialize DP table
//     vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));

//     // Base case: Filling the first row
//     for (int w = weight[0]; w <= capacity; w++) {
//         dp[0][w] = value[0];
//     }

//     // Fill the DP table
//     for (int ind = 1; ind < n; ind++) {
//         for (int w = 1; w <= capacity; w++) {
//             // Not taking the current item
//             int nottake = dp[ind - 1][w];

//             // Taking the current item (if weight allows)
//             int take = INT_MIN;
//             if (weight[ind] <= w) {
//                 take = value[ind] + dp[ind - 1][w - weight[ind]];
//             }

//             dp[ind][w] = max(take, nottake);
//         }
//     }

//     // The result is stored in the bottom-right cell
//     cout << dp[n - 1][capacity] << endl;

//     return 0;
// }


// SPACE OPTIMISATION - if there is ind - 1 used in dp then we can space optimise it

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> weight = {4, 5, 1};
    vector<int> value = {1, 2, 3};
    int n = weight.size();
    int capacity = 4;

    vector<int> prev(capacity+1, 0), curr(capacity+1, 0);
    
    for(int w = weight[0]; w <= capacity; w++) {
        prev[w] = value[0];
    }

    for(int ind = 1; ind<n; ind++) {
        for(int w = 1; w<= capacity; w++) {
            int nottake = 0 + prev[w];
            int take = INT_MIN;
            if(weight[ind] <= w) {
                take = value[ind] + prev[w-weight[ind]];
            }

            curr[w] = max(take, nottake);
        }
        prev = curr;    
    }

    cout << " maximum value " <<  prev[capacity] << endl;

    return 0;
}
