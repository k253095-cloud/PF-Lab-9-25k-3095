#include<stdio.h>
 void taxCalculate(int income);
 int main(){
 	int income;
 	printf("Enter Gross income :");
 	scanf("%d", &income);
 	taxCalculate(income);
 	return 0;
 }
 void taxCalculate(int income) {
 	float tax=0, netIncome=0;
 	if(income<=20000) {
 		tax=0;
	 }else if(income<=50000) {
	 	tax= (income-20000)*0.10;
	 	
	
	 }else {
	 	tax=(50000-20000)*0.10;
	 	tax+=(income-50000)*0.20;
	 }
	 netIncome=income-tax;
	 printf("Tax =$%.2f\n", tax);
	 printf("NET income = $%.2f\n", netIncome);
	 
 }
