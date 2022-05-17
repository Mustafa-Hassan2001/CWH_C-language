#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int i , j ;
//	for(i=1;i<=5;i+=2){
//		for(j=1;j<=i;j+=2){
//			printf("%d",j);
//		}
//		printf("\n");
//	}


//int i , j;
//for(i=1;i<=5;i++){
//	for(j=1;j>=i;j+=2){
//		printf("%d",j);
//	}
//	printf("\n");
//}



//int i=4 , j=12;
//if(i=5||j>50){
//	printf("hello");
//}else{
//	printf("hi");
//}



//int i=4 ,j=-1 ,k=0 ,w;
//w=i||j||k;
//printf("%d",w);


//int i ,  factorial=1 , num ;
//
//printf("Enter number:");
//scanf("%d",&num); 
//
//for(i=1;i<=num;i++){
//	factorial = factorial * i;
//}
//
//printf("The Factorial of %d  is: %d", num , factorial);
	
	

//	int num,i;
//	scanf("%d",&num);
//	for(i=1;i<=num;i++){
//	printf("the number is %d cube of %d is : %d.\n",i , i ,(i*i*i));
//    }
	



//int i ;
//for(i=1;i<=10;i++){
//	printf("15*%d=%d\n",i,(15*i));
//}	

	
//int j,i,n;
//   printf("Input upto the table number starting from 1 : ");
//   scanf("%d",&n);
//   printf("Multiplication table from 1 to %d \n",n);
//   for(i=1;i<=10;i++)
//   {
//     for(j=1;j<=n;j++)
//     {
//      // if (j<=n-1)
//           printf("%dx%d = %d,\t ",j,i,i*j);
//       //   else
//	  //\0  printf("%dx%d = %d \t",j,i,i*j);
//
//      }
//     printf("\n");
//    }	




	
//int i , j , num;
//scanf("%d",&num);
//for(i=1;i<=10;i++){
//	for(j=1;j<=num;j++){
//		printf("%d x %d = %d\t",i,j,(j*i));
//	}
//	printf("\n");
//}	
	
	

//int i ,j ,num ,sum=0;
//printf("Enter Number:");
//scanf("%d",&num);	
//	for(i=1;i<=num;i+=2){
//		printf("%d,",i);
//		sum=sum+i;
//	}
//	printf("\nThe sum of odd num is : %d",sum);
//	
	
	
//int i,j;
//for(i=1;i<=5;i++){
//	for(j=1;j<=i;j++){
//		printf("*");
//	}
//	printf("\n");
//}	


//int i ,j ;
//for(i=1 ; i<=5 ; i++){
//	for(j=1;j<=i;j++){
//	printf("%d",i);
//   }
//    printf("\n");
//}


int i , j , row , k=1 ;
printf("Input number of rows : ");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
	for(j=1;j<=i;j++){
	    	printf("%d ",k++);
	    }
		printf("\n");
}

 


//   int i,j,rows,k=1;
//   printf("Input number of rows : ");
//   scanf("%d",&rows);
//   for(i=1;i<=rows;i++)
//   {
//	for(j=1;j<=i;j++)
//	   printf("%d ",k++);
//	printf("\n");
//   }























	
	
	
	
	
	
	
	
	
	
	return 0;
}
