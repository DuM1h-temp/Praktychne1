#include <stdio.h>

int main(){	
	printf("Введіть три значення:\n");
	int t1, t2, t3;
	scanf("%d %d %d", &t1, &t2, &t3);
	
	if (t1>10000||t2>10000||t3>10000){
		printf("Числа не повинні перевищувати 10000");
		return 1;
	}
	
	float t = (t1+t2+t3)/3.0;
	printf("Час, необхідний для з'їдання пирога %.2f", t);
	
	return 0;
}
