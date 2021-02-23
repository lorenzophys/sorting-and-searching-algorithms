import random


def heapify(arr, length, root):
    largest = root
    left = 2 * root + 1
    right = 2 * root + 2

    if left<length and arr[left]>arr[largest]:
        largest = left

    if right<length and arr[right]>arr[largest]:
        largest = right

    if largest!=root:
        arr[root], arr[largest] = arr[largest], arr[root]
        heapify(arr, length, largest)


def heap_sort(arr):
    length = len(arr)
    root = length // 2

    for curr in range(root, -1, -1):
        heapify(arr, length, curr)

    for curr in range(length-1, 0, -1):
        arr[curr], arr[0] = arr[0], arr[curr]
        heapify(arr, curr, 0)


if __name__ == '__main__':
    random.seed(0)

    arr = [random.randint(-100,100) for _ in range(10)]
    print('Array: ', arr)

    heap_sort(arr)
    print('Sorted array: ', arr)