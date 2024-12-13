start: main.c server_conti.c server_conti.h
	gcc -o start main.c server_conti.c

clean:
	rm -f start
