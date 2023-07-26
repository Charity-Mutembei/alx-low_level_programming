#!/usr/bin/python3
"""
function def island_perimeter(grid)
to return the perimeter of the island
described in grid:
grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height dont exceed 100
"""


def island_perimeter(grid):
    """
    function to execute grid
    """
    """get the rows and colums"""
    rows = len(grid)
    cols = len(grid[0])
    """assign value of perimeter to start to 0"""
    perimeter = 0

    """iterate through with for loops"""
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                """
                mostly because each cell side = 1 and hence 1 cell
                contributes 4 each perimeter count
                """
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
