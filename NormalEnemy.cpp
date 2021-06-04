#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "NormalEnemyBullet.hpp"
#include "Group.hpp"
#include "NormalEnemy.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "ShootEffect.hpp"
#include "Enemy.hpp"

NormalEnemy::NormalEnemy(int x, int y) : Enemy("play/enemy-1.png", x, y, 10, 50, 5, 5, 5) {
    // TODO 2 (6/8): + You can imitate the 2 files: 'NormalEnemy.hpp', 'NormalEnemy.cpp' to create a new enemy.
	// NOTED 1 (2/6): Imitate NomalEnemy.hpp to shoot bullets from this file 
}

void NormalEnemy::CreateEnemyBullet() {
	Engine::Point diff = Engine::Point(-1, 0);
	float rotation = ALLEGRO_PI / 2;
	getPlayScene()->EffectGroup->AddNewObject(new ShootEffect(Position.x, Position.y));
	getPlayScene()->EnemyBulletGroup->AddNewObject(new NormalEnemyBullet(Position, diff, rotation, this));
	AudioHelper::PlayAudio("gun.wav");
}
