#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

struct Node{

    int value ; 
    Node *next;

};


class list_single_node{

    public:
        list_single_node();
        
        void defenations();
		int get_val();
        void inserting();
        Node* search(int val);
        void find();

        int get_for_delet_();
        void _delet_head();
        void _delet_last();
        int _delet_w_value();

        void show();

    private:
        int value;
        Node* head ;

};

list_single_node::list_single_node(){

        value = 0;
        head = NULL;

}

void list_single_node::defenations()
{
	system("cls");
	getch();
	cout<<"\n";
	cout<<"    A single linked List is :"<<endl;
	cout<<"\tEach element in a linked list is called a node.\n"//
		  "\tA single node contains data and a pointer to the \n"//
		  "\tnext node, which helps to maintain the structure of the list.\n";
}

int list_single_node::get_val()
{
    int data;
    cout<<"\tplease Enter your Data for worked on : ";
    cin>>data;

    return data;

}

void list_single_node::inserting()
{
    int val = get_val();
    Node *first = new Node;
    first->value = val;
    first->next = NULL;

    if(head == NULL)
        head=first;
    else
    {
        first->next = head;
        head = first;
    } 
        

}

Node* list_single_node::search(int val)
{
	
	Node* t; 
	t = head;
    while( t!=NULL )
    
    {
        if(t->value == val)
        {
        	return t;
		}
        t=t->next;
    }
    return NULL;
    
}

void list_single_node::find(){
	
	int d;
	cout<<"\tplease enter your data for search : ";
	cin>>d;
	if(search(d)!=NULL)
	{
		cout<<"\tyour data is find !\n";
	}
	else cout<<"\twe con't find your data ! try again..."<<endl;
	
}

int list_single_node::get_for_delet_()
{
    int val;
    cout<<"\ti should deleted which Node ? please Enter your value : ";
    cin>>val;

    return val;

}
void list_single_node::_delet_head()
{
    Node* temp = new Node;
    temp = head;

    head= head->next;
	delete temp;   
}

void list_single_node::_delet_last()
{
    Node *temp = new Node;
    Node *pretemp = new Node;

    temp=head;
    while(temp->next != NULL)
    {
      pretemp = temp;
      temp = temp->next;  
    }
    pretemp->next = NULL;
    delete temp;

}

int list_single_node::_delet_w_value()
{
    int v = get_for_delet_();

    Node *nows = head ;
    Node *pre = NULL ;

    Node* nodeToDelete = search(v);
    if(head == nodeToDelete){
        head = nodeToDelete->next;
        delete nodeToDelete;
        return 0;
    }
    // else{

    while(nows != nodeToDelete)
        {
            pre = nows;
            nows = nows->next;
        }
        pre->next = nows->next;
        delete nodeToDelete;    
    
}

void list_single_node::show()
{
    Node * temp;          // a ptr to node for move to list and show it
	temp = head;
    cout<<"---------------------- My Node ----------------------"<<endl<<endl;
    while( temp!=NULL )
    {
        cout<<"{ "<<temp->value<<" }-";
        temp=temp->next;
    }
    cout<<"\n\n";
    
}

list_single_node mysingle ; 
