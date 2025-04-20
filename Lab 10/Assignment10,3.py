import numpy as np

def generate_magic_square(n):
    if n % 2 == 1:
        magic_square = [[0] * n for _ in range(n)]
        row, col = 0, n // 2
        for num in range(1, n * n + 1):
            magic_square[row][col] = num
            next_row, next_col = (row - 1) % n, (col + 1) % n
            if magic_square[next_row][next_col] != 0:
                row = (row + 1) % n
            else:
                row, col = next_row, next_col
        return magic_square

    elif n % 4 == 0:
        magic_square = np.zeros((n, n), dtype=int)
        for i in range(n):
            for j in range(n):
                if (i % 4 == j % 4) or (i % 4 + j % 4 == 3):
                    magic_square[i, j] = n * n - (n * i + j)
                else:
                    magic_square[i, j] = n * i + j + 1
        return magic_square.tolist()

    else:
        half_n = n // 2
        sub_square_size = half_n * half_n
        sub_square = generate_magic_square(half_n)

        magic_square = np.zeros((n, n), dtype=int)

        for i in range(half_n):
            for j in range(half_n):
                magic_square[i][j] = sub_square[i][j]
                magic_square[i + half_n][j + half_n] = sub_square[i][j] + sub_square_size
                magic_square[i + half_n][j] = sub_square[i][j] + 2 * sub_square_size
                magic_square[i][j + half_n] = sub_square[i][j] + 3 * sub_square_size

        m = n // 2
        k = m // 2

        for i in range(k):
            for j in range(m):
                if j < k or j >= m - k:
                    magic_square[i, j], magic_square[i + half_n, j] = magic_square[i + half_n, j], magic_square[i, j]

        return magic_square.tolist()

def print_magic_square(magic_square):
    for row in magic_square:
        print(" ".join(str(num).rjust(3) for num in row))

n = int(input("Enter value of N: "))
if n < 3:
    n = int(input("Value of N can't be less than 3: "))
magic_square = generate_magic_square(n)
print_magic_square(magic_square)
