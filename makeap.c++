#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int z,x;
	    cin>>z>>x;
	    float a = (float)z;
	    float b = (float)x;
	    if((z+x)/2==(a+b)/2)
	    cout<<(z+x)/2<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}