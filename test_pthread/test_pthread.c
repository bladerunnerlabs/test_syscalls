#include <stdio.h>
#include <pthread.h>

void * test_thread(void * message)
{
	printf("We are in thread\n");

	return NULL;
}

int main()
{
	pthread_t thread;

	printf ("Test pthread.\n");

	if(pthread_create(&thread, NULL, test_thread, NULL) != 0) {
		printf("pthread_create failed!\n");
		return -1;
	}

	pthread_join(thread, NULL);

	return 0;
}
