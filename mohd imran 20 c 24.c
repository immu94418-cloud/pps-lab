#import random

SIZE = 8
MINES = 10

board = [["⬜" for _ in range(SIZE)] for _ in range(SIZE)]
mines = set(random.sample(range(SIZE * SIZE), MINES))

def neighbors(r, c):
    for dr in (-1, 0, 1):
        for dc in (-1, 0, 1):
            nr, nc = r + dr, c + dc
            if 0 <= nr < SIZE and 0 <= nc < SIZE and (dr or dc):
                yield nr, nc

def count_mines(r, c):
    return sum(nr * SIZE + nc in mines for nr, nc in neighbors(r, c))

while True:
    for row in board:
        print(" ".join(row))

    try:
        r, c = map(int, input("Enter row and column (0-7): ").split())
    except ValueError:
        print("Enter two numbers.")
        continue

    if not (0 <= r < SIZE and 0 <= c < SIZE):
        print("Invalid position!")
        continue

    if r * SIZE + c in mines:
        print("\n💥 BOOM! You hit a mine!")
        break

    board[r][c] = str(count_mines(r, c))

    if all(board[r][c] != "⬜" for r in range(SIZE) for c in range(SIZE)
           if r * SIZE + c not in mines):
        print("🎉 You won!")
        break
