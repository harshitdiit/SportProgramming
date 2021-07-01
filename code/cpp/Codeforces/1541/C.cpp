#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		vector<int> V(N, -1);
		for(int i=0; i<N; i++){
			cin>>V[i];
		}
		sort(V.begin(), V.end());
		long long sum=0;
		for(int i=0; i<N-1; i++){
			long long edge = (V[i+1]-V[i]);
			sum += -1*edge*(N-i-1)*(i+1) + edge;
		}
		cout<<sum<<endl;
	}
	return 0;
}