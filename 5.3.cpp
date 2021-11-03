#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
	double Pp, Pk, o ;
	int n;
	cout << "Pp = "; cin >> Pp;
	cout << "Pk = "; cin >> Pk;
	cout << "n = "; cin >> n;
	double dp = (Pk - Pp) / n;
	double P = Pp;
	while (P <= Pk)
	{

		o = z(P*P+1) - z(P*P-1)+2*z(P);
		cout << P << " " << o << endl;
		P += dp;
	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (pow(cos(x), 2)+exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = 2*x/k;
			a *= R;
			S += a;
		} while (k < 6);
		S = 1.0 / exp(x * x) * S;
	   return S;
	}
	
}
