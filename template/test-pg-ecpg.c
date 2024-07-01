/* Processed by ecpg (17beta2GNU COBOL support) */
/* These include files are added by the preprocessor */
#include <ecpglib.h>
#include <ecpgerrno.h>
#include <sqlca.h>
/* End of automatic include section */

#line 1 "test-pg-ecpg.cpg"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <strings.h>
int main (int argc, char **argv, char **envp) {
	{ ECPGconnect(__LINE__, 0, "dbname" , "bubba" , NULL , NULL, 0); }
#line 6 "test-pg-ecpg.cpg"

	return 0;
}

