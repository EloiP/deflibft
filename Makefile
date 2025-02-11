# Makefile for libft

# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = \
    Convs/ft_atoi.c \
    ft_bzero.c \
    ft_calloc.c \
    Comps/ft_isalnum.c \
    Comps/ft_isalpha.c \
    Comps/ft_isascii.c \
    Comps/ft_isdigit.c \
    Comps/ft_isprint.c \
	Comps/ft_is_negative.c \
    Mem/ft_memchr.c \
    Mem/ft_memcmp.c \
    Mem/ft_memcpy.c \
    Mem/ft_memmove.c \
    Mem/ft_memset.c \
    Fd/ft_putchar_fd.c \
    Fd/ft_putendl_fd.c \
    Fd/ft_putnbr_fd.c \
    Fd/ft_putstr_fd.c \
    ft_strdup.c \
    ft_strchr.c \
    ft_strlcat.c \
    ft_strlcpy.c \
    ft_strlen.c \
    ft_strncmp.c \
    ft_strnstr.c \
    ft_tolower.c \
    ft_toupper.c \
    ft_substr.c \
    ft_strjoin.c \
    ft_strtrim.c \
    ft_strmapi.c \
    Convs/ft_itoa.c \
    ft_split.c \
    List/ft_lstnew_bonus.c \
    List/ft_lstadd_front_bonus.c \
    List/ft_lstadd_back_bonus.c \
    List/ft_lstclear_bonus.c \
    List/ft_lstdelone_bonus.c \
    List/ft_lstiter_bonus.c \
    List/ft_lstlast_bonus.c \
    List/ft_lstmap_bonus.c \
    List/ft_lstsize_bonus.c \
    List/ft_lstalast_bonus.c \
    Gnl/get_next_line.c \
    Gnl/get_next_line_utils.c \
    Gnl/get_next_line_bonus.c \
    Gnl/get_next_line_utils_bonus.c \
    Printf/ft_printf.c \
    Printf/printnum.c \
    Printf/printstring.c \
    Printf/printpoint.c \

# Object files
OBJS = $(SRCS:.c=.o)

# Library name
LIBRARY = libft.a

# Default target
all: $(LIBRARY)

# Rule to create the library
$(LIBRARY): $(OBJS)
	@ar rcs $@ $^

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the library
clean:
	rm -f $(OBJS)

# Clean up the library
fclean: clean
	rm -f $(LIBRARY)

# Rebuild the library
re: fclean all

.PHONY: all clean fclean re
