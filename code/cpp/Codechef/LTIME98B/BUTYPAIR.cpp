#include<bits/stdc++.h>
using namespace std;

long long nC2(long long n){
	return (n*(n-1))/2;
}

int main(){
	long long T, N, n, i;
	cin>>T;
	while(T--){
		cin>>N;
		n = N;
		unordered_map<long long, long long> m;
		while(n--){
			cin>>i;
			if(m[i])
				m[i]++;
			else
				m[i]=1;
		}
		long long ans = nC2(N);
		for(auto it=m.begin(); it!=m.end(); it++){
			ans-=nC2(it->second);
		}
		cout<<ans*2<<endl;
	}
	return 0;
}