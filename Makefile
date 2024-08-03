
NAME							=	mkdirs
CC								=	cc
CFLAGS							=	-Wall -Wextra -Werror

SRCS_DIR 						:=	srcs
SRCS							:=	$(SRCS_DIR)/mkdirs.c \
									$(SRCS_DIR)/hexagonal.c
OBJS 							=	$(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@rm -rf $@
	@echo "Compiling..."
	@$(CC) $(CFLAGS) -o $@ $^
	@rm -rf $(OBJS)
	@echo "Done !"

%.o : %.c
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $^ -o $@
	@echo "Done !"

clean :
	@echo "Cleaning Objects..."
	@rm -rf $(OBJS)
	@echo "Done !"

fclean : clean
	@echo "Cleaning..."
	@rm -rf $(NAME)
	@echo "Done !"

re : fclean all


#-----------------------------------phony--------------------------------------#
.PHONY: all clean fclean re