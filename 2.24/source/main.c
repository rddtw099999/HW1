#include <stdlib.h>
#include <stdio.h>

int main(void){
	int num;
	printf("請輸入一個數:");
	scanf_s("%d",&num);
	if (num % 2 == 0){
		printf("%d是一個偶數\n", num);
	}
	else
		printf("%d是一個奇數\n", num);

	system("pause");
	return 0;

}