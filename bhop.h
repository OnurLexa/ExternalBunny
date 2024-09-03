#pragma once
#include "dataspoof.h"
using namespace DataSpoof;

constexpr int FL_ONGROUND = (1 << 0);
const int JUMP = 5;
const int STAY = 5;

void JumpQueue()
{
	if (GetAsyncKeyState(VK_SPACE))
	{
		setJump((currentFlag & FL_ONGROUND) ? JUMP : STAY);
	}
}