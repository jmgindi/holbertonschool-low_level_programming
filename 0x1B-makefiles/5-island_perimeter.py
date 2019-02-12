#!/usr/bin/python3
"""
module contains 1 function:
    island_perimeter
"""


def island_perimeter(grid):
    """ finds the perimeter of an island

    Args:
        grid (obj:`list`): must be a list of lists
    """
    if (not grid or not grid[0] or
        type(grid) is not list or
            type(grid[0]) is not list):
        return

    perim = 0

    for i in range(len(grid) - 1):
        for j in range(len(grid[0]) - 1):
            if grid[i][j] is 1:
                perim += 4
                if grid[i][j - 1] is 1 and j - 1 > 0:
                    perim -= 2
                if grid[i - 1][j] is 1 and i - 1 > 0:
                    perim -= 2

    return perim
