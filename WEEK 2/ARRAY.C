#include<stdio.h>
#include<conio.h>
#define SIZE 5
#define SORTING 5
void main(){
	int a[SIZE],b[SIZE],ans[SIZE],c[SIZE][SIZE],d[SIZE][SIZE],ans1[SIZE][SIZE]={0},choice,choiceSD,choiceMD;
	int i,j,k,t[SIZE],exchange,temp,count;
	scan:
	clrscr();
	for(i=0;i<SIZE;i++){
		printf("\n Enter the value of array a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE;i++){
		printf("\n Enter the value of array b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("\n enter the value of c[%d][%d]",i,j);
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("\n enter the value of d[%d][%d]",i,j);
			scanf("%d",&d[i][j]);
		}
	}
	printf("\n the single dimension array is\n");
	for(i=0;i<SIZE;i++){
		printf("\n Enter the value of array a[%d]",i);
		scanf("%d\t",&a[i]);
	}
	printf("\n the single dimension array is\n");
	for(i=0;i<SIZE;i++){
		printf("\n Enter the value of array b[%d]",i);
		scanf("%d\t",&b[i]);
	}
	printf("\n the 2d dimension array is\n");
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("\n enter the value of c[%d][%d]",i,j);
			scanf("%d",&c[i][j]);

		}
	}
	printf("\n the 2d dimension array is\n");
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("\n enter the value of d[%d][%d]",i,j);
			scanf("%d",&d[i][j]);

		}
	}
	for(;;){
		printf("\n1----Single dimension");
		printf("\n2----2d dimension");
		printf("\n3----Scan the array again");
		printf("\n4----exit");
		printf("\n1----Enter the choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:	printf("\n1----Addition");
					printf("\n2---subtraction");
					printf("\n3---multiplication");
					printf("\n4----division");
					printf("\n5----sorting");
					printf("\n6----searching");
					printf("\n----Enter the choice");
					scanf("%d",&choiceSD);
					switch(choiceSD){
						case 1:	for(i=0;i<SIZE;i++){
									ans[i]=a[i]+b[i];
								}
								for(i=0;i<SIZE;i++){
									printf("\n%d + %d = %d",a[i],b[i],ans[i]);
								}
								break;
						case 2:	for(i=0;i<SIZE;i++){
									ans[i]=a[i]-b[i];
								}
								for(i=0;i<SIZE;i++){
									printf("\n%d - %d = %d",a[i],b[i],ans[i]);
								}
								break;
						case 3:	for(i=0;i<SIZE;i++){
									ans[i]=a[i]*b[i];
								}
								for(i=0;i<SIZE;i++){
									printf("\n%d * %d = %d",a[i],b[i],ans[i]);
								}
								break;
						case 4:	for(i=0;i<SIZE;i++){
									ans[i]=a[i]/b[i];
								}
								for(i=0;i<SIZE;i++){
									printf("\n%d / %d = %d",a[i],b[i],ans[i]);
								}
								break;
						case SORTING:for (i = 0; i < SIZE; ++i){
										for (j = i + 1; j < SIZE; ++j){
											if (a[i] > a[j]){
												temp = a[i];
												a[i] = a[j];
												a[j] = temp;
											}
										}
									}
									printf("The numbers in ascending order is:");
									for (i = 0; i < SIZE; ++i){
										printf("\t%d", a[i]);
									}
								break;
						case 6:	printf("searching");
								break;
					}
					break;
			case 2:	printf("\n1----Addition");
					printf("\n2---subtraction");
					printf("\n3---multiplication");
					printf("\n4----division");
					printf("\n5----sorting");
					printf("\n6----searching");
					printf("\n----Enter the choice");
					scanf("%d",&choiceMD);
					switch(choiceMD){
						case 1:for(i=0;i<SIZE;i++){
									for(j=0;j<SIZE;j++){
										ans1[i][j]=c[i][j]+d[i][j];
									}
								}
								for(i=0;i<SIZE;i++){
									for(j=0;j<SIZE;j++){
										printf("\n%d + %d =%d",c[i][j],d[i][j],ans1[i][j]);
									}
								}
								break;
						case 2:for(i=0;i<SIZE;i++){
									for(j=0;j<SIZE;j++){
										ans1[i][j]=c[i][j]-d[i][j];
									}
								}
								for(i=0;i<SIZE;i++){
									for(j=0;j<SIZE;j++){
										printf("\n%d - %d =%d",c[i][j],d[i][j],ans1[i][j]);
									}
								}
								break;
						case 3: printf("\matrix multiplication");
								break;
						case 4:for(i=0;i<SIZE;i++){
									for(j=0;j<SIZE;j++){
										ans1[i][j]=c[i][j]/d[i][j];
									}
								}
								for(i=0;i<SIZE;i++){
									for(j=0;j<SIZE;j++){
										printf("\n%d / %d =%d",c[i][j],d[i][j],ans1[i][j]);
									}
								}
								break;
						case SORTING:	clrscr();
										k=0;
										printf("\n The unsorted array is \n");
										for(i=0;i<2;i++){
											for(j=0;j<2;j++){
												printf("%d\t",c[i][j]);
											}
											printf("\n");
										}
										for(i=0;i<2;i++){
											for(j=0;j<2;j++){
												t[k]=c[i][j];
												k++;
											}
										}
										for(i=0;i<4 && exchange==1;i++){
											exchange=0;
											for(j=0;j<3;j++){
												if(t[j]>t[j+1]){
													exchange=1;
													temp=t[j];
													t[j]=t[j+1];
													t[j+1]=temp;
												}
												count++;
											}
										}
										k=0;
										for(i=0;i<2;i++){
											for(j=0;j<2;j++){
												c[i][j]=t[k];
												k++;
											}
										}
										printf("\n The sorted array is\n");
										for(i=0;i<2;i++){
											for(j=0;j<2;j++){
												printf("%d\t",c[i][j]);
											}
											printf("\n");
										}
										getch();
									
								break;
						case 6: printf("\n searching");
					}
					break;
			case 3:goto scan;
			case 4:exit(0);
		}
		getch();
	}
}