/* 
 * Operating Systems  (2INCO)  Practical Assignment
 * Interprocess Communication
 *
 * Lucia Bottlikova (1858947)
 * Laura Lesniak (1824473)
 * Briana Anamaria Isaila (1785923)
 *
 * Grading:
 * Your work will be evaluated based on the following criteria:
 * - Satisfaction of all the specifications
 * - Correctness of the program
 * - Coding style
 * - Report quality
 * - Deadlock analysis
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>    
#include <unistd.h>    // for execlp
#include <mqueue.h>    // for mq


#include "settings.h"  
#include "messages.h"

char client2dealer_name[30];
char dealer2worker1_name[30];
char dealer2worker2_name[30];
char worker2dealer_name[30];

int main (int argc, char * argv[])
{
  if (argc != 1)
  {
    fprintf (stderr, "%s: invalid arguments\n", argv[0]);
  }
  
  // TODO:
    //  ** see interprocesses basics to see how to make processes and deal with message queues
    //  * create the message queues (see message_queue_test() in interprocess_basic.c)
    //    ** create Req
    //    ** create S1
    //    ** create S2
    //    ** create Rsp
    //    ** check if the creation was succesful, if successful, continue
    //  * create the child processes (see process_test() and message_queue_test()):
    //    ** create one client process (give the name of the Req message queue as an argument)
    //    ** create x number of worker processes implementing service 1 where x is N_SERV1
    //    ** create x number of worker processes implementing service 2 where x is N_SERV2
    //    ** check if the creation was successful, if successful, start monitoring Req and Rsp queues
    //  * read requests from the Req queue and transfer them to the workers
    //    with the Sx queues
    //  * read answers from workers in the Rep queue and print them
    //  * wait until the client has been stopped (see process_test())
    //    ** constantly check if the client processes exist !! document this
    //    ** If it stops existing
    //      ** wait for all pending jobs to be finished and 
    //      ** complete the publication of all the results on the standard output
    //      ** terminate all worker processes !! also document this
    //      ** free the resources associated with all children processes 
    //  * clean up the message queues (see message_queue_test())
    //  ** complete execution =? did we close all channels? 

    // Important notice: make sure that the names of the message queues
    // contain your goup number (to ensure uniqueness during testing)
  
  return (0);
}
