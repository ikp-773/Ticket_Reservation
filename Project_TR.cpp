#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main_screen();
int snd_screen(int);
int spacing(int);
int ticket_booking();
int ticket_cancelation();
int thankyou();
int main(){
	int i;
	main_screen();
	spacing(2);
	printf("Choose Option (1/2/3/4/5) : ");
	scanf("%d", &i);
	snd_screen(i);
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
	printf("--> Train Database");
	spacing(2);
	printf("--> Help");
	spacing(2);
	printf("--> Exit");
	return 0;	
}
int snd_screen(int input){
	switch(input){
		case 1: for(int i=0;i<=5;i++)
					printf("\t    ");
				printf("Your Choice --> ");
				printf("%d",input);
				sleep(1.5);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(1.5);
				system("cls");
				ticket_booking();
				break;
		case 2: for(int i=0;i<=5;i++)
					printf("\t    ");
				printf("Your Choice --> ");
				printf("%d",input);
				sleep(1.5);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(1.5);
				system("cls");
				ticket_cancelation();
				break;
		case 3: for(int i=0;i<=5;i++)
					printf("\t    ");
				printf("Your Choice --> ");
				printf("%d",input);
				sleep(1.5);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(1.5);
				system("cls");
				break;
		case 4: for(int i=0;i<=5;i++)
					printf("\t    ");
				printf("Your Choice --> ");
				printf("%d",input);
				sleep(1.5);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(1.5);
				system("cls");
				break;
		case 5: for(int i=0;i<=5;i++)
					printf("\t    ");
				printf("Your Choice --> ");
				printf("%d",input);
				sleep(1.5);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(1.5);
				system("cls");
				thankyou();
				break;
		default:printf("\n");
				for(int i=0;i<=5;i++)
					printf("\t   "); 
				printf("------INVALID INPUT-------");
				sleep(1.5);
	}
}
int spacing(int value){
	int i;
    switch(value){
		case 1: for(i=0;i<3;i++)
					printf("\n");
				for(i=0;i<5;i++)	
					printf("\t");
				for(i=0;i<=32;i++)
					printf("*");
		case 2: for(i=0;i<2;i++)
					printf("\n");
				for(i=0;i<5;i++)
					printf("\t");
	}
}
int ticket_booking(){
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
	return 0;
}
int ticket_cancelation(){
	spacing(1);
	spacing(2);
	printf("\t\tTicket Cancellation");
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
	return 0;
}
int thankyou(){
	spacing(1);
	spacing(2);
	printf("\t\t  Thank You!");
	spacing(2);
	printf("\t\t  Visit Again");
	spacing(1);
	exit(0);
}

