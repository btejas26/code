#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int>g[N];
int depth[N];
int height[N];
void dfs(int vertex, int parent) {
	for (int child : g[vertex]) {

		if (child == parent)continue;
		depth[child] = depth[vertex] + 1;
		dfs(child, vertex);
		height[vertex] = max(height[vertex], height[child] + 1);
	}
}
int main() {
#ifndef tejas
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int node;
	cin >> node;
	for (int i = 1; i <= node - 1; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);

	}
	dfs(1, 0);
	for (int i = 1; i <= node - 1; ++i)
	{
		cout << depth[i] << " " << height[i] << endl;
	}
	return 0;
}