#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

char *const param_list[] = {"/usr/bin/vi", "1.txt", NULL};

int main()
{
//	fork();
	printf("execv exit code %d, exit code %d\n", execv("/usr/bin/vi", param_list), errno);
	return 0;
}
