/* Write a C program to create a new process using Fork Operation.Make the parent Processto wait until child process Terminates  .Once the child Terminates collect exit status and print the exit status of the child in the parent process using WEXITSTATUS macro. */


#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	int fd, exitstatus;
	int exitval = 10;
	fd = open(argv[1], O_WRONLY| O_CREAT| O_TRUNC, 0664);
	write(fd,"Original Process writes\n", 24);
	switch(fork())
	{
		case 0: write(fd, "child writes\n", 13);
			close(fd);
			printf("CHILD: Terminating with exit status value %d\n", exitval);
			exit(exitval);
		default:wait(&exitstatus);
			printf("PARENT: Child terminated with exit value %d\n", WEXITSTATUS(exitstatus));
			write(fd, "Parent writes\n", 14);
			exit(20);
	}
}
