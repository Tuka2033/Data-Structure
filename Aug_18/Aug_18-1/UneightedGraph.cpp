#include<iostream>
#include<stack>
#include<queue>
using namespace std;
#define max 15
class graph {
	int mat[max][max];
	int vertexcount;
public:
	graph(int val)
	{
		vertexcount = val;
		for (int i = 0; i < vertexcount; i++)
		{
			for (int j = 0; j < vertexcount; j++)
			{
				mat[i][j] = 0;
			}
		}
	}
	void Accept()
	{
		cout << "\nEnter " << vertexcount << "*" << vertexcount << " matrix element::\n";
		for (int i = 0; i <vertexcount; i++)
		{
			for (int j = 0; j < vertexcount; j++)
			{
				cin>>mat[i][j];
			}
		}
	}
	void Display()
	{
		for (int i = 0; i < vertexcount; i++)
		{
			for (int j = 0; j <vertexcount; j++)
			{
				cout<<mat[i][j]<<"\t";
			}
			cout << endl;
		}

	}
	void dfs_trav(int start) {
		stack<int> s;
		bool visited[max] = { false };
		// push start vertex on stack and mark it as visited
		s.push(start);
		visited[start] = true;
		// repeat until stack is empty
		while (!s.empty()) {
			// pop a vertex from stack and print it
			int trav = s.top();	s.pop();
			cout << trav << ", ";
			// push all non visited neighbours of trav to the stack
			// and mark them as visited.
			for (int j = 0; j < vertexcount; j++) {
				if (mat[trav][j] == 1 && visited[j] == false) {
					s.push(j);
					visited[j] = true;
				}
			}
		}
		cout << endl;
	}
	void bfs_trav(int start) {
		queue<int> q;
		bool visited[max] = { false };
		// push start vertex on queue and mark it as visited
		q.push(start);
		visited[start] = true;
		// repeat until queue is empty
		while (!q.empty()) {
			// pop a vertex from queue and print it
			int trav = q.front();	q.pop();
			cout <<trav << ", ";
			// push all non visited neighbours of trav to the queue
			// and mark them as visited.
			for (int j = 1; j < vertexcount; j++) {
				if (mat[trav][j] == 1 && visited[j] == false) {
					q.push(j);
					visited[j] = true;
				}
			}
		}
		cout << endl;
	}
void indegree()
	 {
	for (int i = 0; i < vertexcount; i++) {
		int id = 0;
		for (int j = 0; j < vertexcount; j++) {
			if (mat[j][i] == 1)
			{
				id++;
			}
		}
		cout << "Indegree of vertex " << i << " is::" << id<<endl;
	}
}
void outdegree()
{
	for (int i = 0; i <vertexcount; i++) {
		int id = 0;
		for (int j = 0; j < vertexcount; j++) {
			if (mat[i][j] == 1)
			{
				id++;
			}
		}
		cout << "Outdegree of vertex " << i << " is::" << id << endl;;
	}
}
};
int main()
{
	graph g(3);
	g.Accept();
	g.Display();
	g.dfs_trav(0);
	g.bfs_trav(1);
	g.indegree();
	g.outdegree();
}
/*
 |   0| 1| 2| 3| 4| 5| 6| 7| 8| 9| w| x| y| z|
---------------------------------------------
0|-> 0| 1| 1| 1| 0| 0| 0| 0| 0| 0| 1| 0| 0| 0|
---------------------------------------------
1|-> 1| 0| 0| 0| 1| 0| 0| 0| 0| 0| 1| 0| 0| 0|
---------------------------------------------
2|-> 1| 0| 0| 1| 1| 1| 0| 0| 0| 1| 0| 0| 0| 0|
---------------------------------------------
3|-> 0| 0| 1| 0| 0| 0| 0| 0| 1| 0| 0| 0| 0| 0|
---------------------------------------------
4|-> 1| 1| 1| 0| 0| 0| 0| 0| 0| 0| 0| 1| 0| 0|
---------------------------------------------
5|-> 0| 0| 1| 0| 1| 0| 1| 0| 0| 1| 0| 0| 0| 0|
---------------------------------------------
6|-> 0| 0| 0| 0| 0| 0| 1| 0| 0| 0| 0| 0| 1| 0|
---------------------------------------------
7|-> 0| 0| 0| 0| 0| 1| 0| 1| 0| 0| 0| 0| 0| 0|
---------------------------------------------
8|-> 0| 0| 0| 0| 0| 1| 1| 0| 0| 0| 0| 0| 0| 0|
---------------------------------------------
9|-> 0| 0| 0| 1| 0| 0| 0| 0| 0| 1| 0| 0| 0| 0|
---------------------------------------------
w|-> 1| 1| 0| 0| 0| 0| 0| 0| 0| 0| 0| 1| 0| 0|
---------------------------------------------
x|-> 0| 0| 0| 0| 1| 0| 0| 0| 0| 0| 1| 0| 0| 1|
---------------------------------------------
y|-> 0| 0| 0| 0| 0| 1| 0| 0| 0| 0| 0| 0| 0| 1|
---------------------------------------------
z|-> 0| 0| 0| 0| 0| 0| 0| 0| 0| 0| 0| 1| 1| 0|
---------------------------------------------
*/