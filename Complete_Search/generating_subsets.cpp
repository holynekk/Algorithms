#include <bits/stdc++.h>

using namespace std;

// Method-I recursive: 
// following function search generates 
// the subsets of the set {0, 1, . . . , n − 1}.
vector <int> subset; 

void search(int k){
    if (k == n){
        // process subset
    }else{
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}

// Method-II

for (int b = 0; b < (1 << n); b++){
    vector<int> subset;
    for (int i = 0; i < n; i++){
        if (b&(1<<i)) subset.push_back(i);
    }
}