#include "patient.h"
#include<stdio.h>

int print_patient_menu()    /* Function definition */
{
	int input;
	while(1)
	{
		printf("Good {morning/afternoon/evening}, {name}.Please selected an option: \n");
		printf("1. Create an appointment\n");
		printf("2. View appointments\n");
		printf("3. Modify appoitments\n");
		printf("4. View prescriptions\n");
		printf("5. Exit\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				create_appointment();
				break;
			case 2:
				view_patient_appointments();
				break;
			case 3:
				modify_patient_appointments();
				break;
			case 4:
				view_prescriptions();
				break;
			case 5:
				return 0;
				break;
			default:
				printf("Invalid input\n");

		}
	}
	return 0;
}

void create_appointment()
{
	printf("Creates an appoitment\n");
}

void view_patient_appointments()
{
	printf("Views current appointments\n");
}

void modify_patient_appointments()
{
	printf("Modify current appointments\n");
}

void view_prescriptions()
{
	printf("View prescriptions\n");
}