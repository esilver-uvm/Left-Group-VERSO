public class sum_even_fibonacci {
    public static void main(String[] args) {
        //initial state
        int a = 0, b = 1;
        int sumEven = 0;
        while (b < 4000000) {
            //if even, add to sum
            if (b % 2 == 0) {
                sumEven += b;
            }

            //compute next fibbonocci number
            int temp = b;
            b = a + b;
            a = temp;
        }

        //output sum
        System.out.println(sumEven);
    }
}

// answer should be 4613732
