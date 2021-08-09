#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll T, N, K;
	cin>>T;
	while(T--){
		cin>>N>>K;
		ll num = (1<<N)-1;
		K = K>(1<<(N-1))?(1<<(N-1)):K;
		num*=K*2;
		cout<<num<<endl;
	} 
	return 0;
}
