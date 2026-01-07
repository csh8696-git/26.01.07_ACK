#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
	int answer = 0;
	int num = 0;
	for (int i = left; i <= right; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				num += 1;
			}
		}
		if (num % 2 == 0)//약수 갯수가 짝수면
		{
			answer += i;
		}
		else
		{
			answer -= i;
		}
		num = 0;
	}
	return answer;
}

int sign(int n, int count = 1) {
	for (int i = 1, last = n >> 1; i <= last; ++i) if (n % i == 0) ++count;
	return count & 1 ? -1 : 1;
}
int solution(int a, int b) { return a > b ? 0 : sign(a) * a + solution(a + 1, b); }
