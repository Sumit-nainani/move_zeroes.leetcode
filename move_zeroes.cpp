/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

/*
approach:
  just traverse the array and we encounter the zero then increment the second pointer until non zero element and then swap.
  it is based on two pointer approach
*/
#include<bits/stdc++.h>
vector<int> moveZeros(int n, vector<int> a) {
    int i(0),j(0);
    while(i<n && j<n){
        while(i<n && a[i]==0) i++;  //encounter 0 
        if(i<n && i!=j) swap(a[i],a[j]);
        i++;
        j++;
    }
    return a;
}
