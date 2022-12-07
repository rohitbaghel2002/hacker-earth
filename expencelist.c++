#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define p pow

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A,B;
	    cin>>A>>B;
	    ll ans = p(2,A);
	    ll power = p(2,B);
	    cout<<power/ans<<endl;
	}
	return 0;
}