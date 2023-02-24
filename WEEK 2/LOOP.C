#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,row,k;
	char ch;
	clrscr();
	printf("\nenter the number of rows");
	scanf("%d",&row);
       /*	printf("\nenter the char you want to print");
	scanf(" %c",&ch); */
	for(k=1;k<=5;k++){
		for(i=1;i<=row;i++){
			for(j=1;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
	getch();
}