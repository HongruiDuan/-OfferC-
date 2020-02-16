
#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
}; 
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL || pHead->next==NULL) return pHead;
        ListNode * head=new ListNode(0); //头结点要分配内存，总是忘记 
        ListNode *t =pHead;
        stack<ListNode*> sta;
        while(t->next!=NULL){
        	cout<<"push:"<<t->next->val<<endl;
            sta.push(t->next);
            t= t->next;
        }
        int lenth=sta.size();
//        ListNode *temp=head->next;//这样是错误的，操作的指向的是head的下一个节点 ,head
//			的next指针指向元素不变 
		ListNode *temp=head; 
        while(!sta.empty()){
            temp->next=sta.top();
            cout<<"top:"<<sta.top()->val<<endl;
            sta.pop();
            temp=temp->next;
        }
        temp->next=NULL;
//		ListNode *t2=head;
//        while(t2->next!=NULL){
//        	cout<<t2->next->val<<endl;
//        	t2=t2->next;
//		}
        return head;
    }
};
int main(void){
	Solution* s = new Solution;
	ListNode *head=new ListNode(-1);
	ListNode *temp = head;
	for(int i =1;i<6;i++){
		temp->next=new ListNode(i);
		temp=temp->next;
	}
	ListNode * t =head;
	cout<<"反转前："<<endl;
	while(t->next!=NULL){
		cout<<t->next->val<<endl;
		t=t->next;
	}
	cout<<endl; 
	cout<<"反转后"<<endl; 
	ListNode * result=s->ReverseList(head);
	while(result->next!=NULL){
//		cout<<"11"<<endl;
		cout<<result->next->val<<endl;
		result=result->next;
	}
} 
