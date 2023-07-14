#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

class node
{
	public:
		
	 friend class doubledLinkedList;
	 node();
	 node(int);
	 void print();
	 
	private:
		
	 int Data;
	 node * next;
	 node * per;
};

class doubledLinkedList
{
	public:
	 doubledLinkedList();
	 void show_list(void);
	 void add(node);
	 void add_to_head(int);
	 node* search(int);
	 node* delet_search(int);
	 int insert_befor();
	 int insert_after();
	 void add_to_empty_list();
	 void delet(int , int);
	 node* delet_after_x(int);
	 node* delet_befor_x(int);
	 node* delet_head();
	 node* delet_end();
	 void delet_head_node();
 
	private:
	 int numberOfNode;
	 node * first;
	 node * last;
};

node::node()
{
	Data = 0;             
	next = NULL;            
	per = NULL;           
}

node::node(int D)   
{
	Data = D;        
	next = NULL;     
	per = NULL;      
}

void node::print()       
{
	cout << Data << endl; 
}

doubledLinkedList::doubledLinkedList() 
{
	numberOfNode = 0;
	first = NULL;
	last = NULL;
}

void doubledLinkedList::show_list()  
{
	node * temp;         
	temp = first;
	cout << "------------------------ MY list -------------------------"<< endl<<endl;
	
	while (temp != NULL)  
	{
		cout <<"{ "<< temp->Data <<" } - ";
		temp = temp->next;  
	}
	cout<<endl<<endl;
}

void doubledLinkedList:: add(node N)  
{
	node *newNode = new node();         
	newNode->Data = N.Data;
	
	if (numberOfNode == 0)
	{
		first = last = newNode;      
		numberOfNode++;               
	}
	else
	{
		last->next = newNode;         
		newNode->per = last;
		last = last->next;
		numberOfNode++;
	}
}

void doubledLinkedList::add_to_head(int __value_for_headnode)
{
	
	node* newNode = new node();
	newNode->Data = __value_for_headnode;
	  
	newNode->next = NULL; 
	newNode->per = NULL;
	
	if(first == NULL){
	    first = newNode;
	}
	else{
	    first->per = newNode;
	    newNode->next = first;
	    first = newNode;
	}    
  
}


node* doubledLinkedList::search( int d)
{
	node *temp = first;
	
	while (temp != NULL)
	{
		if (temp->Data == d)
		{
			return temp;
		}
		temp = temp->next;
	}
	
	return NULL;
}

int doubledLinkedList::insert_befor()
{
	int data_search , data ; 
	cout<<"\tplease enter your data for insert befor it : ";
	cin>>data_search;
	
	node *temp =search(data_search);
		
	node* x = temp->per;
	
	if (x == NULL)
    {
        cout<<"\tyour pointer to node is empty!!"<<endl;
        return 0;
    }
    
	node* new_node = new node();
    cout<<"\tEnter data for new Node :"; cin>>data;
    new_node->Data = data;
 
    new_node->next = x->next;
    x->next = new_node;
    new_node->per = x;
	 
    if (new_node->next != NULL) new_node->next->per = new_node;
}

int doubledLinkedList:: insert_after()
{	
	int data_search , data ; 
	cout<<"\tplease enter your data for insert after it : ";
	cin>>data_search;
	
	node *x =search(data_search);
	
	if (x == NULL)
    {
        cout<<"\tyour pointer to node is empty!!"<<endl;
        return 0;
    }
    
    node* new_node = new node();
    cout<<"\tEnter data for new Node :"; cin>>data;
    new_node->Data = data;
 
 	
    new_node->next = x->next;
    x->next = new_node;
    new_node->per = x;
	 
    if (new_node->next != NULL) new_node->next->per = new_node;
    
    numberOfNode++;
    
}

node* doubledLinkedList::delet_search(int data)
{
	node* t = search(data);
	return t;
}

node* doubledLinkedList::delet_after_x(int data)
{
	node* pepare = search(data);
	
	node* t = pepare->next;
	
	return t;
}

node* doubledLinkedList::delet_befor_x(int data)
{
	node* pepare = search(data);
	
	node* t = pepare->per;
	
	return t;
}

node* doubledLinkedList::delet_head()
{

	node* pepare = search(first->Data);
	return pepare;
}

node* doubledLinkedList::delet_end()
{
	node* pepare = search(last->Data);
	return pepare;
}	

void doubledLinkedList::delet(int data , int k)
{
	node* temp;
	if(k==0) temp= delet_search(data);
	else if(k==1) temp = delet_after_x(data);
	else if(k==2) temp = delet_befor_x(data);
	else if(k==3) temp = delet_head();
	else if(k==4) temp = delet_end();
	
	if (temp != NULL)
	{
		node *temppre = temp->per;   
		node *tempnext = temp->next;
	
		if (temppre != NULL)
		{
			temppre->next = tempnext;
		}
		else
		{
			first = tempnext;
		}
		if (tempnext != NULL)
		{
			tempnext->per = temppre;
		}
		else
		{
			last = temppre;
		}
		
		delete temp;
		numberOfNode--;   
	}
}

doubledLinkedList myList;

// void doubledLinkedList::add_to_empty_list()
// {
// 	doubledLinkedList newobject;
// 	int n ;
// 	cout<<"please enter a data for new doubly linkded list (its empty)"<<endl;
// 	cin>>n;
// 	node new_node_list(n);
	
// 	newobject.add(new_node_list);
	 
// 	getch();
// 	system("cls");
// 	newobject.show_list();
	
// }

