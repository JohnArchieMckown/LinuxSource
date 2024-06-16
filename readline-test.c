#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <strings.h>
#include <readline/readline.h>
int main(int argc, char **argv, char **envp) {
	char *input=NULL;
	while(true) {
		input=readline(":");
		if (NULL == input) break;
		if (0 == strlen(input)) {
				printf("empty string\n");
				continue;
				}
		printf("Length: %zu Value:%s\n",strlen(input),input);
	}
}
