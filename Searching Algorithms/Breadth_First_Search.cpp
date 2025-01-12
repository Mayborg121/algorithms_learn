#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Iterative Breadth-First Search function
int BFS(int startNode, const vector<vector<int>>& graph, int targetNode) {
    vector<bool> visited(graph.size(), false);  // Array to track visited nodes
    queue<int> nodeQueue;                       // Queue for BFS

    nodeQueue.push(startNode);  // Start with the source node
    visited[startNode] = true;

    while (!nodeQueue.empty()) {
        int currentNode = nodeQueue.front();
        nodeQueue.pop();

        cout << "Visited node: " << currentNode << endl;

        if (currentNode == targetNode) {
            cout << "Node " << targetNode << " found!" << endl;
            return currentNode;
        }

        // Add all unvisited neighbors to the queue
        for (int neighbor : graph[currentNode]) {
            if (!visited[neighbor]) {
                nodeQueue.push(neighbor);
                visited[neighbor] = true;  // Mark neighbor as visited
            }
        }
    }

    cout << "Node " << targetNode << " not found in the graph." << endl;
    return -1;
}

int main() {
    // Example graph represented as an adjacency list
    vector<vector<int>> graph = {
        {1, 2},    // Neighbors of node 0           
        {0, 3, 4}, // Neighbors of node 1
        {0, 4},    // Neighbors of node 2
        {1, 5},    // Neighbors of node 3
        {1, 2, 5}, // Neighbors of node 4
        {3, 4}     // Neighbors of node 5

                    
            //  ADJACENCY MATRIX REPRESENTAION
                    //      0 1 2 3 4 5
                    //     _____________
                    //  0 | 0 1 1 0 0 0
                    //  1 | 1 0 0 1 1 0
                    //  2 | 1 0 0 0 1 0
                    //  3 | 0 1 0 0 0 1
                    //  4 | 0 1 1 0 0 1
                    //  5 | 0 0 0 1 1 0

    };

    int startNode = 0; // Starting node
    int targetNode;

    cout << "\nEnter a Node to find: ";
    cin >> targetNode;

    BFS(startNode, graph, targetNode);

    return 0;
}
