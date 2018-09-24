main.out:main.o doctor.o patient.o
	gcc main.o doctor.o patient.o

main.o: main.c
	gcc -c -Wall -Werror -ansi main.c

doctor.o: doctor.c doctor.h
	gcc -c -Wall -Werror -ansi doctor.c

patient.o: patient.c patient.h
	gcc -c -Wall -Werror -ansi patient.c

clean:
	rm -f *.out *.o