#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[], char *envp[]) {
	int envp_count=0;
	char **envp_=envp;
	char is[]="is";
	char are[]="are";

	printf("Environment variables follow.\n");
	while(*envp_) {
		envp_count++;
		printf("%s\n",*envp_++);
	}
	printf("\nThere %s %d environment variable%s\n",(1==envp_count)?is:are,envp_count,(1==envp_count)?"":"s");
	printf("There %s %d argument%s\n",(1==argc)?is:are,argc,(1==argc)?"":"s");
	for (int i=0; i<argc; i++) {
		printf("Argument %d is %d bytes:%s\n",i,strlen(argv[i]), argv[i]);
	}
}
		
