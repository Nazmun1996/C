/* CSE 323 */
/* This Code calls the fork function and Prints the Process IDs as output */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid1, pid2, pid3;
    pid1=0, pid2=0, pid3=0;
    pid1= fork(); /* A */
    
	if(pid1 == 0){
        /* This is child A */
        pid2=fork(); /* B */
        pid3=fork(); /* C */
	printf("pid of 1 %d\n", pid1);
	printf("pid of 2 %d\n", pid2);
	printf("pid of 3 %d\n", pid3);
        }
 
	if(pid3==0) {
            /* This is child D forked from parent A */
        pid2=fork(); /* D */
	printf("pid of 1 %d\n", pid1);
	printf("pid of 2 %d\n", pid2);
	printf("pid of 3 %d\n", pid3);
        }

	else {
        /* This is parent A */
        /* Child B and C will never reach this code */
        pid3=fork(); /* E */
	printf("pid of 1 %d\n", pid1);
	printf("pid of 2 %d\n", pid2);
	printf("pid of 3 %d\n", pid3);
	
        
    }

	
    return 0;
}
