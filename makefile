compile: clean
	gcc src/*.c -o build/main 

run: compile
	./build/main
	
clean:
	rm -rf /build/main