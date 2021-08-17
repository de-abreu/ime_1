# include <math.h>

float soma_poli (float v[], float x, int n) {
	int i;
	float result = 0;
	for (i = 0; i < n; i++)
		result += v[i] * pow(x, i);
	return result;
}
