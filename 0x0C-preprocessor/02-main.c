/**
 * main - prints the name of the file it was compiled from
 * Description: Using macro guards, passes the name of the file
 * 
 */
#include <stdio.h>
/*#ifndef __FILE__
#define __FILE__
#endif
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
