start: main.c server_conti.c server_conti.h
	gcc -o start main.c server_conti.c

zip: main.c server_conti.c server_conti.h
	zip SO_compito.zip main.c server_conti.c server_conti.h

clean:
	rm -f start
