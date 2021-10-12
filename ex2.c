/*ex2:
How si(swap in) and so(swap out) change their values?

After 3-4 allocation and filling the memory 
the value of so beggins to change significantly it means that the size 
of RAM is not enough and the virtual memory is allocated
After some time si increases it means that the RAM becomes free and the data
transfers from virtual memory to main physical memory

*/

/*ex3:
After this command we can see that we have small number of running processes(1),
big number of sleeping processes (182) and even bigger number of threads (1034).
It happens, because processes have multithreading structure.

*/

#include <string.h>
#include <unistd.h>
#include <memory.h>

int main(){
	int* ptr;
	int size = 100*1024*1024;

	for(int i = 0; i < 10; i++){
		ptr = malloc(size);
		memset(ptr, 0 , size);
		sleep(1);
		printf("In process %d\n", i);
	}
}
