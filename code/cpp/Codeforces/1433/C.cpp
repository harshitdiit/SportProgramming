#include<bits/stdc++.h>
#define finput ifstream cin;cin.open("in.txt")
#define foutput ofstream cout;cout.open("out.txt")

using namespace std;

int main(){
    // finput; foutput;

    int T;
    cin>>T;
    while(T--){
        int N, ans, inp, _max = -1;
        bool isMax = false;
        cin>>N;
        for(int i=0; i<N; i++){
            cin>>inp;
            if(_max==-1){    
                _max=inp;
                ans=i;
            }
            else if(_max<inp){
                _max=inp;
                ans=i;
                isMax=true;
            }
            else if(_max>inp){
                isMax=true;
            }
            else if(_max==inp && !isMax){
                ans=i;
            }
        }
        if(isMax){
            cout<<ans+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
