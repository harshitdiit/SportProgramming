#include<bits/stdc++.h>
using namespace std;

// File I/O
#define finput ifstream cin;cin.open("in.txt")
#define foutput ofstream cout;cout.open("out.txt")

// Fast cin-cout
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Boilerplate Code
#define ll long long 
#define F(i, n) for(int i=0; i<N; i++)
#define Fr(i, n) for(int i=N-1; i>-1; i--)

// LinkedList
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head){
    if(!head){
        cout<<endl;
        return;
    }
    cout<<head->val<<(head->next==NULL?"":"->");
    printList(head->next);
}

// Tree

// DSU

// Djikstra 

// Floyd Warshall

// Kruskal
