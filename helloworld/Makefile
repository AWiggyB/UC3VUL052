# If you are running a 64-bit system, you must
# sudo apt install gcc-multilib (~400MB)
# otherwise compilation will fail.

CC=gcc
ASMFLAGS= -m32 -S
CFLAGS=

all:
	$(CC) $(CFLAGS) -o helloworld.bin helloworld.c
	$(CC) $(CFLAGS) -o helloworld_newfunc.bin \
			../../UC3VUL052_nonpublic/helloworld_newfunc.c
clean:
	rm helloworld.bin
	rm helloworld_newfunc.bin
