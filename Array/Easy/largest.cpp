#include <bits/stdc++.h>
 
using namespace std;
int findSecondLargestElement(int arr[], int n) {
  
  int large = arr[0];
  int secondLarge = arr[1];
  if(large < secondLarge){
    swap(large,secondLarge);
  }

  for (int i = 2; i < n; i++) {
    if (arr[i]<large && arr[i]>secondLarge) {
      secondLarge = arr[i];
    }
    else if (arr[i]>large){
        secondLarge = large;
        large = arr[i];
    }
  }
  if(large == secondLarge){
    return -1;
  }
  else
  return secondLarge;
}
int main() {
  int arr1[] = {5, 5, 5, 5, 5};
  int n = 5;
  int max = findSecondLargestElement(arr1, n);
  cout << "The second largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findSecondLargestElement(arr2, n);
  cout << "The largest second element in the array is: " << max<<endl;
  return 0;
}