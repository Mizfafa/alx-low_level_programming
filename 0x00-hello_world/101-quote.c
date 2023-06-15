#include <unistd.h>

int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDERR_FILENO, msg, 58);
return (1);
}
