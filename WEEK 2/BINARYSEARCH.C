#include<stdio.h>
#include<conio.h>
void main(){
	int a[30],temp,pass,i,j,size,mid,high,low,key;
	clrscr();
	printf("\n Enter the size of table");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n enter the value for element[%d]:-",i+1);
		scanf("%d",&a[i]);
	}
	printf("\N Enter no which you want to search in table");
	scanf("%d",&key);
	low=0;
	high=size;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==key){
			printf("\n The No is at location[%d]",mid+1);
			break;
		}
		else{
			if(key>a[mid]){
				low=mid+1;
			}
			else{
				high=mid-1;
			}
		}
	}
	if(a[mid]!=key){
		printf("\n[%d] is not found in table",key);
	}
	getch();
}