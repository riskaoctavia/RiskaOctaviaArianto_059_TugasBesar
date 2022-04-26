//bubble sorting
#include <iostream>
using namespace std;

//a function to implement bubble sort
void bubbleSort(int arr[], int n){
  int i, j, tmp;
  for (i = 0; i < n; i++){
  	//last i elements are already in place
    for (j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}
int main(){
	//declaration
  int array[100], n, i, j;
  //input the element 
  cout << "Masukkan banyak elemen: ";
  cin >> n;
  cout << "Masukkan nilai: \n";
  //function to print an array
  for (i = 0; i < n; i++){
    cin >> array[i];
  }
  bubbleSort(array, n);
  //result
  cout << "Hasil pengurutan menggunakan bubble sort sebagai berikut:\n";
  for (i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "\n";
}

