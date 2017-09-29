 #include<stdio.h> 
 #include<stdlib.h> 
int num1,	num2;
int main(void) 
{ 

	printf("請輸入兩個數字(例:56 28):");
	scanf_s("%d %d",&num1,&num2);
	printf("\n");
	if (num1%num2 == 0){
		printf("%d 是 %d 的倍數\n", num1, num2);
	}
	else
	{
		printf("%d 不是 %d 的倍數\n", num1, num2);
	}
	system("pause"); 
	return 0; 
} 
