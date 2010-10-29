CFLAGS:=-Wall -g -std=c99 -pedantic
CFLAGS:=-Wall -g

SOURCES=list_stations.c
HEADERS=piano.h
LIBS=-lm -lpiano

all: list_stations

list_stations: ${SOURCES} ${HEADERS}
	${CC} ${CFLAGS} ${SOURCES} ${LIBS} -o $@

# -c ??

#.PHONY all
