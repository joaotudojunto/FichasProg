/*
  FICHA 5 PROGRAMACAO

// EX 1
#include <iostream>

int main() {
    // Print "Hello world! ++" ...
    std::cout << "Hello world! ++" << std::endl;
    return 0;
}

// EX 2

#include <iostream>
#include <climits>

int main(void) {
    int n;
    std::cout << "How many numbers? ";
    std::cin >> n;
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = 0;
    int value =0;

    for(int i =0; i < n; i++){
        std::cin >> value;
        if(value > max){
            max = value;
        } else if(value < min){
            min = value;
        }
        sum += value;

    }

    std::cout << "Min: " << min  << " Max: " << max  << "Sum: " << sum << std::endl;

}


// EX 3

#include <algorithm>
#include <iostream>

int main(void) {
    int n;
    std::cout << "How many numbers? ";
    std::cin >> n;
    std::cout << "Enter values: ";
    int value;
    // Allocate array
    int* a = new int[n];

    // Read values
    for(int i = 0; i < n; i++){
        std::cin >> value;
        a[i] = value;

    }
    //Sort
    std::sort(a, a + n);
    double median;

    if(n % 2 !=0){
        median = a[n/2];
    }else{
        median = (double (a[n/2-1] + a[n/2])/2);
    }

    std::cout << "Median: " << median << std::endl;
    // Release memory
    delete [] a;
    return 0;
}
*/

// EX 4