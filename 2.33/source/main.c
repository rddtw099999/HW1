 #include<stdio.h> 
 #include<stdlib.h> 
double num1, num2, num3, num4, num5;
int main(void) 
{ 

	printf("\n請輸入 每天行駛里程:");
	scanf_s("%lf", &num1);
	printf("\n請輸入 每加侖汽油價:");
	scanf_s("%lf", &num2);
	printf("\n請輸入 每加侖汽油行駛里程數:");
	scanf_s("%lf", &num3);
	printf("\n請輸入 每天的停車費:");
	scanf_s("%lf", &num4);
	printf("\n請輸入 每天的過路費:");
	scanf_s("%lf", &num5);
	printf("\n你的總花費約為:%f\n",((num1/num3)*num2)+num4+num5);
    
	system("pause"); 
	return 0; 
} 
