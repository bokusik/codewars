typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n) {
    ull sum = 0, fib = 0, fib1 = 1;
	  for (int i = 0; i < n + 1; i++) {
		  fib += fib1;      
		  fib1 = fib - fib1;
		  sum += fib;
	  }
    return 4 * sum;
  }
};