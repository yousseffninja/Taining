#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()

void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    IO();
    int TC;
    cin >> TC;
    for(int i = 0; i < TC; i++){
        unsigned long number, count = 0, divisor = 1;
        cin >> number;
        while (true) {
            divisor *= 5;
            long test = number / divisor;
            if (test == 0) {
                cout << count << endl;
                break;
            } else  count += test;
        }
    }
}