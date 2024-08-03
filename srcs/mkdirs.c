#include "mkdirs.h"

int main(int argc, char **args)
{
	if (argc < 2)
	{
		printf("Usage: mkdirs <root_dir_name1> <root_dir_name2> ... <root_dir_nameN>\n");
		return ERROR;
	}

	for (int i = 1; i < argc; i++)
	{
		make_hexagonal_dirs(args[i]);
		printf("[%s] created successfully\n", args[i]);
	}

	printf("All directories created successfully\n");
	return SUCCESS;
}
