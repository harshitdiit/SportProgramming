#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N;
	cin>>T;
	while(T--){
		cin>>N;
		int x, _odd = 0;
		for(int i=0; i<2*N; i++){
			cin>>x;
			if(x%2)
				_odd++;
		}
		cout<<(_odd==N?"Yes":"No")<<endl;
	}
	return 0;
}