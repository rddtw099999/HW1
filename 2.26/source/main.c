 #include<stdio.h> 
 #include<stdlib.h> 
int num1,	num2;
int main(void) 
{ 

	printf("�п�J��ӼƦr(��:56 28):");
	scanf_s("%d %d",&num1,&num2);
	printf("\n");
	if (num1%num2 == 0){
		printf("%d �O %d ������\n", num1, num2);
	}
	else
	{
		printf("%d ���O %d ������\n", num1, num2);
	}
	system("pause"); 
	return 0; 
} 
