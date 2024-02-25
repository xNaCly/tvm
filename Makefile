FLAGS := -fdiagnostics-color=always \
		 -Wall \
		 -Wpedantic \
		 -std=c11 \
		 -Wextra \
		 -Wshadow \
		 -Wundef \
		 -fno-common

source := $(shell find . -name "*.c")

run: build
	./tvm

build: 
	gcc $(FLAGS) $(source) -o tvm

clean:
	rm -fr tvm
