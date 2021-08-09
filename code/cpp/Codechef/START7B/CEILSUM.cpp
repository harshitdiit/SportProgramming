#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b;
    cin>>a>>b;
    int temp = floor((b - a) / 2.0);
    if(a != b){
      temp++;
    }
    cout<<temp<<"\n";
  }
  return 0;
}