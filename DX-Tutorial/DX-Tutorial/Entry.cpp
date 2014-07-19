#include <iostream>
#include <d3dx10.h>

using namespace std;

ostream& operator<<(ostream& os, D3DXVECTOR3& v)
{
	os << "(" << v.x << "," << v.y << "," << v.z << ")";
	return os;
}

int main()
{
	D3DXVECTOR3 u(1.0f,2.0f,3.0f);

	float x[3] = {-2.0f,1.0f,-3.0f};

	D3DXVECTOR3 v(x);

	D3DXVECTOR3 a,b,c,d,e;

	// Vector addition with the +
	a = u + v;

	// Vector substraction with the -
	b = u - v;

	// Scalar multiplication *
	c = u * 10;

	// ||u||
	float L = D3DXVec3Length(&u);

	// d = u / ||u||
	D3DXVec3Normalize(&d, &u);

	// s = u dot v
	float s = D3DXVec3Dot(&u,&v);

	// e = u x v cross product
	D3DXVec3Cross(&e,&u,&v);

	cout << "u              =" << u << endl;
	cout << "v              =" << v << endl;
	cout << "a = u + v      =" << a << endl;
	cout << "b = u - v      =" << b << endl;
	cout << "c = u * 10     =" << c << endl;
	cout << "d = u / ||u||  =" << d << endl;
	cout << "e = u x v      =" << e << endl;
	cout << "L = ||u||      =" << L << endl;
	cout << "s = u.v        =" << s << endl;

	system("pause");
}