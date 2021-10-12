#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <memory.h>
#include <sys/resource.h>

int main(){
        int* ptr;
        int size = 10*1024*1024;

        for(int i = 0; i < 10; i++){
                ptr = malloc(size);
                memset(ptr, 0 , size);
		struct rusage u;
                sleep(1);
                printf("Memory usage %d", getrusage(RUSAGE_SELF, &u.ru_maxrss));
		free(ptr);
        }
}
