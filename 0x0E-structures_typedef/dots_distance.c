#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "point.h"
/**
 * calc_distance - calculates distance between 2 points
 * @point1: point 1
 * @point2: point 2
 * Return: calculated distance
 */
double calc_distance(struct Point *point1, struct Point *point2)
{
	double px, py;

	px = (point1->x - point2->x);
	py = (point1->y - point2->y);

	return (sqrt((px * px) + (py * py)));
}

/**
 * main - Returns distance between two points
 * @argc: count
 * @argv: arr
 * Return: Always 0
 **/

int main(int argc, char **argv)
{
	int i;
	double distance;
	struct Point *point1;
	struct Point *point2;

	point1 = malloc(sizeof(struct Point));
	point2 = malloc(sizeof(struct Point));

	  point1->x = atof(argv[1]);
	  point1->y = atof(argv[2]);
	  point2->x = atof(argv[3]);
	  point2->y = atof(argv[4]);

	if (argv[1] != '\0' && argv[2] != '\0' && argv[3] != '\0' && argv[4] != '\0')
	{
		for (i = 1; i < argc; i++)
		{
			distance = calc_distance(point1, point2);
		}
		printf("%f\n", distance);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
