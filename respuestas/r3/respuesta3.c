#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


int main (int argc, char** argv)
{
	pid_t pid;
	pid = fork();
	if(pid != 0)
	{
		sleep(2);//poner a dormir el padre para evaluar que primeramente sera el padre
		printf("Soy el padre mi id es %d y el de mi hijo es %d \n",getpid(),pid);
	}
	else
	{
		printf("Id padre es: %d \n",getppid());
		waitpid(getppid(),NULL,0);
		printf("Soy el hijo con id %d y mi variable pid es %d \n", getpid(),pid);
	}
	return 0;
}
