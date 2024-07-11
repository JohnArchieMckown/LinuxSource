#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define xstr(s) str(s)
#define str(s) #s
// IMO, I don't really like using xstr, but I copied it from the manual.
const char version[]="version:" xstr(__VERSION__) "\n";
const char stdc_version[]="stdVersion:" xstr(__STDC_VERSION__) "\n";

int main(int argc, char *argv[], char *envp[]) {
	int envp_count=0;
	char **envp_=envp;
    const char is[] = "is";
    const char are[] = "are";

    printf("Environment variables follow.\n");
	while(*envp_) {
		envp_count++;
		printf("%s\n",*envp_++);
	}
	printf("\nThere %s %d environment variable%s\n",(1==envp_count)?is:are,envp_count,(1==envp_count)?"":"s");
	printf("There %s %d argument%s\n",(1==argc)?is:are,argc,(1==argc)?"":"s");
	for (int i=0; i<argc; i++) {
		printf("Argument %d is %lu bytes:%s\n",i,strlen(argv[i]), argv[i]);
	}
}

