#!/usr/bin/python3
"""Module for grid perimeter finder"""


def island_perimeter(grid):
    """Find perimeter of grid"""
    h = 0
    l = 1
    for r in grid:
        for c in r:
            if c == 1 and c + 1 == 1:
                l += 1
            elif (c == 1 and c - 1 == 0) or (c == 1 and c + 1 == 0):
                h += 1
    return 2 * (h + l)
