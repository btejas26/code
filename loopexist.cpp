#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
std::vector<int> g[N];
bool vis[N];

bool dfs(int vertex, int parent) {
	//if (vis[vertex])return;
	vis[vertex] = true;
	bool loopexist = false;
	for (int child : g[vertex]) {
		if (vis[child] && child == parent)continue;
		if (vis[child])return true;
		loopexist |= dfs(child, vertex);
	}
	return loopexist;
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
	bool loopexist = false;
	for (int i = 1; i <= n; ++i)
	{
		if (vis[i])continue;
		if (dfs(i, 0)) {
			loopexist = true;
			break;
		}

	}
	cout << loopexist << endl;
	return 0;
}
