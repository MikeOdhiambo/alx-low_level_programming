#!/usr/bin/python3
""" island_perimeter module for calculating perimeter """


def island_perimeter(grid):
    """ Calculates the perimeter of a grid of connected squares """
    noGrids = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                noGrids += 1
        return ((2 * noGrids) + 2)
