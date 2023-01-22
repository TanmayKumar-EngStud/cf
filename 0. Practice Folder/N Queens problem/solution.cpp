#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
using namespace std;

bool verify(vector<vector<int>> &board)
{
	int n = board.size();

	vector<int> rows(n, 0), cols(n, 0);
	unordered_map<int, int> l_diag, r_diag;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == 1)
			{
				if (rows[i] == 1 || cols[j] == 1)
					return false;

				if (l_diag[i - j] == 1 || r_diag[i + j] == 1)
					return false;

				l_diag[i - j]++;
				r_diag[i + j]++;

				rows[i]++;
				cols[j]++;
			}
		}
	}
	return true;
}

vector<vector<int>> SolutionBoard;

void print(vector<vector<int>> &board)
{
	int n = board.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << board[i][j] << ' ';
		}
		cout << "\n";
	}
	cout << "=============\n";
}

void recur(int Q, vector<vector<int>> &board)
{
	if (!SolutionBoard.empty())
		return;

	if (Q == 0)
	{
		SolutionBoard = board;
		return;
	}

	int n = board.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] != 1)
			{ // Empty
				board[i][j] = 1;
				if (verify(board))
				{
					recur(Q - 1, board);
				}
				board[i][j] = 0; // back-track
			}
		}
	}
}

int main()
{
	int N = 5, Q = 5;
	vector<vector<int>> board(N, vector<int>(N, 0));
	recur(Q, board);
	print(SolutionBoard);
}