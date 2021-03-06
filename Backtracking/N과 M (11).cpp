#include <iostream>
#include <algorithm>
using namespace std;

int N, M, arr[7], s[7];

void dfs(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << s[i] << " ";
		}
		cout << "\n";
		return;
	}
	int prev = -1;
	for (int i = 0; i < N; i++) {
		if (prev == arr[i]) continue;
		s[cnt] = arr[i];
		prev = arr[i];
		dfs(cnt + 1);
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	dfs(0);
	return 0;
}