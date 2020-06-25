/*You can move only two dir:next row or next col*/
#include <iostream>
#include <vector>
using namespace std;

#define M 3
#define N 3

// Function to check if (i, j) is valid matrix coordinate
bool isvalid(int i, int j)
{
	return (i >= 0 && i < M && j >= 0 && j < N);
}

// Function to print the route taken
void printPath(vector<int> const &path, int last)
{
	for (int i : path)
		cout << i << " - ";
	cout << last << endl;
}

void findPaths(int mat[][N], vector<int> &path, int i, int j)
{
	// if we have reached the last cell, print the route
	if (i == M - 1 && j == N - 1)
	{
		printPath(path, mat[i][j]);
		return;
	}

	// include current cell in path
	path.push_back(mat[i][j]);

	// move right
	if (isvalid(i, j + 1))
		findPaths(mat, path, i, j + 1);

	// move down
	if (isvalid(i + 1, j))
		findPaths(mat, path, i + 1, j);

	// remove current cell from the path
	path.pop_back();
}

int main()
{
	int mat[M][N] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	vector<int> path;

	// start from (0, 0) cell
	int x = 0, y = 0;

	findPaths(mat, path, x, y);

	return 0;
}
