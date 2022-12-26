#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd1[2], fd2[2];
    pid_t id;

    unsigned int nbytes_read, nbytes_write;
    char read_msg1[50000000], read_msg2[5000000];

    pipe(fd1);				// creating pipe
    pipe(fd2);				// creating pipe

    id = fork();			// creating child process using fork

	if(id == 0)
	{
		close(fd[1]);
		close(fd[0]);
		
		nbytes_read = read(fd[0],execl("/usr/include/stdio.h","","-al",NULL) ,sizeof());
		
		nbytes_write = write(fd[1], read_msg1[50000000],sizeof(read_msg1[50000000]));
		
	}
	
	else
	{
		close(fd[0]);
		close(fd[1]);
		
		nbytes_write = write(fd[1], , sizeof());
		
		nbytes_read = read(fd[0], ,sizeof());
		
		printf("Data received: %d",);
	}
    
}
