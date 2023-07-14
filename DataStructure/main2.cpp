#include "hfile/classeslinkedlist.h"
#include "hfile/single-list.h"
#include "hfile/Tree.h"
#include "hfile/_Tree_.h"
#include "hfile/graph.h"
#include "hfile/sort.h"
#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>


using namespace std;

int loop_program(int );

class Menu{

    public:

        Menu(){
            select = 0 ;
        }

        int gets(int s);

        //Menu
        void show_main();
        void selectation_main();

        //Linked List sub Menu
        void sub_linkedlist();
        void LinkedList_select(int sel);
        int get_LinkedList_sel();

		//Double Linked List sub Menu
        void sub_double_linkedlist();
        void DLinkedList_select(int sel);
        int get_DLinkedList_sel();

		//Dynamic Tree sub Menu
        void sub_D_Tree();
        void D_Tree_select(int sel);
        int get_D_Tree_sel();
        
        //Tree sub Menu
        void sub_Tree();
        void Tree_select(int sel);
        int get_Tree_sel();
        
        //Graph sub Menu
        void sub_graph();
        void graph_select(int sel);
        int get_graph_sel();
        
        //sort algoritms sub Menu
        void sub_sort();
        void sort_select(int sel);
        int get_sort_sel();
        
        int exitp();


    private:
        int select;
        int sub_select;

};

int Menu::gets(int n)
{    
    select = n ;
    selectation_main();
}

void Menu::show_main(){

    cout<<"----------------------- wellcome to our program ----------------------- \n"<<endl;
    cout<<"\t1 . Linked List"<<endl;
    cout<<"\t2 . double Linked List"<<endl;
    cout<<"\t3 . Tree program "<<endl;
    cout<<"\t4 . D-Tree program "<<endl;
    cout<<"\t5 . graph Program"<<endl;
    cout<<"\t6 . sort algoritms"<<endl;
    cout<<"\t7 . exit"<<endl<<endl;

    cout<<"----------------------------------------------------------------------- \n"<<endl;
    
}

void Menu::selectation_main()
{
    switch (select)
    {
        case 1 : {
                cout<<"\t";
                getch();
                system("cls");
                Menu::get_LinkedList_sel();
            }
            
            break;

        case 2 :
                {
                cout<<"\t";
                getch();
                system("cls");
                Menu::get_DLinkedList_sel();
            }

            break;

        case 3 :
                {
                cout<<"\t";
                getch();
                system("cls");
                Menu::get_Tree_sel();
            }
            break;

        case 4 : 
                {
                cout<<"\t";
                getch();
                system("cls");
                Menu::get_D_Tree_sel();
            }
            break;
        
        case 5 :
                {
                cout<<"\t";
                getch();
                system("cls");
                Menu::get_graph_sel();
            }
            break;
        
        case 6 :
                {
                cout<<"\t";
                getch();
                system("cls");
                Menu::get_sort_sel();
            }
            break;
            
        case 7 :
                {
                cout<<"\t";
                getch();
                system("cls");
                Menu::exitp();
            }
            break;

        default: cout<<"\tplease select a option from top Menu : "<<endl; getch(); system("cls");
            break;
    }

}

void Menu::sub_linkedlist()
{
	mysingle.show();
    cout<<"------------------- Linked List  -------------------- \n"<<endl;

    cout<<"\t1 . Linked List defenation"<<endl;
    cout<<"\t2 . Add New Node to Linked List "<<endl;
    cout<<"\t3 . Find an Node from Linked List  "<<endl;
    cout<<"\t4 . Delete an Node from Linked List Head "<<endl;
    cout<<"\t5 . Delete an Node from Linked List Last Node  "<<endl;
    cout<<"\t6 . Delete an Node with value from Linked List  "<<endl;
    cout<<"\t7 . Display Linked List  "<<endl;
    cout<<"\t8 . Back"<<endl<<endl;

    cout<<"----------------------------------------------------- \n"<<endl;

}

void Menu::LinkedList_select(int sel)
{
    switch (sel)
    {
        case 1 : {
                mysingle.defenations();
                getch();
                system("cls");
            }
            break;
            
        case 2 : {
        		mysingle.inserting();
                getch();
                system("cls");
            }
            break;

        case 3 : {
                mysingle.find();
                getch();
                system("cls");
            }
            break;

        case 4 : {
                mysingle._delet_head();
                getch();
                system("cls");
            }
            break;

        case 5 : {
                mysingle._delet_last();
                getch();
                system("cls");
            }
            break;
        
        case 6 : {
                mysingle._delet_w_value();
                getch();
                system("cls");
            }
            break;
        
        case 7 : {
                system("cls");
                mysingle.show();
                cout<<"-------------------------------------------\n";
                getch();
                system("cls");
            }
            break;

        case 8 : {
                getch();
                system("cls");
            }
            break;

        default : cout<<"\n\tyour select is wrong! try again ... "<<endl; getch(); system("cls"); break;
            
    }   

}

