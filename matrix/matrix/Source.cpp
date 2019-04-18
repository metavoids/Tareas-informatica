#include <iostream>

int** allocate_matrix(int N, int M) {
	int j;
	int**m = new int*[N];
	for (int i = 0; i < N; i++) {
		m[i] = new int[M];
	}
	//inicializacion
	for (int i = 0; i < N; i++) {
		for (j = 0; j < M; j++)
		{
			m[i][j] = 10;
			m[i][4] = 3;
			std::cout << m[i][j];
		}
		std::cout << std::endl;
	}
	
	return m;
}
void free_matrix(int** m, int N) {
	for (int i = 0; i < N; i++) {
		delete[] m[i];
	}
	delete[] m;
	m = NULL;
}
int main() {
	int N, M, valor;
	int **s_matrix;
	using namespace std;
	cout << ("Introduzca dimesiones\n");
	cin >> N;
	cin >> M;
	s_matrix = allocate_matrix(N, M);
	cout << s_matrix[1][4] << endl;
	free_matrix(s_matrix, N);
	cout << s_matrix;
	system("pause");
}