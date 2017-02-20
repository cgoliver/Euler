def evenfibsum(stop):
    x = 1
    y = 2

    tot = 0

    while x < stop:
        if x % 2 == 0:
            tot += x
            yield tot
        x, y = y, x + y

if __name__ == "__main__":
    f = evenfib(4000000)
    for x in f:
        print(x)

