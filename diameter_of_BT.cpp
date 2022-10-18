#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data ;
	node* left;
	node* right;
};

class solution
{
public:

	int maxDia(node* root, int &diameter) {
    // base condition
		if (root == NULL)return 0;
    
		int l = maxDia(root->left, diameter);
		int r = maxDia(root->right, diameter);
    // update diameter to maximum
		diameter = max(diameter, (l + r));
    // returning max of l & r
		return 1 + max(l, r);
	}
 // function to return max diameter
	int diameter_BT(node* root) {

		int diameter = 0;
		maxDia(root, diameter);
    // returns updated max diameter
		return diameter;
	}
};

int main()
{
  
  
  // sample input tree
	//  	2

	// 4		6

	//  	 8	   10




	node* a = new (node);
	node* b = new (node);
	node* c = new (node);
	node* d = new (node);
	node* e = new (node);

	a->data = 2; a->left = b; a->right = c;
	b->data = 4; b->left = NULL; b->right = NULL;
	c->data = 6; c->left = d; c->right = e;
	d->data = 8; d->left = NULL; d->right = NULL;
	e->data = 10; e->left = NULL; e->right = NULL;




	node* root = a;
	solution r;
	int m = r.diameter_BT(root);



	cout << m << endl;

	return 0;
}
