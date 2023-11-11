def isPathCrossing(path):
    visited = set()
    x, y = 0, 0
    visited.add((x, y))

    for move in path:
        if move == "N":
            y += 1
        elif move == "E":
            x += 1
        elif move == "S":
            y -= 1
        elif move == "W":
            x -= 1

        
        if (x, y) in visited:
            return True

        visited.add((x, y))

    return False


path = "NESWW"
print(isPathCrossing(path))  
