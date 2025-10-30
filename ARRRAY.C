#include <stdio.h>


int main() {
     printf("\n--------------------------------------------------- \n");
     printf("\n-------------------BILL-----------------------------\n");             
     
     printf("\n--------------------------------------------------- \n");
 char customerName[20];
   printf("Enter the name of customer:");
   scanf ("%s",& customerName);
   


   
    printf("customerName:%s\n",customerName);
   
    
    printf("\n--------------------------------------------------- \n");


int A[50],n,i,j ,temp,sum=0;
  printf( "Enter the no of items you bought :");
  scanf("%d",&n);
 printf("\n--------------------------------------------------- \n");
  for (i=0;i<n;i++){
       printf("\nEnter the price of item %d:",i+1);
       scanf("%d",&A[i]);}
       printf("\n--------------------------------------------------- \n");
for(i=0;i<n;i++){
    printf("\nthe price %d item is :%d",i+1,A[i]);
}
printf("\n--------------------------------------------------- \n");
    for(i=0;i<n;i++){
        for (j=i+1;j<n;j++){
     if (A[i]<A[j]){
         temp=A[i];
         A[i]=A[j];
         A[j]=temp;
     }
     
        }


}
   printf("\n--------------------------------------------------- \n");
    printf("\nThe price of item in descending order\n ");
     for(i=0;i<n;i++){
 printf("\nThe price of item%dis %d\n",i+1,A[i]);
         
         sum=sum+A[i];
     }
     printf("\n--------------------------------------------------- \n");
  printf("\nTotal Amount:%d",sum);


    return 0;
}

  







