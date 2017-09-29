 #include<stdio.h> 
 #include<stdlib.h> 
double height, weight;
int main(void) 
{ 
	
	printf("請輸入你的體重(kg)和身高(m)(例:55 1.65):");
	scanf_s("%lf%lf", &weight, &height);
	printf("Your BMI value is:%.2f \n\n\n", weight / (height*height));
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
	system("pause"); 
	return 0; 
} 
