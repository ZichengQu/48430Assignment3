#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#include"doctor.h"
#include"patient.h" 

void print_login();

int main(void)
{
	print_login();
	char username[10];
	while(strcmp(username, "doctor") && strcmp(username, "patient"))
	{
		scanf("%s", username);
		if(!strcmp(username, "doctor"))
		{
			printf("Login successful\n\n");
			print_doctor_menu();
		}
		else if(!strcmp(username, "patient"))
		{
			printf("Login successful\n\n");
			print_patient_menu();
		}
		else
		{
			printf("Invalid username\n");
			printf("Please enter your username: ");
		}
	} 
	return 1;
}


void print_login()
{
	printf("Welcome to the medical centre information system\n");
	printf("------------------------------------------------\n");
	printf("Please enter your username: ");
}