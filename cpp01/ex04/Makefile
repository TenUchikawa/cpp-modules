NAME	=	sed_is_for_losers
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

SRC		=	main
SRCS	=	$(addsuffix .cpp, $(SRC))

OBJ_D 	=	objs/
OBJ		=	$(SRC:%.c=%.o)
OBJS	=	$(addprefix $(OBJ_D), $(addsuffix .o, $(OBJ)))

$(OBJ_D)%.o : %.cpp
			@mkdir -p $(OBJ_D)
			@($(CC) $(FLAGS)  -c $< -o $@)

all:		$(NAME)

$(NAME):	$(OBJS)
			@($(CC) $(FLAGS) $(OBJS) -o $(NAME))

clean:
			@($(RM) $(OBJ_D))

fclean: 	clean
			@($(RM) $(NAME))

re: 		fclean all

.PHONY:		all clean fclean re
