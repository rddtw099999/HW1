#include <stdlib.h>
#include <stdio.h>

int main(void){
	int num;
	printf("�п�J�@�Ӽ�:");
	scanf_s("%d",&num);
	if (num % 2 == 0){
		printf("%d�O�@�Ӱ���\n", num);
	}
	else
		printf("%d�O�@�ө_��\n", num);

	system("pause");
	return 0;

}