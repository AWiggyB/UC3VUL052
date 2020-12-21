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

	readelf --syms helloworld.bin > helloworld.txt
	readelf --syms helloworld_newfunc.bin > helloworld_newfunc.txt
	diff helloworld.txt helloworld_newfunc.txt > helloworld_newfunc.diff


clean:
	rm helloworld.bin
	rm helloworld.txt
	rm helloworld_newfunc.txt
	rm helloworld_newfunc.diff
