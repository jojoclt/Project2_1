#ifndef DEFENSETURRET_HPP
#define DEFENSETUREET_HPP
#include "Turret.hpp"

class DefenseTurret : public Turret {
public:
	static const int Price;
	DefenseTurret(float x, float y);
	void CreateBullet() override;
};
#endif // DEFENSETURRET_HPP
