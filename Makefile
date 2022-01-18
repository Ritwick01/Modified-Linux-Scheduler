all: test test2

test: test.c
    gcc test.c -o t 

test2: test2.c
    gcc test2.c -o t2 