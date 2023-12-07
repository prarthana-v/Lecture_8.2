/* Write a Program to find leap years between two given numbers and store them in an array. And then print that array.*/
 #include<stdio.h>
 main(){
 	
 	int i,fy,sy,count=0;
	int leapyear[100];
	printf("Enter First Year:");
 	scanf("%d",&fy);
 	
 	printf("Enter Second Year:");
 	scanf("%d",&sy);
 	
 	for(i=fy;i<sy;i++){
 		if(i%4==0 || i%100==0 ||i%400==0){
 			count++;
 			leapyear[count]=i;
 			printf("%d ",leapyear[count]);
	 }
	}
}


