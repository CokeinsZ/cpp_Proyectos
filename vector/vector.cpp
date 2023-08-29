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
    int n=nums.size();
    k=k%n;
    vector<int> res=nums;

    for(int i=0;i<n;i++) {
        res[(i+k)%n]=nums[i];
    }
    
    nums=res;
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
    vector<int> n = { -1,-100,3,99 };
    int espacios = 2;

    rotate(n, espacios);

    imprimirVector(n);

    //removeElement(n, val);

    //removeDuplicates(n);
            
}
