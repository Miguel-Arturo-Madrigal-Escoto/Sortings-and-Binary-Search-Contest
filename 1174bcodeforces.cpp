// #include <vector>
// #include <utility>
// #include <iostream>
// #include <algorithm>
// #define f first
// #define s second
// #define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
// #define pb push_back
// #define all(s) begin(s), end(s)
// #define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define sz(s) int(s.size())
// #define ENDL '\n'
// using namespace std;
// typedef long double ld;
// typedef long long lli;
// typedef pair<lli,lli> ii;
// typedef vector<lli> vi;
// #define deb(x) cout << #x": " << (x) << endl;
 
// int main(){ _
//     int t,n,p=0,im=0;
//     vector<int> nums;
//     cin>>t;

//     fore(i,0,t){
//         cin>>n;
//         nums.pb(n);
//         n%2?im=1:p=1;
//     }

//     if(im && p) sort(all(nums));

//     fore(q,0,sz(nums)) cout << nums.at(q) << " ";
 
//     return 0;
// }