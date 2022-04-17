#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *hello()
{
    printf("Hello\n");
    sleep(3);
    printf("Goodbye\n");
}

int main(int argc, char* argv[])
{
    pthread_t t1, t2;
    if(pthread_create(&t1, NULL, &hello, NULL) != 0)
    {
        printf("Error creating thread\n");
        return 1;
    }
    if(pthread_create(&t2, NULL, &hello, NULL) != 0)
    {
        printf("Error creating thread\n");
        return 1;
    }
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
}