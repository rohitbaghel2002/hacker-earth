#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    if(m>n)
	    cout<<"LOSS"<<endl;
	    else if(m<n)
	    cout<<"PROFIT"<<endl;
	    else
	    cout<<"NEUTRAL"<<endl;
	}
	return 0;
}