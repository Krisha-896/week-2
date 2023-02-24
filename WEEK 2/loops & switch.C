#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n,m,k,v;
	printf("for forloop press=>1,for while loop press=>2,for do..while loop press=>3 : \n");
	printf("enter number case no :");
	scanf("%d",&n);
	switch(n){
			case 1:	  
				printf("enter 1 for normal and 2 for reverse");
				scanf("%d",&v);
				printf("enter row number:");
				scanf("%d",&m);	
					switch(v){
						case 1:
						for(i=1;i<=m;i++){
							for(j=1;j<=i;j++)  
							{  
								printf("*");  
							}  
							printf("\n"); 
						}
						break;
						case 2:
						for(i=1;i<=m;i++)  
						{  
							for(j=i;j<=m;j++)  
								{  
									printf("*");  
								}
								printf("\n");  
						}  
						break;	
					}  
					break;			
		case 2:	
				printf("enter 1 for normal and 2 for reverse");
				scanf("%d",&v);
				printf("enter row number:");
				scanf("%d",&m);
				switch(v){
					case 1:
							i=1;
							while(i<=m){
								j=1;
								while(j<=i){
									printf("*");
									j++;
								}
								printf("\n");
								i++;
							}
							break;
						case 2:
							i=1;
							while(i<=m){
								j=i;
								while(j<=m){
									printf("*");
									j++;
								}
								printf("\n");
								i++;
							}
							break;	
				}
				break;
		case 3:	
				printf("enter 1 for normal and 2 for reverse");
				scanf("%d",&v);
				printf("enter row number:");
				scanf("%d",&m);
				switch(v){
					case 1:
							i=1;
							do{
								j=1;
								do{
									printf("*");
									j++;
								}while(j<=i);
								printf("\n");
								i++;
							}while(i<=m);
							break;
						case 2:
							i=1;
							do{
								j=i;
								do{
									printf("*");
									j++;
								}while(j<=m);
								printf("\n");
								i++;
							}while(i<=m);
							break;	
				}
				break;
		default:printf("not in range");
				break;
	}
	getch();
}


