#include <stdlib.h>
#include <stdio.h>

int main(void){
	int num;
	printf("叫块计:");
	scanf_s("%d",&num);
	if (num % 2 == 0){
		printf("%d琌案计\n", num);
	}
	else
		printf("%d琌计\n", num);

	system("pause");
	return 0;

}