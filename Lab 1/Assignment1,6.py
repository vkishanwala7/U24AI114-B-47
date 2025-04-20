import math

def distance(point1, point2):
    return math.sqrt((point2[0] - point1[0])**2 + (point2[1] - point1[1])**2 + (point2[2] - point1[2])**2)

points = []
for i in range(10):
    x, y, z = map(int, input(f"Enter the coordinates for point {i + 1} (x, y, z): ").split())
    points.append((x, y, z))

nearest_neighbors = []

for i, point in enumerate(points):
    min_distance = float('inf')
    nearest_point = None

    for j, other_point in enumerate(points):
        if i != j:
            distance1 = distance(point, other_point)
            if distance1 < min_distance:
                min_distance = distance
                nearest_point = other_point

    nearest_neighbors.append((point, nearest_point))

print("\nPoint and its nearest neighbor:")
for point, neighbor in nearest_neighbors:
    print(f"Point {point} -> Nearest Neighbor {neighbor}")
