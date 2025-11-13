#include<stdio.h>
 void rentCar(int day);
 int main(){
 	int day;
 	printf("Enter number of days :");
 	scanf("%d", &day);
 	rentCar(day);
 	return 0;
 } 
 void rentCar(int day) {
 	float km, discount=0,total=0, extrakm=0, extraCost=0;
 	 float baseRate=40;
 	 float finalrent=0;
 	printf("Enter kilometers :");
 	scanf("%f", &km);
 	
 	total=day*baseRate;
 	
 	if(km>(day*100)) {
 		extrakm=km-(100*day);
 		extraCost=extrakm*0.25;
 		total+=extraCost;
 		
	 }
	    if(day>7) { 
	 	 discount=total*0.10;
	 	 total-=discount;
	 }
	 finalrent=total+extraCost-discount;
	 printf("Entra kilometers: %.2f km\n", extrakm);
	 printf("Extra cost: $%.2f\n", extraCost);
	printf("Final total cost = $%.2f\n", total);
	 
 }
