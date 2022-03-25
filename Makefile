INC := includes

BUILD := $(shell mkdir build)

B_DIR := build

STACK := stack

LIST := list

ROOT := $(shell pwd)




stack : main
	cd ${B_DIR};gcc -Wall -I${ROOT}/${INC} -c ${ROOT}/${STACK}/stack.c	


main : main.c
	cd ${B_DIR};gcc -Wall -I${ROOT}/${INC} -c ${ROOT}/main.c 


list : main
	cd ${B_DIR};gcc -Wall -I${ROOT}/${INC} -c ${ROOT}/${LIST}/list.c	

all: main stack list
	cd ${B_DIR};gcc -Wall *.o -o myApp

clean:
	rm -rf build
