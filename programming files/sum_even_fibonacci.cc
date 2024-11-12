#include <iostream>

int main()
{
    //initial state of fibonacci, 0, 1
    int a = 0, b = 1;
    int sum_even = 0;
    //loop through 4 million iterations 
    while (b < 4000000) {
        //if iteration is even, add current fibbonocci to sum
        if (b % 2 == 0) {
            sum_even += b;
        }

        //iterate fibbonocci 
        int temp = b;
        b = a + b;
        a = temp;
    }
    //print out sum
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
