#include<cal.h>
void main(){
	int choice;
	int ans;
	float x,y,z;
	textbackground(BLUE);
	while(1){
		int a,b;
		clrscr();
		gotoxy(40,5);
		textcolor(YELLOW);
		cprintf("1--->Addition");
		gotoxy(40,6);
		cprintf("2--->SUB");
		gotoxy(40,7);
		cprintf("3--->mul");
		gotoxy(40,8);
		cprintf("4--->div");
		gotoxy(40,9);
		cprintf("5--->sqrt");
		gotoxy(40,10);
		cprintf("6--->ceil");
		gotoxy(40,11);
		cprintf("7--->floor");
		gotoxy(40,12);
		cprintf("8--->power");
		gotoxy(40,12);
		cprintf("9--->sin_p");
		gotoxy(40,14);
		cprintf("10--->EXIT");
		gotoxy(40,15);
		textcolor(CYAN);
		cprintf("enter the choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:	gotoxy(40,10);
					add();
					break;
			case 2:	ans=sub();
					gotoxy(40,14);
					printf("the subtract function has return %d value",ans);
					break;
			case 3:	ans = multi(a,b);
					gotoxy(40,16);
					printf("the multi %d",ans);
					break;
			case 4:	gotoxy(40,20);
					div(x,y);
					break;
			case 5:	gotoxy(40,21);
					sq();
					break;	
			case 6:	gotoxy(40,22);
					ceil_p();
					break;	
			case 7:	gotoxy(40,23);
					floor_p();
					break;
			case 8:	gotoxy(40,23);
					pow_p();
					break;
			case 9:	gotoxy(40,23);
					round_p();
					break;
			default:exit(0);		
		}
		getch();	
	}
}
