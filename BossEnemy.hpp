#ifndef BOSSENEMY_HPP
#define BOSSENEMY_HPP
#include "Enemy.hpp"

class BossEnemy : public Enemy {
public:
	BossEnemy(int x, int y);
	void CreateEnemyBullet() override;
};
#endif // BOSSENEMY_HPP
