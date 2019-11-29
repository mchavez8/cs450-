#include "types.h"
#include "user.h"
#include "fcntl.h"


int 
main(void)
{
	int fd;
	fd = open("SMALLFILE", O_CREATE | O_SMALL | O_RDWR);
	if(fd >= 0)
	{
		printf(1, " small file succeed\n");
	}
	else
	{
		printf(1, "error:\n");
	}

	if(write(fd, "that's", 6) != 6)
	{
		printf(1,"error\n");
	}
	
	 if(write(fd, "crazy", 5) != 5)
        {
                printf(1,"error\n");
        }

	printf(1, " write succeeded\n");
	close(fd); // close the file
}
