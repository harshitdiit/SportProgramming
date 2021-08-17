#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

long long gcd(long long a, long long b){
    if(!a)
        return b;
    return gcd(b%a, a);
}

long long lcm(long long a, long long b){
	if(a==-1)
		return b;
	
	return (a*b)/gcd(a, b);
}

int main(){
	fastio;

	long long T, N, M;
	cin>>T;
	while(T--){
		cin>>N>>M;
		vector<pair<long long, long long>> O(M);
		for(long long i=0; i<M; i++){
			cin>>O[i].first>>O[i].second;
		}
		sort(O.begin(), O.end(), greater<pair<long long, long long>>());
		long long remaining=N, sum=0, l=-1;
		for(long long i=0; i<M && remaining>0; i++){
			l=lcm(l, O[i].second);
			sum+=O[i].first*(remaining - N/l);
			remaining = N/l;
		}
		cout<<sum<<endl;
	}
	return 0;
}