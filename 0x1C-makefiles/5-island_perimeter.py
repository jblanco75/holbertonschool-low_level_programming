#!/usr/bin/python3
"""Function to calculate island perimeter"""


def island_perimeter(grid):
    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                perimeter += 4
                if x != 0 and grid[x - 1][y] == 1:
                    perimeter -= 2
                if y != 0 and grid[x][y - 1] == 1:
                    perimeter -= 2
    return perimeter
