CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -rf
SRC			=	src
OBJ			=	obj
SRCS		=	$(wildcard $(SRC)/*.c)
OBJS		=	$(patsubst $(SRC)/%.c, $(OBJ)/%.c, $(SRCS))

TEST		=	tests
TESTS		=

LIBDIR		=	lib
LIB			=	$(LIBDIR)/*.a

# Compiles the unit tester, runs it, and cleans up
test: $(SRCS) clean
	@$(CC) $(CFLAGS) $(SRCS) *.c -o testoutput
	@./testoutput
	@$(RM) testoutput

clean:
	@$(RM) testoutput

# Runs norminette on all files
norm: 
	@(cd ../ ; norminette -R CheckForbiddenSourceHeader)