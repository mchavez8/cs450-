#include "types.h"
#include "user.h"
#include "date.h"

int 
main(int argc, char *argv[])
{
	struct rtcdate r;
	
	if(date(&r)) {
		printf(2, "date failed\n");
		exit();
	}
	printf(1,"UTC");
	printf(1,"%d:%d:%d:%d:%d:%d", r.second, r.minute, r.hour , r.day , r.month , r.year);
	exit();
}
