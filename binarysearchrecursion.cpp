#include <iostream>
#include <vector>
template<typename T>
int binarySearch(std::vector<T> &vec, int left, int right, T key)
{

    if (right < left)
    {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (vec[mid] == key)
    {
        return mid;
    }
    if (vec[mid] > key)
    {
        return binarySearch(vec, left, mid - 1, key);
    }
    return binarySearch(vec, mid + 1, right, key);
}

int main()
{
    std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    int key = 0;
    std::cout << "Enter value ";
    std::cin >> key;
    int val = binarySearch(vec, 0, vec.size() - 1, key);
    std::cout << val << std::endl;
}
