#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main_screen();
int snd_screen(int);
int ticket_booking();
int ticket_cancelation();
int main(){
	int i;
	main_screen();
	printf("\n\n\n\t\t\t\tChoose Option (1/2/3/4/5) : ");
	scanf("%d", &i);
	snd_screen(i);
  	return 0;	
}
int main_screen(){
	printf("\n\n\t\t\t\t\t*********************************");
	printf("\n\n\t\t\t\t\t\tTrain Reservation");
	printf("\n\n\t\t\t\t\t*********************************");
	printf("\n\n\n\t\t\t\t--> Book Ticket");
	printf("\n\n\t\t\t\t--> Cancel Ticket");
	printf("\n\n\t\t\t\t--> Train Database");
	printf("\n\n\t\t\t\t--> Help");
	printf("\n\n\t\t\t\t--> Exit");
	return 0;	
}
int snd_screen(int input){
	switch(input){
		case 1: for(int i=0;i<5;i++)
					printf("\t   ");
				printf(" Your Choice --> ");
				printf("%d",input);
				sleep(2);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(2);
				system("cls");
				ticket_booking();
				break;
		case 2: for(int i=0;i<5;i++)
					printf("\t   ");
				printf(" Your Choice --> ");
				printf("%d",input);
				sleep(2);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(2);
				system("cls");
				ticket_cancelation();
				break;
		case 3: for(int i=0;i<5;i++)
					printf("\t   ");
				printf(" Your Choice --> ");
				printf("%d",input);
				sleep(2);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(2);
				system("cls");
				break;
		case 4: for(int i=0;i<5;i++)
					printf("\t   ");
				printf(" Your Choice --> ");
				printf("%d",input);
				sleep(2);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(2);
				system("cls");
				break;
		case 5: for(int i=0;i<5;i++)
					printf("\t   ");
				printf(" Your Choice --> ");
				printf("%d",input);
				sleep(2);
				system("cls");
				for(int i=0;i<10;i++)
					printf("\n\t\t\t\t   ");
				printf("--------------REDIRECTING---------------");
				sleep(2);
				system("cls");
				break;
		default:printf("\n");
				for(int i=0;i<5;i++)
					printf("\t   "); 
				printf("------INVALID INPUT-------");
				sleep(2);
	}
}
int ticket_booking(){
	printf("\n\n\t\t\t\t\t*********************************");
	printf("\n\n\t\t\t\t\t\tTicket Booking");
	printf("\n\n\t\t\t\t\t*********************************");
	printf("\n\n\n\t\t\t\t--> Book Ticket");
	printf("\n\n\t\t\t\t--> Review Ticket");
	printf("\n\n\t\t\t\t--> Ticket Chart");
	printf("\n\n\t\t\t\t--> Go Back");
	printf("\n\n\t\t\t\t--> Exit");
	return 0;
}
int ticket_cancelation(){
	printf("\n\n\t\t\t\t\t*********************************");
	printf("\n\n\t\t\t\t\t\tTicket Cancellation");
	printf("\n\n\t\t\t\t\t*********************************");
	printf("\n\n\n\t\t\t\t--> Cancel Ticket");
	printf("\n\n\t\t\t\t--> Review Ticket");
	printf("\n\n\t\t\t\t--> Ticket Chart");
	printf("\n\n\t\t\t\t--> Go Back");
	printf("\n\n\t\t\t\t--> Exit");
	return 0;
}

