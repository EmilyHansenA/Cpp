#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class trey {
public:
	
	void get_xy () {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	}

	void schet_vec () {

		vec1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

		vec2 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);

		vec3 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
	}

	void vyvod() {
		if (sqrt(vec1) + sqrt(vec2) <= sqrt(vec3) ||
			sqrt(vec2) + sqrt(vec3) <= sqrt(vec1) ||
			sqrt(vec1) + sqrt(vec3) <= sqrt(vec2))
			cout << "Treugol'nika ne suschestvuet";

		else if (vec1 + vec2 == vec3 || vec2 + vec3 == vec1 || vec1 + vec3 == vec2)
			cout << "Treugol'nik pryamougol'nyi";

		else if (vec1 + vec2 < vec3 || vec2 + vec3 < vec1 || vec3 + vec1 < vec2)
			cout << "Treugol'nik tupougol'nyi";

		else if (vec1 + vec2 > vec3 || vec2 + vec3 > vec1 || vec3 + vec1 > vec2)
			cout << "Treugol'nik ostrougol'nyi";
	}

private:
	int x1, x2, x3, y1, y2, y3;
	double vec1, vec2, vec3;
};

int main() {
	
	trey tr;

	tr.get_xy ();
	
	tr.schet_vec();
	
	tr.vyvod();
	
	return 0;
}
