#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
//to insert/build a binary search tree
Node* BuildBST(Node* root,int val)
{
    if(root == NULL)
    {
        return new Node(val);
    }
    if(val < root->data)
    {
       root->left=BuildBST(root->left,val);
    }
    else{
        root->right=BuildBST(root->right,val);
    }
    return root;
}
void inorder(Node* root)
{
    if(root==NULL) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void printpreorder(Node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
//to search in binary search tree
Node* SearchBST(Node* root,int key)
{
    if(root==NULL) return NULL;
    if(root->data==key)
    {
        return root;
    }
    if(root->data > key)
    {
      return SearchBST(root->left,key);
    }
    else{
       return  SearchBST(root->right,key);
    }
}
//find inorder successor 
//it is the node after a given node when seen in inorder bst
Node* inordersucc(Node* root)
{
    Node* curr=root;
    while(curr && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
//delete a node in binary search tree
Node* DeleteinBST(Node* root,int key)
{
    if(key< root->data)
    {
      root->left=DeleteinBST(root->left,key);
    }
    else if(key> root->data)
    {
        root->right=DeleteinBST(root->right,key);
    }
    else{
        if(root->left==NULL)        //if node to be deleted has no left subtree replace node with right and delete right;
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)    //if node to be deleted has no right subtree replace node with left and delete  left;
        {
            Node* temp=root->left;
            free(root);
            return temp;
        }
        else{                                //if node to be deleted has both left  & right subtree 
            Node* temp=inordersucc(root->right);
            root->data=temp->data;
            root->right=DeleteinBST(root->right,temp->data);
        }
    }
    return root;
}
//BST from preorder   7 5 4 6 8 9
Node* constructBST(int preorder[],int* preorderIDX,int key,int min,int max,int n)
{
  if(*preorderIDX >= n)
  {
      return NULL;
  }
  Node* root=NULL;
  if(key> min && key< max)
  {
    root=new Node(key);
    *preorderIDX=*preorderIDX+1;
    if(*preorderIDX < n)
    {
      root->left=  constructBST(preorder,preorderIDX,preorder[*preorderIDX],min,key,n);
    }
    if(*preorderIDX < n)
    {
      root->right=  constructBST(preorder,preorderIDX,preorder[*preorderIDX],key,max,n);
    }
  }
  return root;
}

//check BST
bool isBST(Node* root,Node* min=NULL,Node* max=NULL)
{
    if(root==NULL) return true;
    if(min!=NULL && root->data <= min->data) return false;
    if(max!=NULL && root->data >= max->data)  return false;
    bool leftvalid=isBST(root->left,min,root);
    bool rightvalid=isBST(root->right,root,max);
    return leftvalid and rightvalid;
}
//balanced BST from a sorted array
Node* BuildBST(int a[],int start,int end)
{
    if(start>end) return NULL;
    int mid=(start+end)/2;
    Node* root=new Node(a[mid]);
    root->left=BuildBST(a,start,mid-1);
    root->right=BuildBST(a,mid+1,end);

    return root;
}
int main()
{
  /* struct Node* root=NULL;
   root= BuildBST(root,5);
    BuildBST(root,1);
    BuildBST(root,3);
    BuildBST(root,4);
    BuildBST(root,2);
    BuildBST(root,7);
    inorder(root);
    cout<<endl;*/
    //Node* node=SearchBST(root,4);
    //cout<<node->data<<" ";
    //DeleteinBST(root,4);
    //inorder(root);
   // int preorder[]={10,2,1,13,11};
    //int n=5;
    //int preorderIDX=0;
    //Node* node= constructBST(preorder,&preorderIDX,preorder[0],INT32_MIN,INT32_MAX,n);
   // printpreorder(node);
   /* Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    if(isBST(root,NULL,NULL))  cout<<"valid\n";
    else cout<<"invalid\n";*/
    int a[]={10,20,30,40,50};
    Node* root=BuildBST(a,0,4);
    printpreorder(root);
    return 0;
}