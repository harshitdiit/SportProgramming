#include<bits/stdc++.h>

// File I/O
#define finput ifstream cin;cin.open("in.txt")
#define foutput ofstream cout;cout.open("out.txt")

// Fast cin-cout
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

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

//
