#include <bits/stdc++.h>
#define INF 10000

using namespace std;

int coins[3] = {1,3,4};

// We are setting an array of
// demanding minimum coins
// in the function below
void set_coin_arr(int * arr, int n){
    for(int i = 1; i < n; i++){
        arr[i] = INF;
        for( auto c : coins){
            if (i - c >= 0){
                arr[i] = min(arr[i], arr[i-c]+1);
            }
        }
    }
}

int main()
{
    
    int n;
    cin >> n;
    int * arr = new int[n]();
    set_coin_arr(arr, n);
    //Then use it however we want
    cout << arr[9] << endl;
    

    return 0;
}
