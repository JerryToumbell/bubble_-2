IDIR=include
CC=gcc
CFLAGS=-I$(IDIR)

SDIR=src
BDIR=build
ODIR=$(BDIR)/obj
LDIR=lib

LIBS=-lm

_DEPS = array_utilities.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o array_utilities.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

array_task: $(OBJ)
	gcc -o $(BDIR)/$@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(BDIR)/* core $(IDIR)/*~
