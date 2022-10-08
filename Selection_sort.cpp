// Selection sort in C++

#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}

// driver code
int main() {
  // array initialization
  cout<<"Enter no. of elements"<<endl;
  int n;	cin>>n;
  int data[n];
  cout << "Enter elements " << endl;
  
  //  store input from user to array
  for (int i = 0; i < n; ++i) {
    cin >> data[i];
  }

  selectionSort(data, n);
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, n);
}