#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
	ll T, A, B;
	cin>>T;
	while(T--){
		cin>>A>>B;
		ll diff = (ll)abs(A-B);
		ll steps = diff?min(A%diff, diff-(A%diff)):0;
		cout<<diff<<" "<<steps<<endl;
	}
	return 0;
}