#include <sys/types.h>
#include <unistd.h>

int main()
{
	fork();
	fork();
	fork();
	return 0;
}
