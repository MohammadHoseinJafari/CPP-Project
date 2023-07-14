#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

struct T{

    char value ; 
    T* right;
    T* left;
};

class oTree
{
	public:
		T* create(char data);
		//T* insert(char data , T* Tr , char qr );

		void tree_preorder(T* node);
		void tree_inorder(T* node);
		void tree_postorder(T* node);

		void _T_preorder();
		void _T_inorder();
		void _T_postorder();

		void start_tree();
		void tree_defenations();


	private:
		T* root;
};

T* oTree::create(char data)
{
	T* head = new T();
	head->value = data;
	head->right = head->left = NULL;
	
	return head;

}

void oTree::tree_preorder(T* node){
	
	if(node == NULL) return;
	cout << node->value << ",";
	tree_preorder(node->left);
	tree_preorder(node->right);
	
}
void oTree::_T_preorder(){
	tree_preorder(root);
}

void oTree::tree_inorder(T* node){
	
	if(node == NULL) return;
	tree_inorder(node->left);
	cout << node->value << ",";
	tree_inorder(node->right);
	
}
void oTree::_T_inorder(){
	tree_inorder(root);
}

void oTree::tree_postorder(T* node){
	
	if(node == NULL) return;
	tree_postorder(node->left);
	tree_postorder(node->right);
	cout << node->value << ",";
	
}
void oTree::_T_postorder(){
	tree_postorder(root);
}

void oTree::start_tree()
{
	char arr[10];
	for(int i = 1 ; i<=10 ; i++)
	{
		cout<<"\tNode["<<i<<"] : ";
		cin>>arr[i];
		cout<<"\n";
	}

	root = create(arr[1]);

	root->left = create(arr[2]);
	root->right = create(arr[3]);

	root->left->left = create(arr[4]);
	root->right->left = create(arr[5]);
	root->right->right = create(arr[6]);

	root->left->left->right = create(arr[7]);
	root->right->left->right = create(arr[8]);
	root->right->right->left = create(arr[9]);
	root->right->right->right = create(arr[10]);

}

void oTree::tree_defenations()
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


// T* oTree::insert(char data , T* Tr , char qr)
// {

// 	if(Tr == NULL)
// 	{
// 		if(qr == 'V')
// 		{
// 			Tr = new T();
// 			Tr->value = data;
// 			Tr->right = Tr->left = NULL;
// 			return Tr;
// 		}
// 		else if(qr == 'R')
// 		{
// 			Tr->right = new T();
// 			Tr->right->value = data;
// 			Tr->right->right = Tr->right->left = NULL;
// 			return Tr->right;
// 		}
// 		else if (qr == 'L')
// 		{
// 			Tr->left = new T();
// 			Tr->left->value = data;
// 			Tr->left->right = Tr->left->left = NULL;
// 			return Tr->left;
// 		}
// 	}
// 	else {
// 		if(Tr->left != NULL) insert(data,Tr->left,qr);
// 		else insert(data,Tr->right,qr);
// 	}

// }