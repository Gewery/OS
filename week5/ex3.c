#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>


// THANKS TO GOOGLE


int itemCount = 0;
pthread_cond_t full, empty;

void* produce(void *arg) {
    while (1) {
        if (itemCount == 7) {
            printf("Producer sleeps\n");
            usleep(10000000);

        }
        itemCount++;
        printf("Item produced %d\n", itemCount);
        if (itemCount == 1) {
            printf("Wake up consumer\n");
            pthread_cond_signal(&full);
        }
    }

}

void* consume(void *arg){
    int item;
    while(1){
        if (itemCount==0){
            printf("Consumer sleeps\n");
            usleep(100000000);
        }
        itemCount--;
        printf("Item consumed %d\n", itemCount);
        if (itemCount==6)
            printf("Wake up producer\n");
            pthread_cond_signal(&empty);

    }
}

int main(){


    pthread_t producer, consumer;
    pthread_cond_init(&full, 0);
    pthread_cond_init(&empty, 0);



    pthread_create(&producer, NULL, produce, NULL);
    pthread_create(&consumer, NULL, consume, NULL);

    pthread_join(producer, 0);
    pthread_join(consumer, 0);

    pthread_cond_destroy(&full);
    pthread_cond_destroy(&empty);
}
