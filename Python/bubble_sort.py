import random


def bubble_sort(arr):
    length = len(arr)

    for index in range(length):
        swapped = False
        unsorted = length - index - 1
        
        for j in range(unsorted):
            if arr[j]>arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True

        if not swapped:
            break


if __name__ == '__main__':
    random.seed(0)

    arr = [random.randint(-100,100) for _ in range(10)]
    print('Array: ', arr)

    bubble_sort(arr)
    print('Sorted array: ', arr)