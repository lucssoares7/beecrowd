#Copy code
def count_enemies_between(enemies, a, b):
    a_index = enemies.index(a)
    b_index = enemies.index(b)
    return abs(b_index - a_index) - 1

def main():
    N = int(input())
    enemies = list(map(int, input().split()))
    Q = int(input())
    
    for _ in range(Q):
        operation = input().split()
        if operation[0] == 'I':
            p = int(operation[1])
            e = int(operation[2])
            e_index = enemies.index(e)
            enemies.insert(e_index + 1, p)
        elif operation[0] == 'R':
            e = int(operation[1])
            enemies.remove(e)
        elif operation[0] == 'Q':
            a = int(operation[1])
            b = int(operation[2])
            count = count_enemies_between(enemies, a, b)
            print(count)

if __name__ == '__main__':
    main()
