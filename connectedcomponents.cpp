#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
std::vector<int> g[N];
bool vis[N];
//NUMBER OF CONNECTED COMPONENTS IS EQUAL TO NUMBER OF TIMES DFS RUN
void dfs(int vertex) {
	if (vis[vertex])return;
	vis[vertex] = true;
	for (int child : g[vertex]) {
		//if(vis[child])continue;
		dfs(child);
	}

}
int main() {
#ifndef tejas
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	int cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (vis[i])continue;
		dfs(i);
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}