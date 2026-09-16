/*
				Author: Aarav lakhatariya
				Date: 28 | 8 | 2026
				Objective: To input row and characer to make a triangle using loops

*/
#include<stdio.h>
#include<conio.h>
void main() {
	int choice,row,t,a,b,c,d,e,f;
	char ch;
	clrscr();
		printf("\n1---For Loop");
		printf("\n2---While Loop");
		printf("\n3---Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
			switch(choice){
				case 1: clrscr();
					printf("\n1---Stright Tringle");
					printf("\n2---Reverse Tringle");
					printf("\n3---Exit");
					printf("\nEnter your choice: ");
					scanf("%d",&choice);
						switch(choice){
							case 1:	clrscr();
								printf("\n1---Horizontal Triangle");
								printf("\n2---Vertical Triangle");
								printf("\n3---Exit");
								printf("\nEnter your choice: ");
								scanf("%d",&choice);
									switch(choice){
										case 1: clrscr();
											printf("\nEnter the number of triangles you want: ");
											scanf("%d",&t);
											printf("\nEnter the number of rows numbers you want: ");
											scanf("%d",&row);
											printf("\nEnter the character you want to print: ");
											scanf(" %c",&ch);
												for(a=1;a<=t;a++){
													for(b=1;b<=row;b++){
														for(c=1;c<=b;c++){
															printf(" %c",ch);
														}
														printf("\n");
													}
													printf("\n");
												}
										break;
										case 2: clrscr();
											printf("\nEnter the number of triangles you want: ");
											scanf("%d",&t);
											printf("\nEnter the number of rows numbers you want: ");
											scanf("%d",&row);
											printf("\nEnter the character you want to print: ");
											scanf(" %c",&ch);
												for(a=1;a<=t;a++){
													for(b=1;b<=row;b++){
														for(c=1;c<=a;c++){
															printf("*");
														}
														printf("\t");
													}
													printf("\n");
												}
											break;
							      }
							case 2: clrscr();
								printf("\n1---Stright Tringle");
								printf("\n2---Reverse Tringle");
								printf("\n3---Exit");
								printf("\nEnter your choice: ");
								scanf("%d",&choice);
								break;
							case 3: exit(0);
							break;
							default: printf("Invalid Choice!!!");
						}//end of for loop
					break;
				case 2: clrscr();
					printf("\n1---Stright Tringle");
					printf("\n2---Reverse Tringle");
					printf("\n3---Exit");
					printf("\nEnter your choice: ");
					scanf("%d",&choice);
						switch(choice){
							case 1:	clrscr();
								printf("\n1---Horizontal Triangle");
								printf("\n2---Vertical Triangle");
								printf("\n3---Exit");
								printf("\nEnter your choice: ");
								break;
							case 2:	clrscr();
								printf("\n1---Horizontal Triangle");
								printf("\n2---Vertical Triangle");
								printf("\n3---Exit");
								printf("\nEnter your choice: ");
								break;
							case 3: exit(0);
							break;
							default: printf("Invalid Choice!!!");
						}//end of while loop
					break;
				case 3: exit(0);
					break;
				default: printf("Invalid Choice!!!");
			}//end of choice

	getch();
}//end of main