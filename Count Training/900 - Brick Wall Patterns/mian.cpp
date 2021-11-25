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
int main(){
    IO();
    int x;
    while(cin >> x, x){
        if(x == 1)  cout << 1 << endl;
        else if(x == 2)  cout << 2 << endl;
        else{
            int arr[x + 1];
            arr[0] = 0;
            arr[1] = 1;
            arr[2] = 2;
            for(int i = 3; i <= x; i++) arr[i] = arr[i - 1] + arr[i - 2];
            cout << arr[x] << endl;
        }
    }
}