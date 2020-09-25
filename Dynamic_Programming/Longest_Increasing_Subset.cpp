#include <bits/stdc++.h>

using namespace std;

int subs(vector<int> sequence, int n){
    int maxx = 0;   // Holds the longest sequence
    vector<int> length(n);
    for (int k = 0; k < n; k++){
        length[k] = 1;
        for (int i = 0; i < k; i++){
            if (sequence[i] < sequence[k]){
                length[k] = max(length[k], length[i]+1);
                if (maxx < length[k]) maxx = length[k];
            }
        }
    }
    return maxx;
}

int main(void){
    int n;
    cin >> n;            // Takes the amount  of numbers in the sequence
    vector<int> sequence(n);
    for(int i = 0; i < n; i++){
        cin >> sequence[i];     // Number inputs
    }cout << subs(sequence, n);
}
