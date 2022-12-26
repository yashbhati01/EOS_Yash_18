#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<mqueue.h>

char buff[] = execl("/home/training/Desktop/Yash_18_EOS/Q2","","-al",NULL);
extern long double count = 0;
struct mq_attr msg_queue;

check_error(int a, char *err)                   // For checking errors
{
    if(a == -1)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }
}

int main()
{
    mqd_t mq_desc;
    int mq_rcv_err, mq_close_err;                // Creating variables

    msg_queue.mq_flags = 0;
    msg_queue.mq_msgsize = sizeof(buff);
    msg_queue.mq_maxmsg = 4;
    msg_queue.curmsg = 0;

    mq_desc = mq_open("/desd_mq", O_CREAT | O_RDWR, S_IRUSR | S_IWUSR, &msg_queue);     // To open 
    check_error(mq_desc,"Error: Cannot open\n");

    mq_rcv_err = mq_receive("/desd_mq",buff,sizeof(buffer),0);
    check_error(mq_rcv_err,"Error: Cannot receive\n");
    printf("The total counts of 's' is: %s",);

    mq_close_err = mq_close(mq_desc);
    check_error(mq_close_err,"Error: Cannot close\n");

    return 0;
}
