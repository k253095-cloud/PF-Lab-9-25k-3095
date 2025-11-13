#include<stdio.h>
 float academicStanding(float mark[], int size) {
 	 int sum=0;
 	  float average;
 	  int failsubject=0;
 	  for(int i=0; i<size; i++) {
 	  	sum+=mark[i];
 	  	if(mark[i]<40) {
 	  		failsubject=1;

		   }
	   }
	    average=sum/(float)size;
 	  	 if(failsubject) {
 	  	 	printf("Fail; One or more subjects below 40\n");
			}else if(average>=50.0){
				printf("Pass\n");
			}else {
				printf("Fail: Average below 50\n");
			}
	   return average;
 }
  int main(){
  	float studentMark[3];
  	float totalAverage;
  	//Take input of marks
  	for(int i=0; i<3; i++) {
  		printf("Enter marks for subjects %d:", i+1);
  		scanf("%f", &studentMark[i]);
	  }
  	totalAverage=academicStanding(studentMark, 3);
      printf("Average  = %.2f", totalAverage);
  }
