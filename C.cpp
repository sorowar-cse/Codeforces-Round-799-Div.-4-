#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string board[8];
		for (int i{ 0 }; i < 8; i++) {
			cin >> board[i];
		}
		for (int j{ 1 }; j < 7; j++) {
			for (int i{ 1 }; i < 7; i++) {
				if (board[j][i] == '#'&& board[j - 1][i - 1] == '#'
					&& board[j - 1][i + 1] == '#' && board[j + 1][i - 1] == '#'
					&& board[j + 1][i + 1] == '#') {
					cout << j + 1 << " " << i + 1 << "\n";
				}
			}
		}
	}
}

