#include <unistd.h>
/*
 * Main = Prints the message "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 * Return = Always 1 
 */

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, "\n", message);

	return (1);
}
