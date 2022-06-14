#include <iostream>
using namespace std;

long long int SquareRoot(int n) // function use to find the square root
{

        int start = 0;
        int end = n;

        long long int mid = start + (end - start) / 2;
        long long int ans = -1;
        while (start <= end)
        {

                long long int sqrt = mid * mid;
                if (sqrt == n)
                {
                        return mid;
                }
                if (sqrt < n)
                {
                        ans = mid;
                        start = mid + 1;
                }
                else
                {
                        end = mid - 1;
                }
                mid = start + (end - start) / 2;
        }
        return ans;
}
double morep(int n, int p, int tempsol) // this function return the ans in point .ex- 37=6.082
{
        double factor = 1;
        double ans = tempsol;
        for (int i = 0; i < p; i++)
        {
                factor = factor / 10;
                for (double j = ans; j * j < n; j = j + factor)
                {
                        ans = j;
                }
        }
        return ans;
}
int main()
{
        int n;
        cout << "enter no  " << endl;
        cin >> n;
        int tempsol = SquareRoot(n);
        cout << "ans is " << morep(n, 3, tempsol) << endl;
        return 0;
}