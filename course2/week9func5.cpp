#include<iostream>
using namespace std;

int main()
{
	int n, m;
	char matrix[100][100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> matrix[i][j];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << matrix[i][j];
		cout << endl;
	}

	system("pause");
	return 0;
}
/*
3 3 S#T.#....

*/
