#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, R, y;
	const double PI = 3.141592653589793238;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(15) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;

	while (x < xk)
	{
		if (x <= -7 - R)
		{
			y = R;
		}
		else
		{
			if (-7 - R <= x && x <= -7 + R)
			{
				y = R - sqrt(pow(R, 2) - pow(x, 2) + (14 * x) + 49);
			}
			else
			{
				if (-7 + R <= x && x <= -4)
				{
					y = R;
				}
				else
				{
					if (-4 <= x && x <= 0)
					{
						y = -(R * x) / 4;
					}
					else
					{
						if (0 <= x && x <= PI)
						{
							y = sin(x);
						}
						else
						{
							if (PI <= x)
							{
								y = x;
							}
						}
					}
				}
			}
		}

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(15) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}

	cout << "---------------------------" << endl;

	return 0;
}