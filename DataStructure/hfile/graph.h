#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
#include <list>

using namespace std;

class graph{

	public:
		graph();
		void get_v();
		void set_v(int v);
		void graph_defenations();
		void get_edg();

		void addE(int x , int y);
		void print_graph();
		void BFS(int s);
		void get_BFS();


	private:
		int vertex ;
		list<int> *vex;
		bool* _visit_;

};

graph::graph()
{
	vertex = 8;
	vex = new list<int>[vertex];
}

void graph::get_edg()
{
	int i , j ;
	cout<<"\tvertex from : "; cin>>i;
	cout<<"\tto ---> "; cin>>j; 
	addE(i,j);
	
}

void graph::addE(int x , int y)
{
	vex[x].push_back(y);
	vex[y].push_back(x);
}

void graph::get_BFS()
{
	int s;
	cout<<"\tplease Enter Your vertex to BFS travers : "; cin>>s;
	BFS(s);
	
}

void graph::BFS(int mine){
  _visit_ = new bool[vertex];
  for (int i = 0; i < vertex; i++)
    _visit_[i] = false;

  list<int> saf;

  _visit_[mine] = true;
  saf.push_back(mine);

  list<int>::iterator i;

  while (!saf.empty()) {
    int currVertex = saf.front();
    cout << "\tvisited : " << currVertex << " ";
    saf.pop_front();

    for (i = vex[currVertex].begin(); i != vex[currVertex].end(); ++i) {
      int adjVertex = *i;
      if (!_visit_[adjVertex]) {
        _visit_[adjVertex] = true;
        saf.push_back(adjVertex);
      }
    }
  }
}

void graph::print_graph()
{
	cout<<"--------------------------------- Res --------------------------------\n\n";
	for(int i  = 0 ; i<vertex ; i++)
	{
		cout<<"\tvertex "<<i<<"-> ";
		for(int n:vex[i])
		{
			cout<<n<<" , ";
		}
		cout<<endl;
	}

}

void graph::graph_defenations()
{
	system("cls");
	getch();
	cout<<"\n";
	cout<<"    A graph in data structure is :"<<endl;
	cout<<"\tGraphs are mathematical structures that reflect the pairwise relationship between things.\n"//
		  "\tA graph is a type of flow structure that displays the interactions of several objects. It\n"//
		  "\tmay be represented by utilizing the two fundamental components, nodes and edges.\n";

}

//void graph::get_v()
//{
//	int num_v ;
//	cout<<"\tplease enter number of your vertex : "; cin>>num_v;
//	set_v(num_v);
//}
//
//void graph::set_v(int num)
//{
//	vertex = num;
//	vex = new list<int>[vertex];
//}



// int n;
// vector<vector<int>> adj
// const int INF = 1000000000;

// struct Edge {
//     int w = INF, to = -1;
// };

// void prim() {
//     int total_weight = 0;
//     vector<bool> selected(n, false);
//     vector<Edge> min_e(n);
//     min_e[0].w = 0;

//     for (int i=0; i<n; ++i) {
//         int v = -1;
//         for (int j = 0; j < n; ++j) {
//             if (!selected[j] && (v == -1 || min_e[j].w < min_e[v].w))
//                 v = j;
//         }

//         if (min_e[v].w == INF) {
//             cout << "No MST!" << endl;
//             exit(0);
//         }

//         selected[v] = true;
//         total_weight += min_e[v].w;
//         if (min_e[v].to != -1)
//             cout << v << " " << min_e[v].to << endl;

//         for (int to = 0; to < n; ++to) {
//             if (adj[v][to] < min_e[to].w)
//                 min_e[to] = {adj[v][to], v};
//         }
//     }

//     cout << total_weight << endl;
// }