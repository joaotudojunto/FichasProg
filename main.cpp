
// FICHA 5 PROGRAMACAO
/*
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


// EX 4

#include <climits>

template <typename T>
T max_value(const T arr[], int n) {
    T max = INT_MIN;
    int i;
    for(i =0; i < n; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;

}

template <typename T>
void norm_values(T arr[], int n, T min, T max) {
    int i;
    for(i =0; i < n; i++){
        if(arr[i] > max){
            arr[i] = max;
        }else if(arr[i] < min){
            arr[i] = min;
        }
    }
}

#include <iostream>

    int main(void) {

        int iarr[6] = {2, -1, 2, 5, 1, 4};

        std::cout << "Os valores guardados no array são: " << std::endl;
        for(int i : iarr){
            std::cout << i << std::endl;
        }

        int imax = max_value(iarr, 6);
        norm_values(iarr, 6, 0, 3);
        std::cout << "max_value: O valor máximo no array COM INT é: " << imax << std::endl;



        std::cout << "Os valores NORMALIZADOS no array sao:" << std::endl;
        for(int i : iarr){
            std::cout << i << std::endl;
        }
//------------------------------------------------------------------------------------------------------------
// DOUBLE
//------------------------------------------------------------------------------------


        double darr[6] = {-1.2, 0.5, 1.3, 3.2, -0.7, 1.1};

        std::cout << "Os valores guardados no array COM DOUBLES são: " << std::endl;
        for(double i : darr){
            std::cout << i << std::endl;
        }

        double dmax = max_value(darr, 6);
        norm_values(darr, 6, -1.0, 1.0);
        std::cout << "max_value: O valor máximo no array COM DOUBLE é: " << dmax << std::endl;


        std::cout << "Os valores NORMALIZADOS no array COM DOUBLE sao:" << std::endl;
        for(double i : darr){
            std::cout << i << std::endl;
        }


        return 0;
    }

// EX 5

#include <iostream>

struct coord2d {
    int x;
    int y;
};

std::istream& operator>>(std::istream& is, coord2d& c) {
    is >> c.x >> c.y;
    return is;
}
std::ostream& operator<<(std::ostream& os, const coord2d& c) {
    os << c.x << ' ' << c.y;
    return os;
}
coord2d operator+(const coord2d& a, const coord2d& b) {
    coord2d r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    return r;
}
coord2d operator*(int f, const coord2d& c) {
    coord2d r;
    r.x = f * c.x;
    r.y = f * c.y;
    return r;
}
coord2d operator-(const coord2d& a, const coord2d& b) {
    coord2d r;
    r.x = a.x - b.x;
    r.y = a.y - b.y;

    return r;
}

coord2d operator-(const coord2d& c) {
    coord2d r;
    r.x =  -c.x;
    r.y = -c.y;

    return r;
}


int main() {


    coord2d a, b, c;
    std::cout << "Enter a, b and c: ";
    std::cin >> a >> b >> c;
    coord2d d = - a + 2 * b - c;
    //coord2d c = 2 * a + b;
    //std::cout << "2 * a + b = " << c << std::endl;


    std::cout << "- a + 2 * b - c = " << d << std::endl;


}

*/

// EX 6