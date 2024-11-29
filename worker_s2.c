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
#include "service2.h"
// ** cannot include request.h or request.c if router dealer includes it

static void rsleep (int t);

char* name = "NO_NAME_DEFINED";
mqd_t dealer2worker;
mqd_t worker2dealer;

//  ** receive the name of the Rsp and S2 message queue as an (command line?) argument when created by router dealer
int main (int argc, char * argv[])
{
    printf("Printing from the worker 2\n");
    // TODO:
    // (see message_queue_test() in interprocess_basic.c)
    //  ** once started: 
    //  * open the two message queues (whose names are provided in the received arguments)
    //  * repeatedly: **check if there is a task
    //      - read from the S2 message queue the new job to do **constantly
    //      - wait a random amount of time (e.g. rsleep(10000);)
    //      ** when receiving the request
    //      - do the job **call function service(...) defined in service2.h and service2.c
    //      ** create new message with request ID and result of service(...)
    //      - write the results to the Rsp message queue
    //    until there are no more tasks to do
    //  * close the message queues

    return(0);
}

/*
 * rsleep(int t)
 *
 * The calling thread will be suspended for a random amount of time
 * between 0 and t microseconds
 * At the first call, the random generator is seeded with the current time
 */
static void rsleep (int t)
{
    static bool first_call = true;
    
    if (first_call == true)
    {
        srandom (time (NULL) % getpid ());
        first_call = false;
    }
    usleep (random() % t);
}
