build:
	gcc -Wall -o exec src/*.c

run:
	./exec

clean:
	rm exec
