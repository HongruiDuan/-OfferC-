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
    //先找到pRoot2节点的值
    TreeNode *locate(TreeNode* root,int value){
        if(root->val==value) return root;
        else if(root->left||root->right){
           if(root->left)  return locate(root->left,value);
           if(root->right) return locate(root->right,value);

        }
        else return NULL;
    }
    bool CmpTree(TreeNode * t1,TreeNode * t2){
    	if(t1==NULL&&t2==NULL) return true;
        else if(t1->val!= t2->val) return false;
        else return CmpTree(t1->left,t2->left)&& CmpTree(t1->right,t2->right);
    }
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        TreeNode * root = locate(pRoot1,pRoot2->val);
        if(root==NULL) return false;
        else return CmpTree(root,pRoot2);
        
    }  
};
int main(void){
	Solution *s = new Solution;
	//创建两棵树
	/*   1         2
	    2 3       4  5
	  4 5 6 7
	*/
	TreeNode *root1=new TreeNode(1);
	root1->left=new TreeNode(2);
	root1->right=new TreeNode(3);
	root1->left->left = new TreeNode(4);
	root1->left->right = new TreeNode(5);
	root1->right->left = new TreeNode(6);
	root1->right->right = new TreeNode(7);
	
	TreeNode *root2=new TreeNode(3);
	root2->left=new TreeNode(6);
	root2->right=new TreeNode(7);
	cout<<s->HasSubtree(root1,root2);	 
} 
