//
//  main.cpp
//  binary_search
//
//  Created by 村上候助 on 2017/10/06.
//  Copyright © 2017 村上候助. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

bool binary_search(int A[], int n, int key){
    int left, mid, right;
    left = 0;
    right = n;
    while(left < right){
        mid = (left + right)/2;
        if(A[mid] == key){
            return true;
        }
        else if(key < A[mid]){
            right = mid;
        }
        else if(key > A[mid]){
            left = mid+1;
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    int n, i, ct, q, key;
    
    scanf("%d", &n);
    int S[n];
    for(i = 0; i < n; i++){
        scanf("%d", &S[i]);
    }
    
    ct = 0;
    scanf("%d", &q);
    for(i = 0; i < q; i++){
        scanf("%d", &key);
        bool found = binary_search(S, n, key);
        if(found) ct ++;
    }
    cout << ct << endl;;
    return 0;
}
