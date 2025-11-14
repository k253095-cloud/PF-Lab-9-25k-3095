#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int *ptr = arr; 

    printf("Step 1: Access using pointer arithmetic and indexing\n");
    printf("%d\n", *(ptr + 0));  
    printf("%d\n", *(ptr + 3));  
    printf("%d\n", ptr[2]);      

    printf("\nStep 2: Move pointer forward by 4 positions\n");
    ptr = ptr + 4;  

    printf("%d\n", *ptr);        
    printf("%d\n", *(ptr + 1));  
    printf("%d\n", ptr[2]);     

    printf("\nStep 3: Another pointer points to 6th element\n");
    int *p2 = &arr[5];  
    printf("%d\n", *p2);       
    printf("%d\n", *(p2 - 2)); 
    return 0;
}


