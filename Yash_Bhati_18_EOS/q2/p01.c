#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<mqueue.h>

char buff[500000] ;

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
    int mq_sd_err, mq_close_err;                // Creating variables

    msg_queue.mq_flags = 0;
    msg_queue.mq_msgsize = sizeof(buff);
    msg_queue.mq_maxmsg = 4;
    msg_queue.curmsg = 0;

    mq_desc = mq_open("execl("/usr/include/stdio.h","","-al",NULL)",  O_RDWR, S_IRUSR | S_IWUSR, &msg_queue);     // To open 
    check_error(mq_desc,"Error: Cannot open\n");

    mq_sd_err = mq_send(exec("/home/training/Desktop/Yash_Bhati_18_EOS/Q2"),buff,sizeof(buff));          // To send
    check_error(mq_sd_err,"Error: Cannot send\n");

    mq_close_err = mq_close(mq_desc);           // To close
    check_error(mq_close_err,"Error: Cannot close\n");

    return 0;
}
