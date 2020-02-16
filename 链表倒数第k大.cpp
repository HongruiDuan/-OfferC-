#include<cstdio>
#include<iostream>

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
// ±º‰∏¥‘”∂»
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode *p1,*p2;
        p1=pListHead;
        p2=pListHead;
        for(int i =1;i<k;i++){
            if(!p2) return NULL;
            else p2=p2->next;
        }
        while(p2->next!=NULL){
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
};
int main(void){
	Solution *s = new Solution;
	ListNode *head=new ListNode(1);
	ListNode *t=head;
	for(int i=2;i<=5;i++){
		t->next=new ListNode(i);
		t=t->next;
		 
	}
	ListNode* result=s->FindKthToTail(head,1);
	cout<<result->val;
	result=s->FindKthToTail(head,2);
	cout<<result->val;
	result=s->FindKthToTail(head,4);
	cout<<result->val;
} 
