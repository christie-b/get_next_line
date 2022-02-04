#include "get_next_line.h"
#include <fcntl.h>


 int main(int ac, char **av)
{
	if (ac == 1)
		return 0;
	int open_file;
	open_file = open(av[1], O_RDWR);
	
	char *str;
	/* printf("return of gnl: %d\n", get_next_line(open_file, &str));
	printf("str from main: %s\n", (char *)str); */

	/*printf("return of gnl: %d\n", get_next_line(open_file, &str));
	printf("str from main: %s\n", (char *)str);*/ 
	int gnl;
	while ((gnl = get_next_line(open_file, &str)) > 0)
	{
		printf("%d: %s\n", gnl, str);
		//free(str);
	}
	printf("%d: %s\n", gnl, str);
 	// free(str);

}
