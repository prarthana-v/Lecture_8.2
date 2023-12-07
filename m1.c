/*Write a Program to perform the merge operation of two 1D arrays & store it in another array.
 Keep in mind that both array sizes can be different.*/
 #include<stdio.h>
 main(){
 	int i,n,m;

	printf("Enter array A's size:");
 	scanf("%d",&n);
 	
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter a[%d] :",i);
		scanf("%d",&a[i]);
		
	}
	
	printf("Enter array B's size:");
 	scanf("%d",&m);
 	
	int b[n];
	for(i=0;i<m;i++){
		printf("Enter a[%d] :",i);
		scanf("%d",&b[i]);
		
	}
	int s=n+m;
	int c[s];
	for(i=0;i<n;i++){
		c[i]=a[i];
	}
	
	for(i=0;i<m;i++){
		c[n+i]=b[i];
	}
	printf("Array c: ");
	for(i=0;i<n+m;i++){
		printf("%d ",c[i]);
	}
 }
