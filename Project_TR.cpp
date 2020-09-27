// Last Updated : 27-09-20 13:53
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
using namespace std;
int main_screen();//Prototype for Main Screen
int snd_screen(int);//Prototype for Input Screen
int input_fn(int);//Prototype for Input Function
int spacing(int);//Prototype for Spacing Function
int ticket_booking();//Prototype fot Booking Ticket
int ticket_cancelation();//Prototype for Cancelling Ticket
int database();
int help();
int thankyou();//Prototype for ThankYou Screen
int i;//Loop Variable
int main(){
	main_screen();
  	return 0;	
}
int main_screen(){
	spacing(1);
	spacing(2);
	printf("\tTicket Reservation\n");
	spacing(1);
	spacing(2);
	printf("--> Book Ticket");
	spacing(2);
	printf("--> Cancel Ticket");
	spacing(2);
	printf("--> Database");
	spacing(2);
	printf("--> Help");
	spacing(2);
	printf("--> Exit");
	spacing(2);
	printf("Choose Option (1/2/3/4/5) : ");
	scanf("%d", &i);
	snd_screen(i);
	return 0;	
}
int snd_screen(int input){
	switch(input){
		case 1: input_fn(input);
				ticket_booking();
				break;
		case 2: input_fn(input);
				ticket_cancelation();
				break;
		case 3: input_fn(input);
				database();
				break;
		case 4: input_fn(input);
				help();
				break;
		case 5: input_fn(input);
				thankyou();
				break;
		default:printf("\n");
				for(i=0;i<=5;i++)
					printf("\t   "); 
				printf("------INVALID INPUT-------");
				sleep(1.5);
	}
	return 0;
}
int spacing(int value){
    switch(value){
		case 1: for(i=0;i<3;i++)//Heading Spacing
					printf("\n");
				for(i=0;i<5;i++)	
					printf("\t");
				for(i=0;i<=32;i++)
					printf("*");
		case 2: for(i=0;i<2;i++)//Paragraph Spacing
					printf("\n");
				for(i=0;i<5;i++)
					printf("\t");
	return 0;
	}
}
int input_fn(int input_value){//Function for showing input
	for(i=0;i<=5;i++)
		printf("\t    ");
	printf("Your Choice --> ");
	printf("%d",input_value);
	sleep(1.5);
	system("cls");
	for(i=0;i<10;i++)
		printf("\n\t\t\t\t   ");
	printf("--------------REDIRECTING---------------");
	sleep(1.5);
	system("cls");
}
int ticket_booking(){//Fuction for Ticket Booking Screen
	spacing(1);
	spacing(2);
	printf("\t  Ticket Booking\n");
	spacing(1);
	spacing(2);
	printf("--> Book Ticket");
	spacing(2);
	printf("--> Review Ticket");
	spacing(2);
	printf("--> Ticket Chart");
	spacing(2);
	printf("--> Go Back");
	spacing(2);
	printf("--> Exit");
	spacing(2);
	printf("Choose Option (1/2/3/4/5) : ");
	scanf("%d", &i);
	switch(i){
		case 1: input_fn(i);
				break;
		case 2: input_fn(i);
				break;
		case 3: input_fn(i);
				break;
		case 4: input_fn(i);
				main_screen();
				break;
		case 5: input_fn(i);
				thankyou();
				break;
		default:printf("\n");
				for(i=0;i<=5;i++)
					printf("\t   "); 
				printf("------INVALID INPUT-------");
				sleep(2);
				system("cls");
				ticket_booking();
	}
	return 0;
}
int ticket_cancelation(){//Fuction for Ticket Cancellation Screen
	spacing(1);
	spacing(2);
	printf("\tTicket Cancellation\n");
	spacing(1);
	spacing(2);
	printf("--> Cancel Ticket");
	spacing(2);
	printf("--> Review Ticket");
	spacing(2);
	printf("--> Ticket Chart");
	spacing(2);
	printf("--> Go Back");
	spacing(2);
	printf("--> Exit");
	spacing(2);
	printf("Choose Option (1/2/3/4/5) : ");
	scanf("%d", &i);
	switch(i){
		case 1: input_fn(i);
				break;
		case 2: input_fn(i);
				break;
		case 3: input_fn(i);
				break;
		case 4: input_fn(i);
				main_screen();
				break;
		case 5: input_fn(i);
				thankyou();
				break;
		default:printf("\n");
				for(i=0;i<=5;i++)
					printf("\t   "); 
				printf("------INVALID INPUT-------");
				sleep(2);
				system("cls");
				ticket_cancelation();
	}
	return 0;
}
int database(){
	spacing(1);
	spacing(2);
	printf("\tDatabase\n");
	spacing(1);
	spacing(2);
	printf("--> User Database");
	spacing(2);
	printf("--> Admin Databse");
	spacing(2);
	printf("--> Travel Database");
	spacing(2);
	printf("--> Go Back");
	spacing(2);
	printf("--> Exit");
	spacing(2);
	printf("Choose Option (1/2/3/4/5) : ");
	scanf("%d", &i);
	switch(i){
		case 1: input_fn(i);
				break;
		case 2: input_fn(i);
				break;
		case 3: input_fn(i);
				break;
		case 4: input_fn(i);
				main_screen();
				break;
		case 5: input_fn(i);
				thankyou();
				break;
		default:printf("\n");
				for(i=0;i<=5;i++)
					printf("\t   "); 
				printf("------INVALID INPUT-------");
				sleep(2);
				system("cls");
				database();
	}
	return 0;
}
int help(){
	spacing(1);
	spacing(2);
	printf("\t     Help\n");
	spacing(1);
	spacing(2);
	printf("Press Enter to Go Back.....");
	getch();
	system("cls");
	main_screen();
}
int thankyou(){//Function for ThankYou Screen
	spacing(1);
	spacing(2);
	printf("\t   Thank You!");
	spacing(2);
	printf("\t   Visit Again\n");
	spacing(1);
	exit(0);
}

