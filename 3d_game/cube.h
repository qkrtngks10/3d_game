#pragma once
#include "calc.h"

class cube : private calc {
private:
	unsigned int handle;
public:
	XMVECTOR V[8];
	XMVECTOR VV[8];
	XMMATRIX M;
	VD D, DL, chD, chDL;
	VVD planeDL;
	VD planeD[6];
	VI F;
	XMVECTOR veloc = XMVectorSet(0, 100, 0, 0);
	cube();
	void move(XMVECTOR);
	void cal();
};