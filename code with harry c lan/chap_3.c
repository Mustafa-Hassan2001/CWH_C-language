#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
// Condition statements	:- used when we have conditions or options..
// types of Condition statements
// 1. if else Condition
// 2. switch  Condition
//      ------"IF ELSE"---------
//===========================================================//


//  Q.cheak weather the number is even or odd ?  (single condition)
//Answer:-
//int a;
//printf("Enter your number=");
//scanf("%d",&a);
//if(a%2==0){
//	printf("%d number is even ",a);
//}
//else{
//	printf("%d number is odd",a);
//}

//------------------------------------------------------------	
	
// Q.write a program to check wather age is  greater then 18 then user is able to drive else greater then 90 or less than 18 user is not able to drive ?
//
//int age;
//printf("enter your age=");
//scanf ("%d", &age);
//if(age>=18){
//	printf("you are eligibe to derive");
//}
//if(age<18){
//	printf("your age is blow 18 you are not eligibe to derive");
//}
//if(age>=90){
//	printf("your age is so above you are not able to drive");
//}
//else{
//	
//}
	
//----------------------------------------------------------------

//Logical operators:- there are three logical operators 
//1. AND (&&)

//int age;
//printf("enter your age=");
//scanf ("%d", &age);
//if((age>=18)&&(age<90)) {
//	printf("your age is blow 90 and above 18 you are can eligibe to derive");
//}
//else{
//	printf("you cannot drive");
//	}

//------------------------

//2. OR  (||)

//int age ;
//int vippass=1 ;
//printf("enter your age=");
//scanf ("%d", &age);
//if((age>=18)&&(age<90)||(vippass==1)) {
//	printf("you can drive");
//}

//-------------------------

//3. NOT (!)

//int a=4;
//if(a!=3){
//printf("hello");
//}

//====================================================	
	
//      ------"IF ELSE"---------

//int num ;
//printf("enter your num=");
//scanf ("%d", &num);
//if(num==2){
//	printf("you get 2GP");
//}	
//else if(num==3){
//	printf("you get 3GP");
//}
//else if(num==4){
//	printf("you get 4GP");
//}
//else{
//	printf("you are fee dfolder");
//}
	
//======================================================//

//Shorthand of if-else is condition/ternary operator(one line operator)//

 int a;
 printf("enter number");
 scanf("%d",&a);
 
 (a<2)? printf("your number is not greater than 2"): printf("your number is  greater than 2");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
