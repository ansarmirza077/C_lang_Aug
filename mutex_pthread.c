#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

//pthread_mutex_t lock;
int  n=26;
void *even()
{
	pthread_mutex_lock(&n);
	int i;
	for(i=0;i<26;i++)
	{
		if(i%2==0)
			printf("%d",i);

	}
	//pthread_exit(t1);
pthread_mutex_unlock(&n);
}

void *odd()
{
	pthread_mutex_lock(&n);
	int i;
	for(i=0;i<26;i++)
	{
		if(i%2!=0)
			printf("%d",i);
	}
	pthread_mutex_unlock(&n);
}

int main()
{
	pthread_mutex_init(&n,NULL);
	pthread_t t1,t2;

	pthread_create(&t1,NULL,even,NULL);
//	sleep(1);
	pthread_create(&t2,NULL,odd,NULL);
//	sleep(1);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

}
