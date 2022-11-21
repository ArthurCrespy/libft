cmake_minimum_required(VERSION 3.23)
project(libft C)

set(CMAKE_C_STANDARD 11)

include_directories(files)

add_executable(libft
        files/ft_atoi.c
        files/ft_bzero.c
        files/ft_calloc.c
        files/ft_isalnum.c
        files/ft_isalpha.c
        files/ft_isascii.c
        files/ft_isdigit.c
        files/ft_isprint.c
        files/ft_itoa.c
        files/ft_lstadd_back_bonus.c
        files/ft_lstadd_front_bonus.c
        files/ft_lstclear_bonus.c
        files/ft_lstdelone_bonus.c
        files/ft_lstiter_bonus.c
        files/ft_lstlast_bonus.c
        files/ft_lstmap_bonus.c
        files/ft_lstnew_bonus.c
        files/ft_lstsize_bonus.c
        files/ft_memchr.c
        files/ft_memcmp.c
        files/ft_memcpy.c
        files/ft_memmove.c
        files/ft_memset.c
        files/ft_putchar_fd.c
        files/ft_putendl_fd.c
        files/ft_putnbr_fd.c
        files/ft_putstr_fd.c
        files/ft_split.c
        files/ft_strchr.c
        files/ft_strdup.c
        files/ft_striteri.c
        files/ft_strjoin.c
        files/ft_strlcat.c
        files/ft_strlcpy.c
        files/ft_strlen.c
        files/ft_strmapi.c
        files/ft_strncmp.c
        files/ft_strnstr.c
        files/ft_strrchr.c
        files/ft_strtrim.c
        files/ft_substr.c
        files/ft_tolower.c
        files/ft_toupper.c
        files/libft.h
        files/main.c)
