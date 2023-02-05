#include <bits/stdc++.h>
using namespace std;
int main()
{
    int V, S;
    cin >> V >> S;
    vector<pair<int, int>> adj[V + 1];
    for (int i = 0; i < V; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
   //or edges vector is given
     for(auto it:edges){
           adj[it[0]].push_back({it[1],it[2]});
           adj[it[1]].push_back({it[0],it[2]});
       }

    // using priority_queue
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> parent(V+1);
    for (int i = 0; i < V; i++) parent[i] = i;

        
    vector<int> distance(V+1, 1e9);

    distance[S] = 0;
    pq.push({0, S});

    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node])
        {
            int adjdis = it.first;
            int adjnode = it.second;
            if (dis + adjdis < distance[adjnode])
            {
                distance[adjnode] = dis + adjdis;
                pq.push({distance[adjnode], adjnode});
                parent[adjnode]=node;
            }
        }
    }
    if(distance[V]==1e9) return -1;
    int dest=V;
    vector<int>ans;
    while(parent[dest]!=dest){
        ans.push_back(dest);
        dest=parent[dest];
    }
    ans.push_back(1);
    reverse(ans.begin(),ans.end());
}