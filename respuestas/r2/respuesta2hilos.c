#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include <unistd.h>

volatile float v; 

void *hilo1(void *arg){
	float z = 25;
	float y = 350;
	v = z/y;
	return NULL;
}
void *hilo2(void *arg){
	float x = 1250;
	sleep(2);

	v = v*x;
	return NULL;
}


int main(int argc, char *argv[]) {
    pthread_t p1, p2;
    Pthread_create(&p1, NULL, hilo1, NULL);
    Pthread_create(&p2, NULL, hilo2, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    printf("El valor de v es: %f\n", v);
    return 0;
}





