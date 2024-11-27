#ifndef _SETTINGS_H_
#define _SETTINGS_H_


// settings for interprocess communications
// (note: be sure that MQ_MAX_MESSAGES <= /proc/sys/fs/mqueue/msg_max (= 10 on most systems))
#define N_SERV1    	 4 // ** number of workers for service 1
#define N_SERV2    	 3 // ** number of workers for service 2
#define MQ_MAX_MESSAGES 	 10 // ** number of messages that fit into the queue


#endif

