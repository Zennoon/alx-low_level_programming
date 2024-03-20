#!/usr/bin/python3
"""

Contains

Functions:
    island_perimeter - Returns the perimeter of a grid representing an island
"""


def island_perimeter(grid):
    """
    Given a grid (list of lists of 0s and 1s) representing an island (where 0
    represents water and 1 represents land), returns the perimeter of the island

    Args:
        grid (list(list(int))): A list of lists of 0s and 1s.

    Returns:
        int: perimeter of the island represented by @grid.
    """
    perimeter = 0
    grid_len = len(grid)
    for i in range(grid_len):
        inner_len = len(grid[i])
        for j in range(inner_len):
            if grid[i][j] == 1:
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == inner_len - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                if i == grid_len - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
    return (perimeter)


grid = [
    [0, 0, 0, 0, 0, 0],
    [0, 1, 1, 0, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 1, 1, 0, 0],
    [0, 0, 0, 0, 0, 0]
]
print(island_perimeter(grid))
