//C++ Program to Implement Floyd Warshall Algorithm for Graphs
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define V 4
#define INF 99999

void printSolution(int dist[][V]);

void floydWarshall(int dist[][V])
{

	int i, j, k;
	for (k = 0; k < V; k++) {
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				if (dist[i][j] > (dist[i][k] + dist[k][j])
					&& (dist[k][j] != INF
						&& dist[i][k] != INF))
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}
	printSolution(dist);
}

void printSolution(int dist[][V])
{
	cout << "The Following Matrix Shows the Shortest Distances Between Every Pair of Vertices \n";
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				cout << "-1" << " ";
			else
				cout << dist[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int graph[V][V] = { { 0, 8, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 90, 1 },
						{ INF, INF, INF, 0 } };

	floydWarshall(graph);
	return 0;
}

