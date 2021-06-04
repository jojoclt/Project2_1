#ifndef NORMALENEMYBULLET_HPP
#define NORMALENEMYBULLET_HPP
#include "EnemyBullet.hpp"

class Enemy;
class Turret;
namespace Engine {
	struct Point;
}  // namespace Engine

class NormalEnemyBullet : public EnemyBullet {
public:
	explicit NormalEnemyBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Enemy* parent);
	void OnExplode(Turret* turret) override;
};
#endif // NORMALENEMYBULLET_HPP
