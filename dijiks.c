
#include <stdio.h>
#include <stdlib.h>

#define INF 9999
#define MAX 10

void dijkstra(int n, int cost[MAX][MAX], int source, int dist[MAX]) {
    int visited[MAX], i, count, min, next;

    // Initialize visited and dist arrays
    for (i = 1; i <= n; i++) {
        visited[i] = 0;
        dist[i] = cost[source][i];
    }

    dist[source] = 0;
    visited[source] = 1;
    count = 1;

    while (count < n) {
        min = INF;

        // Find the next minimum distance vertex
        for (i = 1; i <= n; i++) {
            if (!visited[i] && dist[i] < min) {
                min = dist[i];
                next = i;
            }
        }

        visited[next] = 1;

        // Update distances of adjacent vertices
        for (i = 1; i <= n; i++) {
            if (!visited[i] && dist[next] + cost[next][i] < dist[i]) {
                dist[i] = dist[next] + cost[next][i];
            }
        }
        count++;
    }
}

int main() {
    int n, source, i, j, cost[MAX][MAX], dist[MAX];

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the cost adjacency matrix (enter %d for no edge):\n", INF);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (i == j) {
                cost[i][j] = 0;
            }
            if (cost[i][j] == 0) {
                cost[i][j] = INF;
            }
        }
    }

    printf("Enter the source vertex: ");
    scanf("%d", &source);

    dijkstra(n, cost, source, dist);

    printf("Shortest distances from source vertex %d:\n", source);
    for (i = 1; i <= n; i++) {
        if (i != source) {
            printf("Vertex %d -> Distance %d\n", i, dist[i]);
        }
    }

    return 0;
}