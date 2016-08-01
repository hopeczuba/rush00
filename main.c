/* Enter Rush number (0 to 4), width and height */

#include "rush_0.h"

int		main(int argc, char **argv)
{
	int w;
	int h;

	if (argc != 4)
		return (0);
	w = ft_atoi(argv[2]);
	h = ft_atoi(argv[3]);
	if (*argv[1] == 48)
		rush_00(w, h);
	if (*argv[1] == 49)
		rush_01(w, h);
	if (*argv[1] == 50)
		rush_02(w, h);
	if (*argv[1] == 51)
		rush_03(w, h);
	if (*argv[1] == 52)
		rush_04(w, h);
	return (0);
}