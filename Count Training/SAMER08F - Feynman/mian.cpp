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
    int x, res = 0;
    while(true){
        cin >> x;
        if(x == 0)  break;
        if(x == 1)  cout << '1' << endl;
        else{
            for(int i = 2; i <= x; i++) res += pow(i , 2);
            cout << res + 1 << endl;
            res = 0;
        }
    }
}