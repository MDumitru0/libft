# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmaximci <dmaximci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 12:09:02 by dmaximci          #+#    #+#              #
#    Updated: 2023/01/20 12:12:03 by dmaximci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Avant de commencer a faire le Makefile, retester completement tous 
# les fonctions de libft.h (utiliser une matrix de 1x15) ==> OK

# Lire "La Norme" avant de commencer de faire le Makefile

# Avoir obligatoirement : NAME, all, clean, fclean, re
# Chaque fonction extra le mettre en static
# Compiler avec les flags : -Wall -Wextra -Werror
# Utiliser ar pour creer votre bibliotheque.

# Utiliser le Makefile pour compiler directement que les fichiers modifier.

# Proteger les headers contre la double inclusion.


#BackEnd de GCC
#|---------------|
#Ordre d'execution
# cpp fileName.c fileName2.c
# gcc -c fileName.c fileName2.c
# ld fileName.o fileName2.o

#Dans le cas d'une modification
# gcc -c fileName2.c //recompiler seulement le fichier modifier
# ld fileName.o fileName2.o


# Les Makefile ne sont pas vérifiés pas La Norminette. Ils doivent être 
# vérifiés par un humain pendant l’évaluation.
# • Les règles $(NAME), clean, fclean, re et all sont obligatoires.
# • Le projet est considéré comme non fonctionnel si le Makefile "relink".
# • Dans le cas d’un projet multibinaire, en plus des règles précédentes, 
# vous devez
# avoir une règle all compilant les deux binaires ainsi qu’une règle spécifique
#  à chaque binaire compilé.
# 4• Dans le cas d’un projet faisant appel à une bibliothèque de fonctions 
# (par exemple une libft), votre makefile doit compiler automatiquement cette 
# bibliothèque.
# • Les sources nécessaires à la compilation de votre programme doivent être 
# explicitement citées dans votre Makefile.

NAME	=	libft.a

CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
IFLAGS	=	-I$(INC_PATH)

AR	=	ar
ARFLAGS	=	rc

RM	=	rm -rf

INC_PATH	=	.
INC_NAME	=	libft.h

SRC_PATH	=	.
SRC_NAME	=	ft_atoi \
				ft_bzero \
				ft_calloc \
				ft_isalnum \
				ft_isalpha \
				ft_isascii \
				ft_isdigit \
				ft_isprint \
				ft_memchr \
				ft_memcmp \
				ft_memcpy \
				ft_memmove \
				ft_memset \
				ft_strchr \
				ft_strdup \
				ft_strlcat \
				ft_strlcpy \
				ft_strlen \
				ft_strncmp \
				ft_strnstr \
				ft_strrchr \
				ft_tolower \
				ft_toupper \
				ft_substr \
				ft_strjoin \
				ft_strtrim \
				ft_split \
				ft_itoa \
				ft_strmapi \
				ft_striteri \
				ft_putchar_fd \
				ft_putstr_fd \
				ft_putendl_fd \
				ft_putnbr_fd \

INC	=	$(addprefix $(INC_PATH)/, $(INC_NAME))
SRC	=	$(addprefix $(SRC_PATH)/, $(SRC_NAME))

.SUFFIXES:	.c .o .h

OBJ	=	${SRC:.c=.o}

all:	$(NAME)

$(NAME):	$(OBJ) $(INC)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
	asa

.PHONY:	all clean fclean re