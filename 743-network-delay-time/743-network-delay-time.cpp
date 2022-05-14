class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        
        vector<vector<pair<int,int>>> G(N);
        for(auto itr: times)
            G[itr[0]-1].push_back({itr[1]-1,itr[2]});
        
        vector<int> timetaken(N,INT_MAX);
        return Dijkstra(K-1,G,N,timetaken);
    }
    int Dijkstra(int s, vector<vector<pair<int,int>>> &G, int N, vector<int> &timetaken)
    {
        priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
        pq.push({0,s});
        timetaken[s]=0;
        while(!pq.empty())
        {
            int time=pq.top().first;
            int source=pq.top().second;
            pq.pop();
            for(auto itr: G[source])
            {
                if(timetaken[itr.first]>(time+itr.second))
                {
                    pq.push({time+itr.second,itr.first});
                    timetaken[itr.first]=time+itr.second;
                }
            }
        }
        
        int max_val=0;
        for(int i=0; i<N; ++i)
        {
            if(timetaken[i]==INT_MAX)
                return -1;
            max_val=max(max_val,timetaken[i]);
        }
        return max_val;
    }
};