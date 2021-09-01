#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/wait.h>

int main (){
	
	char path[255], arg[255];

	while (scanf(" %s %s", path, arg) != EOF) {
		printf("path: %s e arg: %s\n", path, arg);
	}

	return 0;
}
