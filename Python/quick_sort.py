import random


def quick_sort(arr, low, high):
    if low<high:
        ptr = partition(arr, low, high)
        quick_sort(arr, low, ptr-1)
        quick_sort(arr, ptr+1, high)


def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1

    for j in range(low, high):
        if arr[j]<=pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i+1], arr[high] = arr[high], arr[i+1]

    return i + 1


if __name__ == '__main__':
    random.seed(0)

    arr = [random.randint(-100,100) for _ in range(10)]
    print('Array: ', arr)

    quick_sort(arr, 0, len(arr)-1)
    print('Sorted array: ', arr)