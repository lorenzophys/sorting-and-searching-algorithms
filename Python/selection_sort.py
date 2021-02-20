import random


def selection_sort(arr):
    length = len(arr)

    for index in range(length):
        minimum_index = index
        
        for pointer in range(index+1, length):
            if arr[pointer]<arr[minimum_index]:
                minimum_index = pointer

        arr[minimum_index], arr[index] = arr[index], arr[minimum_index]


if __name__ == '__main__':
    random.seed(0)

    arr = [random.randint(-100,100) for _ in range(10)]
    print('Array: ', arr)

    selection_sort(arr)
    print('Sorted array: ', arr)