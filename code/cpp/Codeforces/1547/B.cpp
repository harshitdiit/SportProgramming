#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		string str;
		cin>>str; 
		vector<int> vis(26, -1);
		for(int i=0; i<str.size(); i++)
			vis[str[i]-'a']=i;
		bool flag = true;
		for(int i=0; i<str.size(); i++){
			if(vis[i]==-1)
				flag=false;
		}
		int a_ind = vis[0];
		if(!is_sorted(str.begin(), str.begin()+a_ind, greater<char> ()) || !is_sorted(str.begin() + a_ind + 1, str.end()))
			flag=false;

		cout<<(flag?"YES":"NO")<<endl;
	}
	return 0;
}