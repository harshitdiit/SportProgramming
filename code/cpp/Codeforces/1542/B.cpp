#include<bits/stdc++.h>
using namespace std;

void printYesNo(bool flag){
	cout<<(flag?"Yes":"No")<<endl;
}

int main(){
	int T, a, b, n;
	cin>>T;
	while(T--){
		cin>>n>>a>>b;
		if(b==1){
			printYesNo(true);
		}
		else if(a==1){
			printYesNo((n-1)%b==0);
		}
		else{
			long long m=1;
			bool flag=false;
			while(m<=n){
				if(n%b==m%b){
					flag=true;
					break;
				}
				m*=a;
			}
			printYesNo(flag);
		}
	}
	return 0;
}