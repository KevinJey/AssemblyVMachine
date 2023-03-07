#include <iostream>
#include <pthread.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

// extern void  testcpp();

void * thread_func(void *arg){
        cout << "thread_func" << endl;

        pthread_exit(NULL);
}

int main(){
        cout << "main" << endl;
        // testcpp();

        pthread_t m_threadID;
        pthread_create(&m_threadID,NULL,thread_func,NULL);
        sleep(5);
        pthread_join(m_threadID,NULL);

        return 0;
}