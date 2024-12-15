#include<bits/stdc++.h>
using namespace std;

class myDs {
    unordered_map<int, vector<int>> mp;
    
    public:
    void insert(int a, int ind) {
        mp[a].push_back(ind);
    }
    
    vector<int> find(int a) {
        if(mp.find(a) != mp.end()) {
            return mp[a];
        }
        return {};
    }
    
    
};

int main() {
    
    vector<int> arr = {10, 20, 30, 40, 20};
    
    myDs ds;
    for(int i = 0; i<arr.size(); i++) {
        ds.insert(arr[i], i);
    }
    
    vector<int> indices = ds.find(20);
    for(auto it : indices) {
        cout << it << " ";
    }
    
    return 0;
}
