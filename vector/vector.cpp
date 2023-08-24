#include <iostream>
#include <vector>
using namespace std;

//All of the following methods are in-place algorithms alternatives

//Stupdly, I in every function theres a procedure to print out the result. So be sure when you really need to invoke "imprimirVector" function

int removeElement(vector<int>& nums, int val) {
    int i = 0;

    for (const int num : nums) {
        if (num != val) {
            nums[i++] = num;
        }
            
    }
        
    //Prints out the resulting vector
    cout << "[";
    for (int j = 0; j < nums.size(); j++) {
        cout << nums[j] << " ";
    }
    cout << "] \n";
    int newLength = nums.size();
    return newLength;
}

int removeDuplicates(vector<int>& nums) {
    int i = 0;

    for (const int item : nums)
    {
        // Checks if current is bigger than prev element 
        if (!i || item > nums[i - 1])
        {
            nums[i++] = item;
        }
    }

    for (const int m : nums) {
        cout << m << "\n";
    }

    //i ends up representing the number of unique elements in the vector
    return i;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    double media = 0.0;
    
    //Merges the nums2 vector into the nums1 vector
    for (const int element : nums2) {
        nums1.push_back(element);
    }


    int length = nums1.size();
    if (length % 2 == 0) {
        media = (nums1[length / 2 - 1] + nums1[length / 2]) / 2.0;
    }
    else {
        media = nums1[length / 2];
    }

    return media;
}

void rotate(vector<int>& nums, int k) {
    int aux, tamano = nums.size();


    for (int i = k; i > 0; i--) {
        aux = nums[i - 1];
        nums[i - 1] = nums[tamano - 1];
        nums[tamano - 1] = aux;

    }
}

void imprimirVector(vector<int> v) {
    cout << "[ ";
    for (const int a : v) {
        cout << a << " ";
    }
    cout << "]" << endl;
}

int main()
{
    vector<int> n = { 1,2,3,4 };
    int espacios = 3;

    rotate(n, espacios);

    imprimirVector(n);

    //removeElement(n, val);

    //removeDuplicates(n);
            
}
