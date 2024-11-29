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

#ifndef MESSAGES_H
#define MESSAGES_H

// define the data structures for your messages here
typedef struct
{
    // a data structure with 3 members
    int                    job;
    int                    service;
    int                    data;
} MQ_REQUEST_MESSAGE;

typedef struct
{
    // a data structure with 3 members
    int                    job;
    int                    data;
    int                    service;
} MQ_RESPONSE_MESSAGE;



#endif
