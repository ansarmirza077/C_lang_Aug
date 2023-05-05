//To print alternative A 0 B 1 C 2...
 #include<stdio.h>
 #include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

pthread_mutex_t  lock;
int a=65;
 void *alph(void *arg)
	 {
if(a>=65 && a<=91)
{
//pthread_mutex_lock(&lock);
		 int i;
		 for(i=0;i<26;i++)
			 {	pthread_mutex_lock(&lock);
				 printf("%c",a);
				 a++;
				 sleep(1);
pthread_mutex_unlock(&lock);
				 }
		 printf("\n");
//pthread_mutex_unlock(&lock);
//sleep(1);
pthread_exit(0);
	 }
}

void *num(void *arg)
{
if(  a<=123)
{
//pthread_mutex_lock(&lock);
	int i;
	for(i=0;i<26;i++)
	{
pthread_mutex_lock(&lock);
		printf("%c",a);
		a++;
		sleep(1);
pthread_mutex_unlock(&lock);
	}

	printf("\n");
//pthread_mutex_unlock(&lock);
//sleep(1);
pthread_exit(0);
}
}

int main()
{
	pthread_mutex_init(&lock,NULL);
	//int i;
	pthread_t t1;
	pthread_t t2;

	pthread_create(&t1,NULL,&alph,NULL);
	sleep(1);
	pthread_create(&t2,NULL,&num,NULL);
	sleep(1);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
pthread_mutex_destroy(&lock);
}
