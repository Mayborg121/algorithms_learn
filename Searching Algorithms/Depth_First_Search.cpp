#include <iostream>
#include <vector>
#include <stack>

using namespace std;

//iterartive depth first search function
int DFS(int startNode, const vector<vector<int>>& graph, int targetNode) {
    
    vector<bool> visited(graph.size(), false);  //array of visited nodes
    stack<int> nodeStack;                       //stack of the DFS
    
    nodeStack.push(startNode);

    while (!nodeStack.empty()) {
        int currentNode = nodeStack.top();
        nodeStack.pop();

        if (!visited[currentNode]) {
            cout << "Visited node: " << currentNode << endl;
            visited[currentNode] = true;

            if (currentNode == targetNode) { 
                cout << "Node " << targetNode << " found!" << endl;
                return currentNode;
            }

        for (int neighbor : graph[currentNode]) {  //iterates the currentNode => from vector<int graph>
            if (!visited[neighbor]) {
                nodeStack.push(neighbor);
            }
        }
    }
}
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

    int startNode = 0; //declartion of startNode
    int targetNode ;

    cout<<"\nEnter a Node to find : ";
    cin>>targetNode;

    DFS(startNode, graph, targetNode);

    return 0;
}





// Explanation:
// 1. Graph Representation: The graph is represented as an adjacency list using a vector of vector<int>.
// 2. Visited Nodes: A vector<bool> is used to keep track of visited nodes.
// 3. Stack for DFS: A stack<int> is used to manage the nodes to be visited.
// 4. DFS Logic:
//      a. Push the starting node onto the stack.
//      b. While the stack is not empty, pop the top node.
//      c. If the node hasn't been visited, mark it as visited and print it.
//      d. Push all unvisited neighbors of the current node onto the stack.
// This code will perform an iterative DFS starting from the specified startNode and print the nodes as they are visited. Feel free to adapt and expand this example to suit your specific needs!
