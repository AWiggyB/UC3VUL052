# If you are running a 64-bit system, you must
# sudo apt install gcc-multilib (~400MB)
# otherwise compilation will fail.

CC=gcc
ASMFLAGS= -m32 -S
CFLAGS=

all:
	$(CC) $(CFLAGS) -o ibreak.bin \
			../../UC3VUL052_nonpublic/ibreak.c

clean:
	rm ibreak.bin
