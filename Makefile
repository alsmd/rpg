SRCS = ./srcs/main.cpp ./srcs/Classes/App.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = app

LIB_PATH = /libs/

SFML_FLAGS = -lsfml-graphics -lsfml-window -lsfml-system

SFML_PATH = $(LIB_PATH)SFML/

CC = g++

CFLAGS = 

RM = rm -rf


all: $(NAME)


.cpp.o:
	${CC} ${CFLAGS} -I./includes -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I./includes -I$(SFML_PATH)includes -o $(NAME) $(OBJS) -L$(SFML_PATH)lib  $(SFML_FLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all