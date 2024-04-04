#!/usr/bin/python3
"""This module contains island_perimeter function"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid:"""

    parameter = 0
    ln_1 = len(grid)
    ln_2 = len(grid[0])
    for i in range(0, ln_1):
        for j in range(0, ln_2):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    parameter += 1
                if i == ln_1 - 1 or grid[i + 1][j] == 0:
                    parameter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    parameter += 1
                if j == ln_2 - 1 or grid[i][j + 1] == 0:
                    parameter += 1
    return parameter
