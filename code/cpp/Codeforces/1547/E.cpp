#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N, K;
	cin>>T;
	while(T--){
		cin>>N>>K;
		vector<long long> result(N, INT_MAX), pos(K, 0), temp(N, INT_MAX);
		for(int i=0; i<K; i++)
			cin>>pos[i];
		for(int i=0; i<K; i++)
			cin>>temp[pos[i]-1];

		sort(temp.begin(), temp.end());

		long long c = INT_MAX;
		for(int i=0; i<N; i++){
			c = min(c+1, temp[i]);
			result[i]=c;
		}
		c=INT_MAX;
		for(int i=N-1; i>-1; i--){
			c = min(c+1, temp[i]);
			result[i]=min(c, result[i]);
		}
		for(int i=0; i<N; i++)
			cout<<result[i]<<" ";
		cout<<endl;
	}
	return 0;
}