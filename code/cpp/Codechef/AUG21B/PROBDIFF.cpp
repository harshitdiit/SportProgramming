#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, x;
	cin>>T;
	while(T--){
		map<int, int> m;
		for(int i=0; i<4; i++){
			cin>>x;
			m[x]++;
		}
		switch(m.size()){
			case 1:
				cout<<0<<endl;
				break;
			case 2:
				if(m.begin()->second==2)
					cout<<2<<endl;
				else
					cout<<1<<endl;
				break;
			default:
				cout<<2<<endl;
				break;
		}
	}
	return 0;
}