#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
    island_perimeter function calculates the perimeter of the island
    described in grid

    Args:
        grid: a list of list of integers
            0 represents a water zone
            1 represents a land zone

    Returns:
        The perimeter of the island
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
