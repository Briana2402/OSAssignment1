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
#include <errno.h>      // for perror()
#include <unistd.h>     // for getpid()
#include <mqueue.h>     // for mq-stuff
#include <time.h>       // for time()

#include "messages.h"
#include "request.h"

static void rsleep (int t);

//  ** receive the name of the Req message queue as an (command line?) argument when created by router dealer
int main (int argc, char * argv[])
{
    printf("Printing from the client\n");
    // TODO:
    // (see message_queue_test() in interprocess_basic.c)
    //  ** once started: 
    //  * open the message (Req) queue (whose name is provided in the arguments)
    //  ** start creating job requests by calling function getNextRequest(...) defined in request.h and request.c
    //  ** check the output (job ID, data to be treated, service ID)
    
    Request  req; 
    mqd_t               mq_fd_request;
    struct mq_attr      attr;
    mq_fd_request = mq_open (argv[0], O_WRONLY | O_CREAT | O_EXCL, 0600, &attr);
    while (getNextRequest == 0)
    {   
        mq_send (mq_fd_request, (char *) &req, sizeof (req), 0);
    }
    
    
    //  * repeatingly:
    //      - get the next job request ** when no job request, return error code NO_REQ and release all resources and complete execution
    //      ** create a message with required information
    //      ** note that every request will have to be eventually processed
    //      - send the request to the Req message queue
    //    until there are no more requests to send
    //  * close the message queue
    
    return (0);
}
