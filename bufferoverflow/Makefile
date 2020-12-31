# If you are running a 64-bit system, you must
# sudo apt install gcc-multilib (~400MB)
# otherwise compilation will fail.

CC=gcc
ASMFLAGS= -m32 -S
CFLAGS=

all:
	$(CC) $(ASMFLAGS) example1.c -o example1.s
	$(CC) $(ASMFLAGS) example2.c -o example2.s
	$(CC) $(CFLAGS) example2.c -o example2.bin
	$(CC) $(CFLAGS) example3.c -o example3.bin


clean:
	rm example1.s 
	rm example2.s 
	rm example2.bin
	rm example3.bin
