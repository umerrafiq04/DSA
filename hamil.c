#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int n;                       // Number of vertices
int graph[MAX][MAX];         // Adjacency matrix
int path[MAX];               // Array to store the Hamiltonian path

void NextVertex(int k) {
    do {
        path[k] = (path[k] + 1) % (n + 1); // Try the next vertex
        if (path[k] == 0) return;         // No further vertex is possible

        if (graph[path[k - 1]][path[k]] != 0) { // Check adjacency //should be an edge
            int j;
            for (j = 1; j < k; j++) {
                if (path[j] == path[k]) break; // Check for duplicate vertex
            }

            if (j == k) { // No duplicate vertex
                if ((k < n) || (k == n && graph[path[n]][path[1]] != 0)) {
                    return; // Valid vertex found
                }
            }
        }
    } while (true);
}

void Hamiltonian(int k) {
    do {
        NextVertex(k); // Generate the next vertex
        if (path[k] == 0) return; // No vertex found, backtrack

        if (k == n) {
            // A Hamiltonian cycle is found
            printf("Hamiltonian Cycle: ");
            for (int i = 1; i <= n; i++) {
                printf("%d ", path[i]);
            }
            printf("%d\n", path[1]); // Complete the cycle
        } else {
            Hamiltonian(k + 1); // Recursive call for the next vertex
        }
    } while (true);
}

int main() {
    int i, j;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Initialize the path array
    for (i = 1; i <= n; i++) {
        path[i] = 0;
    }

    path[1] = 1; // Start the path from the first vertex

    printf("Hamiltonian Cycles are:\n");
    Hamiltonian(2); // Start the Hamiltonian cycle generation

    return 0;
}