int Menu::get_LinkedList_sel()
{
    int ss;

    while(ss){
        sub_linkedlist();
        cout<<"\t";
        cin>>ss;
        if(ss==8){
 			loop_program(0);
             system("cls");
        	break;
		}
        Menu::LinkedList_select(ss);
    }
}


void Menu::sub_double_linkedlist()
{

	myList.show_list();
    cout<<"----------------------- Double Linked List  ------------------ \n"<<endl;

    cout<<"\t1 . Insert Node in start list ( Circular Doubly - LinkedList with head Node ) "<<endl;	
	cout<<"\t2 . Insert Node after X ( Double - LinkedList ) "<<endl;	
	cout<<"\t3 . Insert Node befor X ( Double - LinkedList ) "<<endl;	
	cout<<"\t4 . delete Node in start list ( Double - LinkedList ) "<<endl;	
	cout<<"\t5 . delete Node in doubly list ( LinkedList ) "<<endl;	
	cout<<"\t6 . delete Node after X ( Double - LinkedList ) "<<endl;	
	cout<<"\t7 . delete Node befor X ( Double - LinkedList ) "<<endl;	
	cout<<"\t8 . Back "<<endl;		

    cout<<"-------------------------------------------------------------- \n"<<endl;
    
}

void Menu::DLinkedList_select(int sel)
{
	int data ;
	
   switch (sel)
   {
   		case 1 :  
		{
			int data_node_head;
			cout<<"\tplease enter your data for add to head of linked list : ";
			cin>>data_node_head;
			
			myList.add_to_head(data_node_head);
			
			getch();
			system("cls");
			myList.show_list();
			break;
		}
		
		//// if value selected by user is 2
		case 2 :
		{
			myList.insert_after();
			getch();
			system("cls");
			myList.show_list();
			break;
		}
		
		case 3 :
		{
			myList.insert_befor();
			getch();
			system("cls");
			myList.show_list();
			break;
		}
		
		case 4 : 
		{
			myList.delet(NULL,3);	
			getch();
			system("cls");
			myList.show_list();
			break;
			
		}
		
		case 5 :
		{
			int data_for_delet;
			cout<<"\tenter a node data for delet : ";
			cin>>data_for_delet;
			
			myList.delet(data_for_delet,0);
			
			getch();
			system("cls");
			myList.show_list();
			break;
		}
		
		case 6 : 
		{
			int d_delet_afx;
			cout<<"\tenter a node data for delet : ";
			cin>>d_delet_afx;
			
			myList.delet(d_delet_afx,1);
		
			getch();
			system("cls");
			myList.show_list();
			break;
			
		}
		
		case 7 :
		{
			int d_delet_befx;
			cout<<"\tenter a node data for delet : ";
			cin>>d_delet_befx;
			
			myList.delet(d_delet_befx,2);
		
			getch();
			system("cls");
			myList.show_list();
			break;
		}
		
		case 8 :
		{
			getch();
            system("cls");
		}   
		
		default : cout<<"\tsomthing wronge ... please select again !"<<endl; getch(); system("cls"); break;

	}
}

int Menu::get_DLinkedList_sel()
{
   int ss;

   while(ss){
       sub_double_linkedlist();
       cout<<"\t";
       cin>>ss;
       if(ss==8){
			loop_program(0);
            system("cls");
       		break;
		}
       Menu::DLinkedList_select(ss);
   }
}

oTree ob;

void Menu::sub_Tree()
{

    cout<<"----------------------- Tree Structure  ---------------------- \n"<<endl;

    cout<<"\t1 . Tree Structure Defenations"<<endl;
    cout<<"\t2 . Add Node"<<endl;
    cout<<"\t3 . Preorder (VLR) Traverse "<<endl;
    cout<<"\t4 . Inorder (LVR) Traverse "<<endl;
    cout<<"\t5 . Postorder (LRV) Traverse "<<endl;
    cout<<"\t6 . Back"<<endl;

    cout<<"\n-------------------------------------------------------------- \n"<<endl;
    
}

void Menu::Tree_select(int sel)
{
    switch (sel)
    {
        case 1 : {
                ob.tree_defenations();
                getch();
                system("cls");
            }
            break;
            
        case 2 : {
                ob.start_tree();
                getch();
                system("cls");
            }
            break;
        
        case 3 : {
                system("cls");
                cout<<"-----------------------  PreOrder  (LRV) -----------------------\n\n\t";
                ob._T_preorder();
                cout<<"\n\n----------------------------- End ------------------------------\n"<<endl;
                getch();
                system("cls");
            }
            break;

        case 4 : {
                system("cls");
                cout<<"-----------------------  InOrder (LVR) -----------------------\n\n\t";
                ob._T_inorder();
                cout<<"\n\n--------------------------- End ------------------------------\n"<<endl;
                getch();
                system("cls");
            }
            break;

        case 5 : {
                system("cls");
                cout<<"-----------------------  PostOrder (LRV) -----------------------\n\n\t";
                ob._T_postorder();
                cout<<"\n\n----------------------------- End ------------------------------\n"<<endl;
                getch();
                system("cls");
                
            }
            break;

        case 6 : {
                getch();
                system("cls");
            }
            break;

        default : cout<<"your program is Done !"<<endl; getch(); system("cls"); break;
            
    }   

}

