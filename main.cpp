#include <iostream>
#include <vector>
using namespace std;

// define class
class LoopDetector
{
public:
    // constructor initialized with properties
    LoopDetector(int n) : adj(n), visited(n, false), inPath(n, false), nodeCount(n) {}

    void addEdge(int u, int v)
    {
        // Check if u and v are within valid range
        if (u >= 0 && u < nodeCount && v >= 0 && v < nodeCount)
        {
            // Add v to the adjacency list of u.
            adj[u].push_back(v);
            // Add u to the adjacency list of v
            adj[v].push_back(u);
        }
    }

    bool detectLoop()
    {
        for (int i = 0; i < adj.size(); ++i)
        {
            // if node[i] has not been visited
            if (!visited[i])
            {
                if (dfs(i, -1))
                    // if loop is detected, return true
                    return true;
            }
        }
        // if no loop if detected, return false
        return false;
    }

private:
    vector<vector<int> /**/> adj; // Adjacency list for the graph
    vector<bool> visited;
    vector<bool> inPath;
    int nodeCount; // Keep track of the number of nodes

    bool dfs(int node, int parent)
    {
        visited[node] = true;
        inPath[node] = true;

        // for each neighbor in adjacency list
        for (int neighbor : adj[node])
        {
            // if neighbor not visited
            if (!visited[neighbor])
            {
                // if dfs returns true
                if (dfs(neighbor, node))
                    // cycle is found, returns true
                    return true;
            }
            // else if neighbor is not in parent
            else if (neighbor != parent)
            {
                // return true
                return true; // loop detected
            }
        }
        // mark as no loop found in path
        inPath[node] = false;
        return false;
    }
};

int main()
{
    // initialize node count
    int n;
    // prompt user to enter number of coordinates
    cout << endl
         << "Enter the number of recorded coordinates: " << endl;
    // user enters number of coordinates
    cin >> n;

    LoopDetector monitor(n);
    // prompt user to enter all coordinate pairs
    cout << "Enter the coordinate pairs:" << endl;

    // this will read the coordinates that user inputs
    for (int i = 0; i < n; ++i)
    {
        int u, v;
        cin >> u >> v;
        monitor.addEdge(u, v);
    }

    if (monitor.detectLoop())
    {
        // if loop detected, output loop detected
        cout << "Loop detected" << endl;
    }
    else
    {
        // if loop not detected, output no loop detected
        cout << "No loop detected" << endl;
    }

    return 0;
}
