#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<omp.h>
#include<unistd.h>
#include<linux/kernel.h>
#include<sys/syscall.h>
#include<sys/time.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<linux/sched.h>
#include<sys/resource.h>

int main() {
    struct timespec t;
    double time1 = omp_get_wtime();
    int res = syscall(448, getpid(), 100);
    for(long i=0; i<1000000000; ++i);
    double time2 = omp_get_wtime() - time1;
    sched_rr_get_interval(getpid(), &t);
    printf("\n");
    printf("Process finished executing: %lf", time2);

    return 0;
}