#ifndef REMOVETURRET_HPP
#define REMOVETURRET_HPP
#include "Turret.hpp"

class Remove_Turret : public Turret {
public:
	static const int Price;
	Remove_Turret(float x, float y);
	void CreateBullet() override;
};
#endif // FREEZETURRET_HPP
