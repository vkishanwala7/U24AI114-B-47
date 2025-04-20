import math

class Vector2D:
    def __init__(self, x = 0, y = 0, z = 0):
        self.vector = [x, y, z]
        
    def magnitude(self):
        magnitude = 0.0
        for i in range(3):
            magnitude += self.vector[i]**2
        magnitude **= 0.5
        return magnitude
    
    def distance(self, other_vector):
        distance = 0.0
        for i in range(3):
            distance += (self.vector[i] - other_vector[i])**2
        distance **= 0.5
        return distance
    
    def angle_x(self):
        angle_x = math.acos(self.vector[0] / self.magnitude()) * 180 / 3.14159
        return angle_x
    
    def angle_y(self):
        angle_y = math.acos(self.vector[1] / self.magnitude()) * 180 / 3.14159
        return angle_y
    
    def angle_z(self):
        angle_z = math.acos(self.vector[2] / self.magnitude()) * 180 / 3.14159
        return angle_z
    
    def dot_product(self, other_vector):
        dot_product = 0.0
        for i in range(3):
            dot_product += self.vector[i] * other_vector[i]
        return dot_product
    
    def cross_product(self, other_vector):
        z = self.vector[0] * other_vector[1] - self.vector[1] * other_vector[0]
        return f"{z}k"
    
class Vector3D(Vector2D):
    def cross_product(self, other_vector):
        x = self.vector[1] * other_vector[2] - self.vector[2] * other_vector[1]
        y = self.vector[2] * other_vector[0] - self.vector[0] * other_vector[2]
        z = self.vector[0] * other_vector[1] - self.vector[1] * other_vector[0]
        return f"({x})i + ({y})j + ({z})k"

vector2d_1 = Vector2D()
vector2d_2 = Vector2D()
vector3d_1 = Vector3D()
vector3d_2 = Vector3D()

choice = -1
while choice != 0:
    print("1. 2-D Vector\n2. 3-D Vector\n0. Exit\n")
    choice = int(input("Enter your choice: "))
    
    if choice == 1:
        inner_choice = -1
        while inner_choice != 0:    
            print("1.Update Vector 1 (Main Vector)\n2.Update Vector 2\n3.Calculate Magnitude\n4.Calculate Angle\n5.Calculate Distance")
            print("6.Calculate Dot Product\n7.Calculate Cross Product\n0.Exit\n")
            inner_choice = int(input("Enter your choice: "))
        
            if inner_choice == 1:
                x,y = input("Enter your x and y coordinates: ").split()
                x = int(x)
                y = int(y)
                vector2d_1 = Vector2D(x, y)
            
            elif inner_choice == 2:
                x, y = input("Enter your x and y coordinates: ").split()
                x = int(x)
                y = int(y)
                vector2d_2 = Vector2D(x, y)
            
            elif inner_choice == 3:
                print(f"Magnitude of Vector 1: {vector2d_1.magnitude():.3f}\n")
            
            elif inner_choice == 4:
                print(f"Angle with x-axis: {vector2d_1.angle_x():.3f}")
                print(f"Angle with y-axis: {vector2d_1.angle_y():.3f}\n")
            
            elif inner_choice == 5:
                print(f"Distance between vectors: {vector2d_1.distance(vector2d_2.vector):.3f}\n")
            
            elif inner_choice == 6:
                print(f"Dot Product: {vector2d_1.dot_product(vector2d_2.vector)}\n")
            
            elif inner_choice == 7:
                print(f"Cross Product: {vector2d_1.cross_product(vector2d_2.vector)}\n")
            
            elif inner_choice == 0:
                print("Exiting the menu\n")
                break
    
    elif choice == 2:
        inner_choice = -1
        while inner_choice != 0:
            print("1.Update Vector 1 (Main Vector)\n2.Update Vector 2\n3.Calculate Magnitude\n4.Calculate Angles")
            print("5.Calculate Distance\n6.Calculate Dot Product\n7.Calculate Cross Product\n0.Exit\n")
            inner_choice = int(input("Enter your choice: "))

            if inner_choice == 1:
                x, y, z = input("Enter your x, y, z coordinates: ").split()
                x = int(x)
                y = int(y)
                z = int(z)
                vector3d_1 = Vector3D(x, y, z)
            
            elif inner_choice == 2:
                x, y, z = input("Enter your x, y, and z coordinates: ").split()
                x = int(x)
                y = int(y)
                z = int(z)
                vector3d_2 = Vector3D(x, y, z)
            
            elif inner_choice == 3:
                print(f"Magnitude of Vector 1: {vector3d_1.magnitude():.3f}")
            
            elif inner_choice == 4:
                print(f"Angle with x-axis: {vector3d_1.angle_x():.3f}")
                print(f"Angle with y-axis: {vector3d_1.angle_y():.3f}")
                print(f"Angle with z-axis: {vector3d_1.angle_z():.3f}")
            
            elif inner_choice == 5:
                print(f"Distance between vectors: {vector3d_1.distance(vector3d_2.vector):.3f}")
            
            elif inner_choice == 6:
                print(f"Dot Product: {vector3d_1.dot_product(vector3d_2.vector)}")
            
            elif inner_choice == 7:
                print(f"Cross Product: {vector3d_1.cross_product(vector3d_2.vector)}")
            
            elif inner_choice == 0:
                print("Exiting the menu\n")
                break
        
    elif choice == 0:
        print("\nExiting the program...")
        break

    else:
        print("\nPlease enter a valid number!\n")