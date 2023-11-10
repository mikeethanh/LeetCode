def isPathCrossing(path):
    pathArr = [(0, 0)]
    newPath = (0, 0)

    for alphabet in path:
        if alphabet == "N":
            newPath = (newPath[0], newPath[1] + 1)
        elif alphabet == "E":
            newPath = (newPath[0] + 1, newPath[1])
        elif alphabet == "S":
            newPath = (newPath[0], newPath[1] - 1)
        elif alphabet == "W":
            newPath = (newPath[0] - 1, newPath[1])

        if newPath in pathArr:
            return True

        pathArr.append(newPath)

    return False

# Example usage
path = "NESWW"
print(isPathCrossing(path))

    
            
    
           

