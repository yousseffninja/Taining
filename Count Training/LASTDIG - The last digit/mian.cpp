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
    ll a, b, last;
    while(TC--){
        cin >> a >> b;
        if(a == 0){
            cout << 0 << endl;
            continue;
        }
        if(b == 0){
            cout << 1 << endl;
            continue;
        }
        b = (b % 4 == 0) ? 4 : b % 4;
        ll z = pow(a, b);
        z %= 10;
        cout << z << endl;
    }
}