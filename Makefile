# Kompilator og flag
CC=gcc
CFLAGS=-Wall

# Mål
EXE=converter

# Kilde- og objektfiler
SRCS=convert.c ui/weight_ui.c ui/temperature_ui.c ui/distance_ui.c ui/convert_ui.c ui/digital_storage_ui.c ui/numbers_ui.c distance.c weight.c temperature.c digital_storage.c numbers.c

# Standard mål
all: $(EXE)

# Hvordan $(EXE) bygges
$(EXE): $(SRCS)
	$(CC) $(CFLAGS) -o $(EXE) $(SRCS)

# Oprydning
clean:
	rm -f $(EXE)
