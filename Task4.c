#include<stdio.h>
  void shipping(int amount);
  int main(){
  	 int amount;
  	 printf("Enter Amount :");
  	 scanf("%d", &amount);
  	 shipping(amount);
  	return 0;
  }
    void shipping(int amount) {
    	 int weight;
    	if(amount>100) {
    		printf("Free shipping!");
		}else if(amount<100) {
			printf("Enter Weight of oder :");
			scanf("%d", &weight);
			if(weight<=2) {
				printf("Shipping charges is $10");
			}else if(weight>=2 && weight<=5) {
				printf("Shipping charges is $15!");
			}else if(weight>5) {
				printf("Shipping charges is $20!");
			}
		}
	}
