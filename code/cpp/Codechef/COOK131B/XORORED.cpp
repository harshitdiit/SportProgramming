#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N;
	cin>>T;
	while(T--){
		cin>>N;
		vector<int> arr(N);
		for(int i=0; i<N; i++){
			cin>>arr[i];
		}
		int bit=0, min_or=0;
		for(int b=0; b<32; b++){
			int _or=0, ct=0;
			for(auto i: arr){
				if(i&(1<<b)){
					ct++;
					_or = _or | (i&(1<<b));
				}
			}
			if(ct==N)
				bit += (1<<b);
			else if(_or)
				min_or += (1<<b);
		}
		cout<<bit<<" "<<min_or<<endl;
	}
	return 0;
}