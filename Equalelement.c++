#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007
#define endl "\n"
#define test ll txtc; cin>>txtc; while(txtc--)
typedef long long int ll;
typedef long double ld;
int main() {
    FIO;
    test
    {
      ll n; cin>>n;
      vector<ll>a(n);
      ll odd=0;
      for(int i=0;i<n;i++){
          cin>>a[i];
          odd+=(a[i]&1);
      }
      ll ans=min(odd,n-odd);
      cout<<ans<<endl;
    }
    return 0;
}