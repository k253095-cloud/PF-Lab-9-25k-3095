#include<stdio.h>
 float processTransaction(float remaining_limit , float transaction_amount) {
 	
 	if(transaction_amount<=remaining_limit) {
 		remaining_limit-=transaction_amount;
 		printf("Transaction Approved!\n");
	 }else {
	 	printf("Transaction Declined!");
	 }
 	return remaining_limit;
 }
  int main(){
  	float limit=50000;
  	float amount;
 	printf("Enter yor transaction amount : ");
 	scanf("%f", &amount);
 	 limit=processTransaction(limit, amount);
 	printf("Remaining limit: %.2f\n", limit);
  	return 0;
  }
