NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f

FILES = push_swap \
		sort/utils \
		sort/sort_three \
		sort/sort_five \
		sort/ft_sorting \
		utils/ft_atoi \
		utils/ft_asctoint \
		utils/ft_split \
		utils/ft_strlcpy \
		utils/ft_lstnew \
		utils/ft_lstadd_back \
		utils/ft_lstadd_front \
		utils/ft_lstlast \
		utils/ft_lstmove \
		utils/ft_lstsize \
		utils/ft_lstfree \
		utils/ft_lstcontent \
		utils/ft_lstorder \
		utils/ft_lstchunkorder \
		utils/ft_memset \
		utils/ft_dups \
		utils/ft_lstmed \
		utils/ft_lstbiggest \
		utils/ft_lstsmallest \
		utils/ft_lstzero \
		swaps/swap_a \
		swaps/swap_b \
		swaps/swap_swap \
		swaps/push_a \
		swaps/push_b \
		swaps/rotate_a \
		swaps/rotate_b \
		swaps/rotate_rotate \
		swaps/reverse_rotate_a \
		swaps/reverse_rotate_b \
		swaps/reverse_rotate_rotate\

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all : $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@printf "\e[32mCompiled 🤠👌\e[0m\n"

clean :
	@$(RM) $(OBJS) libft/*.o
	@printf "\e[33mDeleted all .o's 🗑️\e[0m\n"

fclean : clean
	@$(RM) $(NAME) libft.a 
	@printf "\e[33m+ ratio 😡\e[0m\n"

re : fclean all

.PHONY: all clean fclean re
