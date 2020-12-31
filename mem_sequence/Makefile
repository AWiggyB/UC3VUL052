# If you are running a 64-bit system, you must
# sudo apt install gcc-multilib (~400MB)
# otherwise compilation will fail.

CC=gcc
ASMFLAGS= -m32 -S
CFLAGS=

all:
	$(CC) $(CFLAGS) -o mem_sequence.bin mem_sequence.c

clean:
	rm mem_sequence.bin
