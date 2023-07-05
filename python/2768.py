import sys

INF = float('inf')

def floydWarshall(graph):
    dist = [linha[:] for linha in graph]
    for k in range(n):
        for i in range(n):
            for j in range(n):
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j], dist[j][k] + dist[k][i])
    return dist

#main
for linha in sys.stdin:
    n, m = map(int, linha.split())
    matriz = [[INF] * n for _ in range(n)]
    for _ in range(m):
        u, v, w = map(int, sys.stdin.readline().split())
        matriz[u-1][v-1] = w
        matriz[v-1][u-1] = w

    q = int(sys.stdin.readline())
    for _ in range(q):
        u, v, x = map(int, sys.stdin.readline().split())
        
        matrizAux = [linha[:] for linha in matriz]
        for i in range(x, n-1):
            for j in range(n):
                matrizAux[i][j] = INF
                    
        for i in range(n):
            for j in range(x, n-1):
                matrizAux[i][j] = INF
        
        distances = floydWarshall(matrizAux)
        
        if distances[u-1][v-1] == INF:
            print("-1")
        else:
            print(distances[u-1][v-1])
