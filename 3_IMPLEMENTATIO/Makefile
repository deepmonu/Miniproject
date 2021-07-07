#Target_name : Dependencies
#<TAB>Command
SRC= src/main.c\
src/battel.c\

OBJ = main.o\
battel.o

INC= inc
#CXX = cpp
#CC =  gcc
#AS =  as
#LD =  ld

CFLAGS = -I$(INC)
#-DMACRO=value
#-g
#-v

#ASFLAGS
#LDFLAGS = -Lpath_lib -lname

all.out : $(OBJ)
	gcc $^ -I$(INC) -o $@

%.o:src/%.c
	gcc $^ -I$(INC) -c

run: target
	./all.out

clean:
	rm all.out *.o src/*.o
