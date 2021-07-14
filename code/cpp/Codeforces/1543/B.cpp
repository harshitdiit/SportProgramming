#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define F(i, n) for(int i=0; i<N; i++)

int main(){
	ll T, N;
	cin>>T;
	while(T--){
		cin>>N;
		ll k, sum = 0;
		F(i, N){
			cin>>k;
			sum+=k;
		}
		cout<<(sum%N)*(N-(sum%N))<<endl;
	}
	return 0;
}