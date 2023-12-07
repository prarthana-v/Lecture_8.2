/* Write a Program to find leap years between two given numbers and store them in an array. And then print that array.*/
 #include<stdio.h>
 main(){
 	
 	int i,fy,sy;

	printf("Enter First Year:");
 	scanf("%d",&fy);
 	
 	printf("Enter Second Year:");
 	scanf("%d",&sy);
 	
 	for(i=fy;i<sy;i++){
 		if(i%4==0 || i%100==0 ||i%400==0){
 		printf("%d",i);
	 }
	}
//	int a[n];
//	for(i=0;i<n;i++){
//		printf("Enter a[%d] :",i);
//		scanf("%d",&a[i]);
//		
//	}
//	int square[n];
//	for(i=0;i<n;i++){
//		square[i]=a[i]*a[i];
//	}
//	
//	printf("The square's are : ");
//	for(i=0;i<n;i++){
//		printf("%d ",square[i]);
//	}
 }
