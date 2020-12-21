# If you are running a 64-bit system, you must
# sudo apt install gcc-multilib (~400MB)
# otherwise compilation will fail.

CC=gcc
ASMFLAGS= -m32 -S
CFLAGS=

all:
	$(CC) $(ASMFLAGS) -o example1.s example1.c
	$(CC) $(ASMFLAGS) -o example2.s example2.c
	$(CC) $(CFLAGS) -o example2.bin example2.c

clean:
	rm example1.s example2.s example2.bin
