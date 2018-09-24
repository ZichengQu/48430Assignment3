#include "doctor.h"
#include<stdio.h>

int print_doctor_menu()
{
	int input;
	while(1)
	{
		printf("Good {morning/afternoon/evening}, Doctor {name}. Please selected an option: \n");
		printf("1. Add a patient record\n");
		printf("2. Modify a patient record\n");
		printf("3. Create a patient prescription\n");
		printf("4. View appointments\n");
		printf("5. Exit\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				add_patient_record();
				break;
			case 2:
				modify_patient_record();
				break;
			case 3:
				create_presciption();
				break;
			case 4:
				view_doctor_appointments();
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
void add_patient_record()
{
	printf("Add a patient\n");
}

void modify_patient_record()
{
	printf("modify a patient record\n");
}

void create_presciption()
{
	printf("Create a prescription\n");
}

void view_doctor_appointments()
{
	printf("View all appointments\n");
}