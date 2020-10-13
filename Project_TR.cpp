// Updated : 13-10-20 08:05
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<conio.h>
#include<ctype.h>
#include<fstream>
#include<string.h>
using namespace std;
int login_screen();//Prototype for Login Screen
int main_screen();//Prototype for Main Screen
int snd_screen(int);//Prototype for Input Screen
int input_fn(int);//Prototype for Input Function
int spacing(int);//Prototype for Spacing Function
int ticket_booking();//Prototype fot Booking Ticket
int ticket_cancelation();//Prototype for Cancelling Ticket
int database();//Prototype for Database Function
int help();//Prototype for Help Function
int thankyou();//Prototype for ThankYou Screen
int book_ticket();
int i;//Loop Variable
int main(){
	login_screen();
  	return 0;
}
class login{
	public : 	char username[20][10], password[20][10];
				int column_user, column=0,free_column_user;
				void Clear_Data(){	
					for(column_user=0;column_user<10;column_user++)
						{	strcpy(username[column_user],"NIL");
				  			strcpy(password[column_user],"NIL");
						}	
			 	}
				void New_User(){
					spacing(1);
					spacing(2);
					printf("\tSign Up\n");
					spacing(1);
					spacing(2);
					for (i=0;i<10;i++)
						{ if(strcmp(username[i],"NIL")==0)
							{   free_column_user=i;
								break;
							}
						}
				 	for(column=free_column_user;column<10;column++)
						{   spacing(2);
							cout<<"\tUsername:";
							gets(username[column]);
							spacing(2);
							cout<<"\tPassword:";
							gets(password[column]);
							spacing(2);
						}
			 		}	
}user_key;
int login_screen(){
	char username[20], password[20];
	fstream f1;
	spacing(1);
	spacing(2);
	printf("\tTIcket Reservation\n");
	spacing(1);
	spacing(2);
	printf("--> Sign In");
	spacing(2);
	printf("--> Sign Up");
	spacing(2);
	printf("Choose Option (1/2) : ");
	scanf("%d", &i);
	switch(i){
		case 1 : system("cls");
				 spacing(1);
				 spacing(2);
				 printf("\t      Login\n");
				 spacing(1);
				 spacing(2);
				 printf("--> Username : ");
				 cin>>username;
				 spacing(2);
				 printf("--> Password : ");
				 cin>>password;
				 getch();
				 break;
		case 2 : system("cls");
				 f1.open("User_Details.dat",ios::in|ios::out|ios::binary);
				 user_key.New_User();
				 f1.write((char *) & user_key,sizeof(user_key));
				 f1.close();
				 getch();			
	}
	system("cls");
	main_screen();
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
				sleep(2);
				system("cls");
				main_screen();
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
int input_fn(int input_value){//Function for showing Input
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
				book_ticket();
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
int database(){//Function for Storing All Details
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
int help(){//Function for providing Help
	spacing(1);
	spacing(2);
	printf("\t     Help\n");
	spacing(1);
	spacing(2);
	printf("Press Any Key to Go Back.....");
	getch();
	system("cls");
	main_screen();
}
int thankyou(){//Function for Thank You Screen
	spacing(1);
	spacing(2);
	printf("\t   Thank You!");
	spacing(2);
	printf("\t   Visit Again\n");
	spacing(1);
	sleep(1.5);
	system("cls");
	exit(0);
}
int book_ticket(){
	char ans, username[20];
	spacing(1);
	spacing(2);
}
