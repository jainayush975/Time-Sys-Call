#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{

	int pid;
	int final_status, wait_time, run_time;	
	pid = fork();
	if (pid == 0)
  	{	
  		exec(argv[1], argv);
    	printf(1, "exec for Command: %s failed\n", argv[1]);
    }
  	else
 	{
    	final_status = waitx(&wait_time, &run_time);
 	}  
 	printf(1, "Run Time = %d\nWait Time = %d \nExited with Status %d \n", run_time, wait_time, final_status); 
 	exit();
}
