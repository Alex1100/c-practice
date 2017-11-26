#include <stdio.h>


void swap(int v[], int i, int j){
  int temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}


void quick_sort(int v[], int left, int right) {

  int i, last;
  void swap(int v[], int i, int j);

  if(left >= right){
    return;
  }

  swap(v, left, (left + right)/2);

  last = left;

  for(i = left + 1; i <= right; i++){
    if(v[i] < v[left]){
      swap(v, ++last, i);
    }
  }

  swap(v, left, last);
  quick_sort(v, left, last - 1);
  quick_sort(v, last+1, right);
}


int main(void){
  int le_array[5], i;
  le_array[0] = 110;
  le_array[1] = 20;
  le_array[2] = 300;
  le_array[3] = 45;
  le_array[4] = 55;

  for(i = 0; i < sizeof(le_array)/sizeof(le_array[0]); ++i){
    if(i == (sizeof(le_array)/sizeof(le_array[0])) - 1){
      printf("\nBefore sorting, index # %d of le_array is: %d\n\n\n\n\n", i, le_array[i]);
    } else {
      printf("\nBefore sorting, index # %d of le_array is: %d\n", i, le_array[i]);
    }
  }

  quick_sort(le_array, 0, 5);
  for(i = 0; i < sizeof(le_array)/sizeof(le_array[0]); ++i){
    printf("\nAfter sorting, index # %d of le_array is: %d\n", i, le_array[i]);
  }
  return 0;
}
