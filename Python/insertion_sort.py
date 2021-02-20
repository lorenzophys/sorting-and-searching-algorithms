import random


def insertion_sort(arr):
    length = len(arr)

    for index in range(1, length):
        key = arr[index]
        pointer = index - 1

        while key<arr[pointer] and pointer>=0:
            arr[pointer+1] = arr[pointer]
            pointer -= 1

        arr[pointer+1] = key


if __name__ == '__main__':
    random.seed(0)

    arr = [random.randint(-100,100) for _ in range(10)]
    print('Array: ', arr)

    insertion_sort(arr)
    print('Sorted array: ', arr)