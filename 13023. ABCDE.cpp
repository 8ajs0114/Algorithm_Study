#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool a[2000][2000];
vector<int> g[2000];
vector<pair<int, int>> edges;

int main()
{
    int n, m, i, j, A, B, C, D, from, to;
    cin >> n >> m;
    
    for(i = 0; i < m; i++)
    {
        cin >> from >> to;
        edges.push_back({from, to});
        edges.push_back({to, from});
        a[from][to] = a[to][from] = true;
        g[from].push_back(to);
        g[to].push_back(from);        
    }
    
    m *= 2;
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < m; j++)
        {
            A = edges[i].first;  
            B = edges[i].second;
            C = edges[j].first;  
            D = edges[j].second;
            
            if (A == B || A == C || A == D || B == C || B == D || C == D)
                continue;

            if(!a[B][C])
                continue;

            for(int E : g[D])
            {
                if (A == E || B == E || C == E || D == E)
                    continue;
                
                cout << 1 << '\n';
                return 0;
            }
        }
    }
    
    cout << 0 << '\n';
    return 0;
}