CFLAGS:=-Wall -g -std=c99 -pedantic
CFLAGS:=-Wall -g

SOURCES=list_stations.c
HEADERS=piano.h
LIBS=-lpiano

all: list_stations

list_stations: ${SOURCES} ${HEADERS}
	${CC} ${CFLAGS} ${SOURCES} ${LIBS} -o $@

clean:
	rm list_stations

#.PHONY all
