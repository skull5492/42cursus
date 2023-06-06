# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtorreir <jtorreir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/01 16:07:04 by jtorreir          #+#    #+#              #
#    Updated: 2023/06/05 19:13:17 by jtorreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
MAPS_C = map_values.c
TEXTURES_C = colours.c
INTERACTION_C = 
EVENTS_C = wasd.c keycodes.c mousecodes.c
INTERFACE_C = window.c

SOLONG_HEADER = so_long.h
SOLONG_HEADER_DIRECTORY = srcs/
HEADER = $(addprefix $(SOLONG_HEADER_DIRECTORY), $(SOLONG_HEADER))

MAPS_DIRECTORY = maps/
MAPS = $(addprefix $(MAPS_DIRECTORY), $(MAPS_C))

EVENTS_DIRECTORY = events/
EVENTS = $(addprefix $(EVENTS_DIRECTORY), $(EVENTS_C))

INTERFACE_DIRECTORY = interface/
INTERFACE = $(addprefix $(INTERFACE_DIRECTORY), $(INTERFACE_C))

TEXTURES_DIRECTORY = textures/
TEXTURES = $(addprefix $(TEXTURES_DIRECTORY), $(TEXTURES_C))

INTERACTION_DIRECTORY = interaction/
INTERACTION = $(addprefix $(INTERACTION_DIRECTORY), $(INTERACTION_C))

MLX_DIRECTORY = minilibx-linux/
MLX_HEADER = $(MLX_DIRECTORY)mlx.h
MLX = $(MLX_DIRECTORY)libmlx.a

LIBFT_DIRECTORY = libft/
LIBFT_HEADER = $(LIBFT_DIRECTORY)libft.h
LIBFT = $(LIBFT_DIRECTORY)libft.a

SRCS_C = $(MAPS) $(TEXTURES) $(INTERACTION) $(EVENTS) $(INTERFACE) main.c
SRCS_DIRECTORY = srcs/
SRCS = $(addprefix $(SRCS_DIRECTORY), $(SRCS_C))

OBJECTS_C = $(SRCS_C:.c=.o)
OBJECTS_DIRECTORY = objects/
OBJECTS = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_C)) 

LFLAGS = -L$(LIBFT_DIRECTORY) -lft $(MLX) -Imlx_linux -lX11 -lXext -lm -lz
INCLUDES = -I.$(LIBFT_HEADER), -I.$(MLX_HEADER), -I.$(SOLONG_HEADER)

CC = cc
CC_FLAGS = -g -Wall -Werror -Wextra

$(NAME): $(LIBFT) $(MLX) $(OBJECTS_DIRECTORY) $(OBJECTS)  
	$(CC) $(CC_FLAGS) $(INCLUDES) $(OBJECTS) $(LFLAGS) -o $(NAME)

$(OBJECTS_DIRECTORY):
	mkdir -p $(OBJECTS_DIRECTORY)
	mkdir -p $(OBJECTS_DIRECTORY)$(MAPS_DIRECTORY)
	mkdir -p $(OBJECTS_DIRECTORY)$(EVENTS_DIRECTORY)
	mkdir -p $(OBJECTS_DIRECTORY)$(INTERACTION_DIRECTORY)
	mkdir -p $(OBJECTS_DIRECTORY)$(TEXTURES_DIRECTORY)
	mkdir -p $(OBJECTS_DIRECTORY)$(INTERFACE_DIRECTORY)

$(OBJECTS_DIRECTORY)%.o : $(SRCS_DIRECTORY)%.c
	$(CC) $(CC_FLAGS) -c $(INCLUDES) $< -o $@

$(LIBFT):
	make -sC $(LIBFT_DIRECTORY)

$(MLX):
	cd $(MLX_DIRECTORY) && ./configure
	
clean: 
	rm -rf $(OBJECTS_DIRECTORY)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(MLX)

re: fclean
	clear && make

.PHONY: all clean fclean re