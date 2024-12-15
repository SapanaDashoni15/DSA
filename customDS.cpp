#include<bits/stdc++.h>
using namespace std;

class myStructure {
    
    public:
    
    vector<int> arr;
    unordered_map<int, int> mp;
    
    
    
    void insert(int a) {
        
        if(mp.find(a) != mp.end()) {
            cout << "elemnt already exists!" << endl;
            return;
        }

        int ind = arr.size();  
        arr.push_back(a);
        mp.insert({a, ind});
            
    }
    
    void remove(int a) {
        
        if(mp.find(a) == mp.end() ) {
            cout << " not found" << endl;
            return;
        }
        
        int ind = mp[a]; // 1
        mp.erase(a);  // 20 remove
        
        for(int i = ind; i < arr.size(); i++) {
            arr[i] = arr[i+1];
            mp[arr[i]] = i;
        }
        
        arr.pop_back();
    
    }
    
    int search(int a) {
        if(mp.find(a) != mp.end()) {
            return mp[a];
        }
        
        return -1;
        
    }
    
    void print() {
        for(int i = 0; i<arr.size(); i++) {
        cout << arr[i] << endl;
        }
    }
    
    int getRandom() {
        // srand(time(NULL));   
        int rand_ind = rand() % arr.size();
        cout << " random index = "<< rand_ind << endl;
        return arr[rand_ind];
    }
    
    
};

int main() {
    
    myStructure ds;
    ds.insert(10);
    ds.insert(20);
    ds.insert(30);
    ds.insert(40);
    
    // cout << ds.search(10) << endl;
    // cout << ds.search(20) << endl;
    // cout << ds.search(30) << endl;
    
    ds.remove(20);
    // ds.insert(50);
    cout << ds.search(40) << endl;
    
    ds.print();
    
    cout << ds.getRandom();
    
    
    
    return 0;
}
