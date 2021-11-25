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
    while(TC--){
        int x, y;
        cin >> x >> y;
        if(x == y or x - y == 2){
            if(x % 2 == 0)  cout << x + y << '\n';
            else    cout << x + y - 1 << '\n';
        }
        else    cout << "No Number\n";
    }
}