# Operating System Project

## Nachos 4.0
The nachos were built successfully on Arch Linux x86_64 6.5.6 64-bit.

### Build
```
cd Nachos/nachos-4.0/code
make
```

## Check if the build success
```
cd userprog
$ ./nachos -e ../test/test1
Total threads number is 1
Thread ../test/test1 is executing.
Print integer:9
Print integer:8
Print integer:7
Print integer:6
return value:0
No threads ready or runnable, and no pending interrupts.
Assuming the program completed.
Machine halting!

Ticks: total 200, idle 66, system 40, user 94
Disk I/O: reads 0, writes 0
Console I/O: reads 0, writes 0
Paging: faults 0
Network I/O: packets received 0, sent 0
```
