#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool comp(const vector<int> &v, const vector<int> &w){
    return v[1]<w[1];
}

int main(){

	fastio;

	int T, N;
	cin>>T;
	while(T--){
		cin>>N;
		vector<vector<int>> people(N, vector<int>(3));
		for(int i=0; i<N; i++){
			cin>>people[i][0];
			people[i][2]=i+1;
		}
		for(int i=0; i<N; i++){
			cin>>people[i][1];
		}

		sort(people.begin(), people.end(), comp);
        long long time=0;
        priority_queue<pair<long long, long long>> q;
        map<int, pair<long long, long long>> m; 
        for(auto p: people){
            q.push(make_pair(p[0], p[2]));
            m[p[2]]=make_pair(time, time+p[0]);
            time+=p[0];
            if(time>p[1]){
                pair<long long, long long> e = q.top();
                time -= e.first;
                m.erase(e.second);
                q.pop();
            }
        }

        cout<<m.size()<<endl;
        for(auto it=m.begin(); it!=m.end(); it++){
        	cout<<it->first<<" "<<(it->second).first<<" "<<(it->second).second<<endl;
        }
	}
	return 0;

}