#ifndef EXPLODETURRET_HPP
#define EXPLODETUREET_HPP
#include "Turret.hpp"

class ExplodeTurret : public Turret {
public:
	static const int Price;
	ExplodeTurret(float x, float y);
	void CreateBullet() override;
	void OnExplode();
};
#endif // EXPLODETURRET_HPP
