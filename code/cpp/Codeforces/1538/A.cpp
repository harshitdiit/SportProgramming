#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N, x;
		cin>>N;
		int _minInd, _maxInd, _min=INT_MAX, _max=INT_MIN;
		for(int i=1; i<=N; i++){
			cin>>x;
			if(_min>x){
				_min=x;
				_minInd=i;
			}
			if(_max<x){
				_max=x;
				_maxInd=i;
			}
		}
		int ans = min(min(max(_minInd, _maxInd), N+1-min(_minInd, _maxInd)), min(_minInd, _maxInd) + N+1-max(_minInd, _maxInd));
		cout<<ans<<endl;
	}
	return 0;
}