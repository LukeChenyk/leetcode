#include "stdafx.h"
#include "unique_paths.h"


UniquePaths::UniquePaths()
{
}


UniquePaths::~UniquePaths()
{
}

int UniquePaths::calculate(int m, int n)
{
	map = new int*[101];
	for (int i = 0;i < 101; ++i)
	{
		map[i] = new int[101];
		for (int j = 0;j < 101; ++j)
		{
			map[i][j] = 0;
		}
	}
	return goToStep(m, n);
}

int UniquePaths::goToStep(int m, int n)
{
	if (m == 1) {
		return 1;
	}

	if (n == 1) {
		return 1;
	}
	if (m == 2) {
		return n;
	}
	if (n == 2) {
		return m;
	}

	if (map[n][m] > 0) {
		return map[n][m];
	}
	if (map[m][n] > 0) {
		return map[m][n];
	}
	int count = goToStep(m - 1, n) + goToStep(m, n - 1);
	map[m][n] = count;
	return count;
}
