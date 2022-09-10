/*#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
#define f first
#define s second
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;
#define deb(x) cout << #x": " << (x) << endl;

int main(){  IO;
    lli total = 0, sum = 0, cant = 0;
    int c, coin; cin>>c;
    vector<int> coins;

    while(c--){
        cin >> coin;
        total += coin;
        coins.pb(coin);
    }

    sort(all(coins), greater<int>());

    for(auto &co: coins){
        sum += co; cant++;
        if (sum > (total/2)) break;
    }

    cout << cant << ENDL;

    return 0;
}*/