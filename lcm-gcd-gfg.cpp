

// brute force
    int gcd = 1;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (m % i == 0 && n % 2 == 0)
            gcd = i;
    }
    cout << gcd << endl;







        // fastest method
        long long gcd;
        long long a = A, b = B;

        while (A > 0 && B > 0)
        {

            if (A > B)
                A = A % B;

            else
                B = B % A;
        }

        if (A == 0)
            gcd = B;

        else
            gcd = A;

        long long lcm = (abs(a * b) / gcd);
       
    