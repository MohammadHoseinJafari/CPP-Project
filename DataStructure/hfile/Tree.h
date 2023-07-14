#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

struct Tree{

    char value ; 
    Tree *right;
    Tree *left;

};

class myTree{

    public:
        myTree();

        // method
        void defenations();
		int get_val();
		Tree* new_place(char key,Tree* leaf);

        void insert(char key, Tree *leaf);
        void T_inorder(Tree *leaf);
        void T_postorder(Tree *leaf);
        void T_preorder(Tree *leaf);

		void _insert_();
        void _preorder_();
        void _inorder_();
        void _postorder_();
        

    private:
        Tree *root;
    
};

myTree::myTree()
{
    root = NULL;
}

int myTree::get_val()
{
    char val ; 
    cin>>val;
    return val;
}

Tree* myTree::new_place(char key , Tree* leaf)
{
	leaf = new Tree;
	leaf->value = key;
	leaf->left = NULL;
	leaf->right = NULL;

	return leaf;
}

void myTree::defenations()
{
    system("cls");
	getch();
	cout<<"\n";
	cout<<"    A Tree in data structure is :"<<endl;
	cout<<"\tA tree can contain one special node called the with zero or many subtrees.It may also \n"//
		  "\tcontain no nodes at all. Every edge directly or indirectly originates from the root.\n"//
		  "\tThe tree is always drawn upside-down, which means the root appears at the top. The\n"//
          "\tmaximum number of children per node is called the tree , One parent node can have \n"//
          "\tmany children, but every child node has only one parent node\n";
}

void myTree::insert(char key, Tree *leaf){

	if(leaf->left == NULL && leaf->right == NULL)
	{
		leaf->left = new_place(key,leaf->left);
		return;
	}
	else if(leaf->right == NULL && leaf->left != NULL)
	{
		leaf->right = new_place(key,leaf->right);
		return;
	}

	if(leaf->left != NULL && leaf->right != NULL)
	{
		insert(key, leaf->left);	
	}
	else
	{
		insert(key, leaf->right);
	}

}

void myTree::_insert_(){

	cout<<"\tplease Enter your date : ";
	char key = get_val();

	if(root != NULL){
		insert(key, root);
	}else{
		root = new_place(key,root);
	}

}

void myTree::T_inorder(Tree *leaf){
	
	if(leaf == NULL) return;
	T_inorder(leaf->left);
	cout << leaf->value << ",";
	T_inorder(leaf->right);
	
}
void myTree::_inorder_(){
	T_inorder(root);
}

void myTree::T_postorder(Tree *leaf){

	if(leaf == NULL) return;
	T_inorder(leaf->left);
	T_inorder(leaf->right);
	cout << leaf->value << ",";

}
void myTree::_postorder_(){
	T_postorder(root);
}

void myTree::T_preorder(Tree *leaf){

	if(leaf == NULL) return;
	cout << leaf->value << ",";
	T_inorder(leaf->left);
	T_inorder(leaf->right);
	
}
void myTree::_preorder_(){
	T_preorder(root);
}
