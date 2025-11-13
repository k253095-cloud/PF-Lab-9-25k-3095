#include<stdio.h>
  void checkTemp(float temp);
 int main(){
 	float temp;
 	printf("Enter a temperature in celsius :");
 	scanf("%f", &temp);
 	 checkTemp(temp);
 	
 }
 void checkTemp(float temp) {
 	if(temp>35) {
 		printf("code 1: HEAT ALERT\n");
	 }else if(temp<10) {
	 	printf("code 2: COLD ALERT\n");
	 }else if(temp>15 || temp<25) {
	 	printf("Code 3: COMFORT ZONE\n");
	 }else {
	 	printf("COde 4 : NORMAL TEMPERATURE\n");
	 }
 }
