# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 06:23:32 by kfujita           #+#    #+#              #
#    Updated: 2022/04/25 21:58:56 by kfujita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c \
			ft_isalnum.c \
			ft_isdigit.c \
			ft_memchr.c \
			ft_memmove.c \
			ft_putendl_fd.c \
			ft_split.c \
			ft_strjoin.c \
			ft_strlen.c \
			ft_strnstr.c \
			ft_strtrim.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_isalpha.c \
			ft_isprint.c \
			ft_memcmp.c \
			ft_memset.c \
			ft_putnbr_fd.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strmapi.c \
			ft_strrchr.c \
			ft_substr.c \
			ft_calloc.c \
			ft_isascii.c \
			ft_itoa.c \
			ft_memcpy.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_strdup.c \
			ft_strlcpy.c \
			ft_strncmp.c \
			ft_striteri.c \
			ft_tolower.c \

SRCS04	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

SRCS_AD	=	ft_strtol.c \
			ft_strndup.c \
			ft_strnlen.c \
			ft_min.c \
			ft_max.c \
			ft_isupper.c \
			ft_islower.c \

PRINTF_DIR	=	./ft_printf
SRCS_PRINTF	= \
	check_no_opt_str.c \
	ft_printf.c \
	is_valid_conv_char.c \
	parse_format.c \
	parse_opt_c_str.c \
	parse_opt_num.c \
	parse_opt_ptr.c \
	print_all.c \
	util.c \
	is_valid_flag_char.c \
	parse_opt.c \
	parse_opt_flags.c \

OBJ_DIR	=	./obj
OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
OBJS04	=	$(addprefix $(OBJ_DIR)/, $(SRCS04:.c=.o))
OBJS_AD	=	$(addprefix $(OBJ_DIR)/, $(SRCS_AD:.c=.o))
OBJS_PRINTF	=	$(addprefix $(OBJ_DIR)/, $(SRCS_PRINTF:.c=.o))

CFLAGS	=	-Wall -Wextra -Werror
INCLUDES	=	-I ./ -I $(PRINTF_DIR)

CC		=	cc

MAKE_OBJ_CMD	=	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $^

all:	$(NAME)

$(NAME):	$(OBJS) $(OBJS04) $(OBJS_AD) $(OBJS_PRINTF)
	ar r $@ $^

$(OBJ_DIR)/%.o:	%.c
	@mkdir -p $(OBJ_DIR)
	$(MAKE_OBJ_CMD)

$(OBJ_DIR)/%.o:	$(PRINTF_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(MAKE_OBJ_CMD)

bonus:	$(NAME)

clean:
	rm -f $(OBJS) $(OBJS04) $(OBJS_AD) $(OBJS_PRINTF)
	rm -d $(OBJ_DIR) || exit 0

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	clean
