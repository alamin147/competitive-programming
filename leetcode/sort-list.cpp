#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* sortList(ListNode* head) {
      vector<int>v;
      ListNode* temp=head;
      while(temp){
        v.push_back(temp->val);
        temp=temp->next;
      }
      sort(v.begin(),v.end());
      ListNode* h=nullptr, *t=nullptr;
      
      for(auto i:v){
        if(h==nullptr){
          h=new ListNode(i);
          t=h;
        }else{
          ListNode* newNode=new ListNode(i);
          t->next=newNode;
          t=newNode;
        }
      }
    return h;
    }
};
