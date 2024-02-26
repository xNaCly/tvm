FLAGS := -fdiagnostics-color=always \
		 -Wall \
		 -g3 \
		 -Wpedantic \
		 -std=c11 \
		 -Wextra \
		 -Wshadow \
		 -Wundef \
		 -fno-common

source := $(shell find ./src/ -name "*.c")

run: build
	./tvm

build: 
	gcc $(FLAGS) $(source) tvm.c -o tvm

clean:
	rm -fr tvm
