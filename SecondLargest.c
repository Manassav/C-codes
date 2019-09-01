#include <stdio.h>

#include<string.h>

 int main(void) 
 {
	
     // your code goes here
	

     int a[]={1,3,2,4,5,7,8,8,9};
    
     int i,first,second;

     first=second=0;

     for(i=0;i<9;i++)

     {

         if(a[i]>first)

         {

             second=first;

             first=a[i];

         }

        
    
     }

     printf("first : %d\n second : %d",first,second);

     
	return 0;

 }

