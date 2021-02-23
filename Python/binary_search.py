import random


def iterative_binary_search(arr, target, low, high):
    while low<=high:
        mid = low + (high - low) // 2

        if target>arr[mid]:
            low = mid + 1
        elif target<arr[mid]:
            high = mid - 1
        else:
            return mid

    return -1


def recursive_binary_search(arr, target, low, high):
    if low<=high:
        mid = low + (high - low) // 2

        if target>arr[mid]:
            return recursive_binary_search(arr, target, mid+1, high)
        elif target<arr[mid]:
            return recursive_binary_search(arr, target, low, mid-1)
        else:
            return mid
    else:
        return -1


if __name__ == '__main__':
    random.seed(0)

    target = 50
    arr = [random.randint(-100,100) for _ in range(10)] + [target]
    arr.sort()

    index_iter = iterative_binary_search(arr, target, 0, len(arr)-1)
    index_rec = recursive_binary_search(arr, target, 0, len(arr)-1)

    print('Iterative search:')
    print('\t Target found at index: ', index_iter)
    print('\t Real index?', target==arr[index_iter])

    print('Recursive search:')
    print('\t Target found at index: ', index_rec)
    print('\t Real index?', target==arr[index_rec])