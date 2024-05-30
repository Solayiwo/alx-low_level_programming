#!/usr/bin/python3
def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.
    
    Args:
        grid (list of list of int): A list where 0 represents
                water and 1 represents land.
        
    Returns:
        int: The perimeter of the island.
    """
    if not grid or not grid[0]:
        return 0
    
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    
    return perimeter
