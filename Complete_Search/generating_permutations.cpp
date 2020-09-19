#include <bits/stdc++.h>

using namespace std;


// METHOD-I Recursion
int n; // top number for the permutation
vector<int> permutation;
vector<int> chosen(n);   
void search(){
    if (permutation.size() == n){
        //process permutation
    }else{
        for (int i = 0; i < n; i++){
            if (chosen[i]) continue;
            chosen[i] = 1;
            permutation.push_back(i);
            search();
            chosen[i] = 0;
            permutation.pop_back();
        }
    }
}


// METHOD-II Iterative method

vector<int> permutation;

for (int i = 0; i < n; i++){
    permutation.push_back(i);
}
do {
    // process permutation
} while (next_permutation(permutation.begin(), permutation.end()));