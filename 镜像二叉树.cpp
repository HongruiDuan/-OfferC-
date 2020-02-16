#include<cstdio>
#include<iostream>
using namespace std; 
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if(!pRoot->left&&!pRoot->right) return;
        else{
            TreeNode *t1,*t2;
            t1=pRoot->left;
            t2=pRoot->right;
            pRoot->left=t2;
            pRoot->right =t1;
            Mirror(pRoot->left);
            Mirror(pRoot->right);
        }
    }
};
//前序遍历二叉树
void PreOrder(TreeNode *root){
	if(!root) return;
	else{
		PreOrder(root->left);
		cout<<root->val;
		PreOrder(root->right); 
	}
} 
int main(void){
	Solution *s = new Solution;
	//创建两棵树
	/*   8         
	    6 10     
	  5 7 9 11
	*/
	TreeNode *root1=new TreeNode(8);
	root1->left=new TreeNode(6);
	root1->right=new TreeNode(10);
	root1->left->left = new TreeNode(5);
	root1->left->right = new TreeNode(7);
	root1->right->left = new TreeNode(9);
	root1->right->right = new TreeNode(11);
	PreOrder(root1);
	s->Mirror(root1);
	cout<<"中序遍历后";
	PreOrder(root1);
	//
} 
