 #include<stdio.h> 
 #include<stdlib.h> 
double num1, num2, num3, num4, num5;
int main(void) 
{ 

	printf("\n�п�J �C�Ѧ�p���{:");
	scanf_s("%lf", &num1);
	printf("\n�п�J �C�[�ڨT�o��:");
	scanf_s("%lf", &num2);
	printf("\n�п�J �C�[�ڨT�o��p���{��:");
	scanf_s("%lf", &num3);
	printf("\n�п�J �C�Ѫ������O:");
	scanf_s("%lf", &num4);
	printf("\n�п�J �C�Ѫ��L���O:");
	scanf_s("%lf", &num5);
	printf("\n�A���`��O����:%f\n",((num1/num3)*num2)+num4+num5);
    
	system("pause"); 
	return 0; 
} 
