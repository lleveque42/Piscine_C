SRCS	= $(addprefix srcs/, basic_funct.c basic_funct_2.c display_alpha.c display_alpha_funct.c ft_parse_dict.c ft_split.c ft_split_num.c main.c ft_free_t_dict.c)

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

RM		= rm -f

CC		= gcc -g

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I includes/ -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all:		${NAME}

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
