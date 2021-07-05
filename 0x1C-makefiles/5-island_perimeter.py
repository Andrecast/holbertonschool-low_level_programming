#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    count = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, j in enumerate(grid):
        for k, l in enumerate(j):
            if l == 1:
                if i == 0 or grid[i - 1][k] != 1:
                    count += 1
                if k == 0 or grid[i][k - 1] != 1:
                    count += 1
                if k == width or grid[i][k + 1] != 1:
                    count += 1
                if i == length or grid[i + 1][k] != 1:
                    count += 1
    return count
