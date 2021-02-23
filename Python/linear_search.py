import random


def linear_search(arr, target):
    for index, value in enumerate(arr):
        if value==target:
            return index

    return -1


if __name__ == '__main__':
    random.seed(0)

    target = 101
    arr = [random.randint(-100,100) for _ in range(10)] + [target]
    random.shuffle(arr)

    index = linear_search(arr, target)

    print('Target found at index: ', index)
    print('Real index?', target==arr[index])
    print(arr)
