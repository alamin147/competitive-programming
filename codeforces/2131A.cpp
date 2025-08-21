#include <iostream>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        int a[n], b[n], s = 1;
        for (int i = 0; i < n; i++)
            std::cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            std::cin >> b[i];
            s += std::max(0, a[i] - b[i]);
        }
        std::cout << s << std::endl;
    }
}
