#!/usr/bin/python3
"""defining island perimeter func"""


def island_perimeter(grid):
    """Return islandperimiter

    grid representation water - 0 and land - 1

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        island perimeter on grid
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
