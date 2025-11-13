#include<stdio.h>
  void billProcess(int foodCast);
  int main(){
  	int people;
  	printf("Enter Number of people :");
  	scanf("%d", &people);
  	billProcess(people);
  	return 0;
  }
  void billProcess(int people) {
  	float foodCost, tax, tip, service=0, total;
  	printf("Enter Price of food :");
  	scanf("%f", &foodCost);
  	if(people>6) {
  		service=foodCost*0.05;
  		foodCost=foodCost+service;
  		
	  }
  	if(foodCost>50) {
  		tax=foodCost*0.08;
  		tip=foodCost*0.15;
	  }else {
	  	tax=foodCost*0.08;
	  	tip=foodCost*0.1;
	  }
	  total=foodCost + tax + tip + service;
	  printf("Total Bill is : $%.2f\n", total);
  }
