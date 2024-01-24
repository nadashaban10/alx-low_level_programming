#!/usr/bin/python3

"""
Calculates the perimeter of an island represented as a grid of cells.

Land cells are marked as 1, water cells as 0. The grid is assumed to be
rectangular, with a width and height not exceeding 100, completely
surrounded by water, and containing a single island without any lakes.
"""

def island_perimeter(grid):
   """
   Calculates the perimeter of the island in the given grid.

   Args:
       grid: A list of lists of integers, where 1 represents land and 0 represents water.

   Returns:
       The perimeter of the island as an integer.
   """

   perimeter = 0
   rows = len(grid)
   cols = len(grid[0])

   for row in range(rows):
       for col in range(cols):
           if grid[row][col] == 1:  '''If it's a land cell'''
               perimeter += 4  
               '''Initially count all edges as perimeter'''

               '''Check for adjacent land cells 
               (up, down, left, right) and 
               subtract shared edges'''
               if row > 0 and grid[row - 1][col] == 1:
                   perimeter -= 2  '''Subtract shared top edge'''
               if col > 0 and grid[row][col - 1] == 1:
                   perimeter -= 2  '''Subtract shared left edge'''

   return perimeter

