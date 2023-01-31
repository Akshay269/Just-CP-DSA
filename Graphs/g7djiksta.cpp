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
    vector<int> distance(V);
    // using priority_queue
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    distance[0] = S;
    pq.push({0, S});


    
    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;

        for (auto it : adj[node])
        {
            int adjdis = it.first;
            int adjnode = it.second;
            if (dis + adjdis < distance[adjnode])
            {
                distance[adjnode] = dis + adjdis;
                pq.push({distance[adjnode], adjnode});
            }
        }
    }
    return distance;

    // using set
    set<pair<int, int>> st;
    vector<int> distance(V);
    st.insert({0, S});
    distance[S] = 0;



    while (!st.empty())
    {
        auto it = *(st.begin());//bcoz like pq.top() there is no function in sets
        int dis = it.first;
        int node = it.second;
        
        st.erase(it);

        for (auto it2 : adj[node])
        {

            int adjnode = it2[0];
            int adjdis = it2[1];
            if (dis + adjdis < distance[adjnode])
            {

                if (distance[adjnode] != 1e9)
                    st.erase({distance[adjnode], adjnode});
            }
            distance[adjnode] = dis + adjdis;
            st.insert({distance[adjnode], adjnode});
        }
    }
    return distance;
}