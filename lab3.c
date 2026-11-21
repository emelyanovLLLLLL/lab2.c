#include<stdio.h>
#include<math.h>
int main(){
	int n, m; //высота, ширина
		printf("Создание матрицы\nВведите количество строк: ");
		scanf("%d", &n);
		if (n <= 0) {
			printf("Введите число больше нуля\n");
		}
		printf("Введите количство столбцов: ");
		scanf("%d", &m);
		if (m <= 0 ) {
			printf("Введите число больше нуля\n");
		}
		
	int matrix[n][m];
	
	printf("Введите элементы матрицы, %d строк по %d чисел: \n", n, m);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\nВведенная матрица:\n");
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        printf("%d\t", matrix[i][j]);
	    }
	    printf("\n");
	}
	
	printf("строка сумм столбцов:\n");
	int sum[m];
	for (int j = 0; j < m; j++){
		sum[j] = 0;
		for(int i = 0; i < n; i++){
			sum[j] += matrix[i][j];
		}
		
	}
	for (int j = 0; j < m; j++)
		printf("%d\t", sum[j]);
	printf("\n");


	double s = 0.0;
	for(int i = 0; i < m; i++){
		double in_pow = (5.0 + (2.0 * i * sum[i] * sum [i]) / 10.0);
		s = pow(in_pow, 3);
	}
	printf("сумма элементов массива, расчитанная по формуле %0.3f\n", s);
	return 0;
}

