CC = gcc
CFLAGS = -Wall -IInclude -Wextra -IApp -IRTE -IBSW/Drivers -IBSW/Scheduler -IConfig 

SRC = $(wildcard App/*.c RTE/*.c BSW/**/*.c)
OBJ = $(SRC:.c=.o)

TARGET = build/autosar_bbb.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)

