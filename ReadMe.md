# Modified Linux Scheduler
Modifying the Linux scheduler to reduce the chances that the process would be selected for being dispatched and implementing a system call to delay selection of the said process by adjusting its vruntime, i.e. adding the delay time that was input by the user in the system call.
<br>
## Changes in the Linux Kernel
* Added an extra delay parameter inside **sched_entity** in **sched.h**
* Initialized it in **core.c**
* Added this delay to vruntime in **fair.c**
* Creating a syscall in **sys.c**
* Adding this syscall to the syscall table: **syscall_64.tbl**
<br>
## Testing <br>
For testing out the system call after compiling the kernel, run

    make

and then run

    ./t & ./t2

