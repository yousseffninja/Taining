#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>

void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int revNum(int a){
    vi arr;
    int res = 0;
    int count = 1;
    while(a > 0){
        arr.pb(a % 10);
        a /= 10;
    }
    for(int i = arr.size() - 1; i >= 0; i--){
        res += arr[i] * count;
        count *= 10;
    }
    return res;
}

int main(){
    IO();
    int TC;
    cin >> TC;
    while(TC--){
        int x, y;
        cin >> x >> y;
        cout << revNum(revNum(x) + revNum(y)) << '\n';
    }
}