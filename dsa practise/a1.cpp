/*#include <stdio.h>
//insertion
main() {
   int LA[] = {1,3,5,7,8};
   int item = 10, k = 3, n = 5;
   int i = 0, j = n;
   printf("The original array elements are :\n");
   for(i = 0; i<n; i++) {
   printf("LA[%d] = %d \n", i, LA[i]);
   }
   n = n + 1;
   while( j >= k)
  {
   LA[j+1] = LA[j];
  j = j - 1;
   }
   LA[k] = item;
   printf("The array elements after insertion :\n");
   for(i = 0; i<n; i++) {
   printf("LA[%d] = %d \n", i, LA[i]);
   }
}
#include <stdio.h>
//deletion
int main() {
   int LA[] = {1,3,5,7,8};
   int k = 3, n = 5;
   int i, j;
   
   printf("The original array elements are :\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
    
   j = k;
	
   while( j < n) {
      LA[j-1] = LA[j];
      j = j + 1;
   }
	
   n = n -1;
   
   printf("The array elements after deletion :\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}*/
/*
#include <stdio.h>
//search
int main() {
   int LA[] = {1,3,5,7,8};
   int item = 5, n = 5;
   int i = 0, j = 0;
   
   printf("The original array elements are :\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
    
   while( j < n){
      if( LA[j] == item ) {
         break;
      }
		
      j = j + 1;
   }
	
   printf("Found element %d at position %d\n", item, j+1);
}*//*
#include <stdio.h>  
//transverse
 main() {  
   int Arr[5] = {18, 30, 15, 70, 12};  
int i;  
   printf("Elements of the array are:\n");  
   for(i = 0; i<5; i++) {  
      printf("Arr[%d] = %d\n", i, Arr[i]);  
   }  
}  */

#include <stdio.h>
//sorting
     main()
    {
	
 
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
           printf("%d\n", number[i]);
 
    }






