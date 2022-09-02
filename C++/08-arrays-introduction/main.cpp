#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr1[1000],arr2[1000], len; //we can use dynamic array instead of these 1000s. this can create a problem called by "buffer overflow"
    //arr = (int*) malloc(num * sizeof(int)); example of dynamic array
    scanf("%d",&len);
    
    for (int i = 0; i <len ;i++) {
        scanf("%d", &arr1[i]);
        //cout << arr1[i] << " ";
        
    }
    for (int i = 1; i<=len; i++) {
        cout << arr1[len-i] << " ";
    }

    return 0;
}
