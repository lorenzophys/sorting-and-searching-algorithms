import random


def merge_sort(arr):
    if len(arr)==1:
        return
    else:
        mid = len(arr) // 2
        left = arr[:mid]
        right = arr[mid:]

        merge_sort(left)
        merge_sort(right)
        merge(arr, left, right)


def merge(arr, left, right):
    i = j = k = 0

    while i<len(left) and j<len(right):
        if left[i]<right[j]:
            arr[k] = left[i]
            i += 1
        elif right[j]<left[i]:
            arr[k] = right[j]
            j += 1
        k += 1

    while i<len(left):
        arr[k] = left[i]
        i += 1
        k += 1

    while j<len(right):
        arr[k] = right[j]
        j += 1
        k += 1


if __name__ == '__main__':
    random.seed(0)

    arr = [random.randint(-100,100) for _ in range(10)]
    print('Array: ', arr)

    merge_sort(arr)
    print('Sorted array: ', arr)