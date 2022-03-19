INC := includes

BUILD := $(shell mkdir build)

B_DIR := build

STACK := stack

ROOT := $(shell pwd)




stack : main
	cd ${B_DIR};gcc -Wall -I${ROOT}/${INC} -c ${ROOT}/${STACK}/stack.c	


main : main.c
	cd ${B_DIR};gcc -Wall -I${ROOT}/${INC} -c ${ROOT}/main.c 



all: main stack
	cd ${B_DIR};gcc -Wall *.o -o myApp