int Menu::get_Tree_sel()
{
    int ss;

    while(ss){
        sub_Tree();
        cout<<"\t";
        cin>>ss;
        if(ss==6){
 			loop_program(0);
             system("cls");
        	break;
		}
        Menu::Tree_select(ss);
    }
}

myTree the_Tree ;

void Menu::sub_D_Tree()
{
    cout<<"------------------------ Preorder(VLR)  ----------------------\n\n\t";
    the_Tree._preorder_();
    cout<<"\n\n";
    cout<<"------------------------- Inorder(LVR)  ----------------------\n\n\t";
    the_Tree._inorder_();
    cout<<"\n\n";
    cout<<"------------------------- Postorder(LRV)  ---------------------\n\n\t";
    the_Tree._postorder_();
    cout<<"\n\n";
    
    cout<<"-------------------- Dynamic Tree Structure  ------------------ \n"<<endl;

    cout<<"\t1 . Add Node"<<endl;
    cout<<"\t2 . Back"<<endl;

    cout<<"\n-------------------------------------------------------------- \n"<<endl;
    
}

void Menu::D_Tree_select(int sel)
{
    switch (sel)
    {
            
        case 1 : {
                the_Tree._insert_();
                getch();
                system("cls");
            }
            break;

        case 2 : {
                getch();
                system("cls");
            }
            break;

        default : cout<<"your program is Done !"<<endl; getch(); system("cls"); break;
            
    }   

}

int Menu::get_D_Tree_sel()
{
    int ss;

    while(ss){
        sub_D_Tree();
        cout<<"\t";
        cin>>ss;
        if(ss==2){
 			loop_program(0);
             system("cls");
        	break;
		}
        Menu::D_Tree_select(ss);
    }
}

graph ins; 

void Menu::sub_graph()
{
	ins.print_graph(); cout<<endl;
	
    cout<<"----------------------- Graph Structure  ---------------------- \n"<<endl;

    cout<<"\t1 . Graph Structure Defenations"<<endl;
    cout<<"\t2 . Add Node"<<endl;
    cout<<"\t3 . show structure"<<endl;
    cout<<"\t4 . BFS Traverse"<<endl;
    cout<<"\t5 . MINIMAL spaning Tree [ Prime ]  "<<endl;
    cout<<"\t6 . Back"<<endl;

    cout<<"-------------------------------------------------------------- \n"<<endl;
    
}

void Menu::graph_select(int sel)
{   
    switch (sel)
    {
        case 1 : {
				ins.graph_defenations();
                getch();
                system("cls");
            }
            break;
            
        case 2 : {
                ins.get_edg();
                getch();
                system("cls");
            }
            break;

        case 3 : {
        		system("cls");
                ins.print_graph();
                getch();
                system("cls");
            }
            break;

        case 4 : {
                ins.get_BFS();
                getch();
                system("cls");
            }
            break;

        case 5 : {
                cout<<"\t5";
                getch();
                system("cls");
            }
            break;

        case 6 : {
                getch();
                system("cls");
            }
            break;

        default : cout<<"your program is Done !"<<endl; getch(); system("cls"); break;
            
    }   

}

int Menu::get_graph_sel()
{
    int ss;

    while(ss){
        sub_graph();
        cout<<"\t";
        cin>>ss;
        if(ss==6){
 			loop_program(0);
             system("cls");
        	break;
		}
        Menu::graph_select(ss);
    }
}

void Menu::sub_sort()
{
    cout<<"------------------- Sort Algoritms  -------------------- \n"<<endl;

    cout<<"\t1 . Bubble Sort "<<endl;
    cout<<"\t2 . selection Sort "<<endl;
    cout<<"\t3 . Insertation Sort  "<<endl;
    cout<<"\t4 . Back"<<endl;

    cout<<"----------------------------------------------------- \n"<<endl;

}

void Menu::sort_select(int sel)
{
    Sort ob;
    switch (sel)
    {
        case 1 : {
                ob.start(0);
                getch();
                system("cls");
            }
            break;
            
        case 2 : {
                ob.start(1);
                getch();
                system("cls");
            }
            break;

        case 3 : {
                ob.start(2);
                getch();
                system("cls");
            }
            break;

        case 4 : {
                getch();
                system("cls");
            }
            break;

        default : cout<<"your program is Done !"<<endl; getch(); system("cls"); break;
            
    }   

}

int Menu::get_sort_sel()
{
    int ss;

    while(ss){
        sub_sort();
        cout<<"\t";
        cin>>ss;
        if(ss==4){
 			loop_program(0);
             system("cls");
        	break;
		}
        Menu::sort_select(ss);
    }
}


int Menu::exitp()
{
    cout<<"Done ! program will be closed"<<endl;
    getch();
    return 0;
}

int loop_program(int d)
{
    int s ; 
    Menu object; 
    do{
    	if(d==0 || !d) return 0;
        object.show_main();
        cout<<"\t";
        cin>>s;
        if(s==7) return 0;
        object.gets(s);
    }while(s);

}

int main()
{
    loop_program(1);

}
