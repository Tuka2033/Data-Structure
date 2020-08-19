#include<iostream>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#define max 10
using namespace std;
class graph {
	vector<list<int>> edges;
public:
	graph(int vertexcnt)
	{
		list<int> emptyList;
		for (int i = 1; i <=vertexcnt; i++)
		{
			edges.push_back(emptyList);
		}
	}
	void Accept()
	{
		int edge_cnt, from, to;
		cout << "enter number of edges: ";
		cin >> edge_cnt;
		cout << "enter edges from -> to: " << endl;
		for (int i = 0; i < edge_cnt; i++) {
			cin >> from >> to;
			edges[from].push_back(to);
			edges[to].push_back(from);
		}
	}
	void Display() {
		for (unsigned i = 0; i < edges.size(); i++) {
			cout << i << " = ";
			list<int>::iterator itr = edges[i].begin();
			while (itr != edges[i].end()) {
				cout << *itr << " -> ";
				itr++;
			}
			cout << endl;
		}
	}
	void dfs(int start)
	{
		stack<int> s;
		bool marked[max] = { false };

		s.push(start);
		marked[start] = true;
		while (!s.empty()) {
			int trav = s.top();	s.pop();
			cout << trav << ", ";
			list<int>::iterator itr = edges[trav].begin();
			while (itr != edges[trav].end()) {
				if (marked[*itr] == false) {
					s.push(*itr);
					marked[*itr] = true;
				}
				itr++;
			}
		}
		cout << endl;
	}
	void bfs(int start)
	{
		queue<int> q;
		bool marked[max] = { false };

		q.push(start);
		marked[start] = true;
		while (!q.empty()) {
			int trav = q.front();	q.pop();
			cout << trav << ", ";
			list<int>::iterator itr = edges[trav].begin();
			while (itr != edges[trav].end()) {
				if (marked[*itr] == false) {
					q.push(*itr);
					marked[*itr] = true;
				}
				itr++;
			}
		}
		cout << endl;
	}
};

int main() {
	graph g(6);
	g.Accept();
	g.Display();
	g.dfs(0);
	g.bfs(0);
	return 0;
}