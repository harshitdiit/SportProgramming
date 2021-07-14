#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, N, M, K;
	cin>>T;
	while(T--){
		cin>>K>>N>>M;
		vector<int> Vn(N, -1), Vm(M, -1);
		for(int i=0; i<N; i++)
			cin>>Vn[i];
		for(int i=0; i<M; i++)
			cin>>Vm[i];

		int i=0, j=0;
		string str = "";
		while(i<N || j<M){
			bool valid = false;
			if(i<N && (!Vn[i] || (Vn[i]<=K && Vn[i]>0))){
				str+= to_string(Vn[i]) + " ";
				K+=(Vn[i]==0);
				i++;
				
				valid=true;
			}
			if(j<M && (!Vm[j] || (Vm[j]<=K && Vm[j]>0))){
				str+= to_string(Vm[j]) + " ";
				K+=(Vm[j]==0);
				j++;	
				valid=true;
			}
			if(!valid){
				str = "-1";
				break;
			}
		}
		cout<<str<<endl;
	}
	return 0;
}